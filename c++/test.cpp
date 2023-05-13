#include <iostream>
using namespace std;
class Heap
{
public:
    int arr[100], size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int value)
    {
        size++;
        int index = size;
        arr[index] = value;
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
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int left = i * 2;
            int right = i * 2 + 1;
            if (left <= size && right <= size)
            {
                if (arr[i] < arr[left] || arr[i] < arr[right])
            }
        }
    }
};
int main()
{
}