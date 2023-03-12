#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;
    string name;

public:
    Student() {}
    Student(int r, char n)
    {
        roll_no = r;
        name = n;
    }
};
class Fees : protected Student
{
    int fees;

public:
    Fees() {}
    Fees(int f)
    {
        fees = f;
    }
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
class Result : protected Student
{
    int marks;
    char grade;

public:
    Result() {}
    Result(int m)
    {
        marks = m;
    }
    char showgrade()
    {
        if (marks == 100)
            grade = 'O';
        else if (marks >= 80)
            grade = 'A';
        else if (marks >= 60)
            grade = 'B';
        else if (marks >= 40)
            grade = 'C';
        else if (marks >= 20)
            grade = 'D';
        else if (marks >= 0)
            grade = 'E';
        return grade;
    }
};
int main()
{
}