#include <iostream>
using namespace std;
class Base
{
public:
    void *operator new(size_t size)
    {
        void *p = ::operator new(size);
        return p;
    }
    void operator delete(void *p)
    {
        free(p);
    }
};
int main()
{
    Base b;
    b.operator new(4);
    cout << "Dynamically allocated size of object: " << sizeof(b) << endl;
    b.operator delete;
}