#include <iostream>
using namespace std;
class A
{
public:
    void showA()
    {
        cout << "A." << endl;
    }
};
class B : public A
{
public:
    void showB()
    {
        cout << "B." << endl;
    }
};
class C : public B
{
public:
    void showC()
    {
        cout << "C." << endl;
    }
};
int main()
{
    C a;
    a.showA();
    a.showB();
    a.showC();
}