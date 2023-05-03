#include <iostream>
using namespace std;
class HashTable
{
    int ts;
    int *table; // creation of table
    int Hashfn(int key)
    {
        return key % ts;
    }
    void reHash()
    {
        int temptable[ts], oldts = ts; // creation of new table to increase the size of table
        for (int i = 0; i < ts; i++)
        {
            temptable[i] = table[i]; // data copying in new table
        }
        delete[] table;      // delete table
        ts = ts * 2 + 1;     // odd
        table = new int[ts]; // allocation of new size
        for (int i = 0; i < ts; i++)
        {
            table[i] = -1; // set null
        }
        for (int i = 0; i < oldts; i++)
        {
            insert(temptable[i]); // insertion of values into new table
        }
    }

public:
    HashTable(int default_size = 7)
    {
        ts = default_size;
        table = new int[default_size];
        for (int i = 0; i < ts; i++)
        {
            table[i] = -1; // set null
        }
    }
    void insert(int value)
    {
        int idx = Hashfn(value);
        if (table[idx] == -1)
        {
            table[idx] = value;
            return;
        }
        else // linear probing
        {
            int probe = (idx + 1) % ts;
            while (probe != idx)
            {
                if (table[probe] == -1)
                {
                    table[probe] = value;
                    return;
                }
                probe = (idx + 1) % ts;
            }
        }
        /*
        else //quadratic probing
        {
            int i=1;
            int probe=(idx+i*i)%ts;
            while(probe!=idx)
            {
                if(table[probe]==-1)
                {
                    table[probe]=value;
                    return;
                }
                i++;
                probe=(idx+i*i)%ts;
            }
        }
        */
        reHash();
        insert(value);
    }
    void search(int value)
    {
        int idx = Hashfn(value);
        if (table[idx] == -1)
        {
            cout << "Element does not exists in the table." << endl;
            return;
        }
        if (table[idx] == value)
        {
            cout << "Element exists in the table at index: " << idx << endl;
            return;
        }
        else // linear probing
        {
            int probe = (idx + 1) % ts;
            while (probe != idx)
            {
                if (table[probe] == value)
                {
                    cout << "Element exists in the table at index: " << probe << endl;
                    return;
                }
                probe = (idx + 1) % ts;
            }
        }
    }
    void del(int value)
    {
        int idx = Hashfn(value);
        if (table[idx] == -1)
        {
            cout << "Element does not exists in the table." << endl;
            return;
        }
        if (table[idx] == value)
        {
            cout << "Element deleted in the table at index: " << idx << endl;
            table[idx] = -1;
            return;
        }
        else // linear probing
        {
            int probe = (idx + 1) % ts;
            while (probe != idx)
            {
                if (table[probe] == value)
                {
                    cout << "Element deleted in the table at index: " << probe << endl;
                    table[probe] = -1;
                    return;
                }
                probe = (idx + 1) % ts;
            }
        }
    }
    void print()
    {
        for (int i = 0; i < ts; i++)
        {
            cout << "INDEX: " << i << ", Value: " << table[i];
        }
    }
};
int main()
{
    HashTable h;
    h.insert(5);
    h.insert(12);
    h.insert(23);
    h.insert(334);
    h.insert(34);
    h.insert(45);
    h.print();
    h.search(34);
    h.del(12);
    h.print();
}
