#include <iostream>
using namespace std;
template <typename T>
class Stack
{
public:
    void push(T x);
    T pop();

private:
    vector<T> data;
};
template <typename T>
void Stack<T>::push(T x)
{
    data.push_back(x);
}
template <typename T>
T Stack<T>::pop()
{
    T x = data.back();
    data.pop_back();
    return x;
}
int main()
{

}