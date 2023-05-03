#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 11; i++)
    {
        static int a = 0;
        a++;
        cout << a << endl;
    }
}