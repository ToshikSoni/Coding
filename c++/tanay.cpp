#include <iostream>
using namespace std;
class HashTable
{
    int ts;
    int *table;
    int HashFn(int key)
    {
        return key % ts;
    }
    void rehash()
    {
        int temp[ts], oldts = ts;
        for (int i = 0; i < ts; i++)
            temp[i] = table[i];
        delete[] table;
        ts = (ts * 2) + 1;
        table = new int[ts];
        for (int i = 0; i < ts; i++)
            table[i] = -1;
        for (int i = 0; i < oldts; i++)
            insert(temp[i]);
    }

public:
    HashTable(int size = 7)
    {
        ts = size;
        table = new int[ts];
        for (int i = 0; i < ts; i++)
            table[i] = -1;
    }
    void insert(int value)
    {
        int idx = HashFn(value);
        if (table[idx] == -1)
        {
            table[idx] = value;
            return;
        }
        int probe = (idx + 1) % ts; // linear probing
        while (probe != idx)
        {
            if (table[probe] == -1)
            {
                table[probe] = value;
                return;
            }
            probe = (probe + 1) % ts;
        }
        rehash();
        insert(value);
    }
    void search(int key)
    {
        int idx = HashFn(key);
        if (table[idx] == -1)
        {
            cout << "Element doesnt exist in the table." << endl;
            return;
        }
        if (table[idx] == key)
            cout << "Element found in the tabke at index: " << idx << endl;
        return;
        int probe = (idx + 1) % ts; // linear probing
        while (probe != idx)
        {
            if (table[probe] == key)
            {
                cout << "Element found in the tabke at index: " << probe << endl;
                return;
            }
            probe = (probe + 1) % ts;
        }
    }
    void erase(int key)
    {
        int idx = HashFn(key);
        if (table[idx] == -1)
        {
            cout << "Element doesnt exist in the table." << endl;
            return;
        }
        if (table[idx] == key)
        {
            cout << "Element deleted from index: " << idx << endl;
            table[idx] = -1;
            return;
        }
        int probe = (idx + 1) % ts; // linear probing
        while (probe != idx)
        {
            if (table[probe] == key)
            {
                cout << "Element deleted from index: " << probe << endl;
                table[idx] = -1;
                return;
            }
            probe = (probe + 1) % ts;
        }
    }
    void print()
    {
        for (int i = 0; i < ts; i++)
            cout << "Index: " << i << ", Value: " << table[i] << endl;
    }
};
int main()
{
    HashTable h;
    h.insert(66);
    h.print();
    h.search(66);
    h.erase(66);
    h.print();
}