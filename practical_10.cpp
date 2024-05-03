#include<iostream>
using namespace std;
class Employee
{
    int y,m;
public:
    Employee()
    {
        y=0;
        m=0;
    }
    Employee(float EXP)
    {
        y=EXP;
        m=(EXP - y)*12;
    }
    void putdata()
    {
        cout << "Employee experience is " << y << " years and " << m << " months";
    }
};
int main()
{
    Employee E;
    float exp;
    cout << "Enter employee experience : ";
    cin >> exp;
    E=exp;
    E.putdata();
    return 0;
}

