#include <iostream>
using namespace std;
class Student
{
    int roll_no;
    string name;
};
class Fees : protected Student
{
    int fees;
public:
    void submitFees()
    {
        cout << "Enter fees amount: ";
        cin >> fees;
        cout << "Fee amount has been submitted." << endl;
    }
    void generateReceipt()
    {
        cout << "Receipt has been generated for fees amount: " << fees << endl;
    }
};
class Result : public Student
{
    int marks;
    char grade;
};
int main()
{
}