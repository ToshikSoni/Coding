#include <iostream>
using namespace std;
class MyDataStructure
{
public:
    int size = 0;
    int *arr, *temp;

    MyDataStructure()
    {
        arr = new int[size];
    }

    // Insert element 'X'. Returns true if the element was not present, and false otherwise.
    bool insert(int x)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == x)
                return false;
        }
        temp = new int[size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        size++;
        delete arr;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = temp[i];
            if (i == size - 1)
            {
                arr[i] = x;
            }
        }
        delete temp;
        return true;
    }

    // Removes element 'X', if present. Returns true if the element was present and false otherwise.
    bool remove(int x)
    {
        int index;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == x)
            {
                index = i;
            }
            if (i == size - 1)
            {
                return false;
            }
        }
        temp = new int[size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete arr;
        size--;
        arr = new int[size];
        for (int i = 0; i < size + 1; i++)
        {
            if (i < index)
            {
                arr[i] = temp[i];
            }
            else if (i == index)
            {
                continue;
            }
            else
            {
                arr[i - 1] = temp[i];
            }
        }
        return true;
    }

    // Search element 'X'. Returns true if the element was present, and false otherwise.
    bool search(int x)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == x)
            {
                return true;
            }
        }
        return false;
    }

    // Returns a random element present in the data structure.
    int getRandom()
    {
        // Write your code here.
        return 0;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    MyDataStructure ds;
    cout << "Print 1: " << endl;
    ds.print();
    ds.insert(1);
    ds.insert(2);
    ds.insert(3);
    ds.insert(4);
    ds.insert(5);
    ds.insert(1);
    ds.remove(1);
    cout << "Print 2: " << endl;
    ds.print();
    
}