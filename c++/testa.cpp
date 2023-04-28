#include <iostream>
using namespace std;
int main()
{
    int a[10], index;
    try
    {
        cout << "Enter index: ";
        cin >> index;
        if (index < 0 || index > 9)
        {
            throw index;
        }
    }
    catch (int)
    {
        cout << "Array index out of bounds.";
    }
}