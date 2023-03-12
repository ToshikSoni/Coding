#include <iostream>
using namespace std;
class Test
{
public:
    static int x;
};
int Test::x;
int main()
{   
    cout << "\n X is " << Test::x;
}