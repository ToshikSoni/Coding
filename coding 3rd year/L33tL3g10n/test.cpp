#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, nth = 3;
    cout << "enter number: ";
    cin >> n;
    int count = 1;
    while (n > 0 && count < 3)
    {
        n = n >> 1;
        count++;
    }
    if (n & 1 == 1)
        cout << "yes";
    else
        cout << 'n';
}