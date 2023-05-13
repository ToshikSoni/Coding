#include <iostream>
using namespace std;
class heap
{
public:
    int arr[100], size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }
    void deleteHeap()
    {
        if (size == 0)
        {
            cout << "there is nothing to delete";
            return;
        }
        arr[1] = arr[size];

        size--;

        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (arr[leftIndex] < arr[rightIndex])
            {
                if (rightIndex < size && arr[i] < arr[rightIndex])
                {
                    swap(arr[i], arr[rightIndex]);
                    i = rightIndex;
                }
                else
                    return;
            }
            else
            {
                if (leftIndex < size && arr[i] < arr[leftIndex])
                {
                    swap(arr[i], arr[leftIndex]);
                    i = leftIndex;
                }
                else
                    return;
            }
        }
    }
    void heapify()
};