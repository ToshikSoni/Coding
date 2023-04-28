#include <iostream>
using namespace std;
class HashTable
{
    int ts = 7, **table = new int *[ts];
    int HashFn(string key)
    {
        int idx = 0, power = 19;
        for (auto ch : key)
        {
            idx += ch * power;
            power *= 19;
        }
        idx %= 19;
        return idx;
    }
    void rehash()
    {
        ts = ts * 2 + 1;
        int **temp = new int *[ts];
    }

public:
};
int main()
{
}