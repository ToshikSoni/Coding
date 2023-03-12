#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
class New_delete
{
    string name;
    int age;

public:
    New_delete()
    {
        name = '\0';
        age = 0;
    }
    New_delete(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age :" << age << endl;
    }
    void *operator new(size_t s)
    {
        cout << "Overloading new operator with size:" << s << endl;
        void *p = ::operator new(s);
        return p;
    }
    void operator delete(void *p)
    {
        cout << "Destructor called . " << endl;
        free(p);
    }
};
int main()
{
    New_delete *p = new New_delete("Mitali", 18);
    cout << sizeof(p) << endl;
    p->display();
    delete p;
    cout << sizeof(p) << endl;
}