#include<iostream>
using namespace std;
class Employee
{
    int y,m;
public:
    void getdata()
    {
        cout << "Enter employee experience in years and months"<< endl;
        cout << "years : ";
        cin >> y;
        cout << "months : ";
        cin >> m;
    }
    operator float()
    {
        float exp;
        exp = y + (m/12.0);
        return exp;
    }
};
int main()
{
    Employee E;
    float exp;
    E.getdata();
    exp = E;
    cout << "Employee experience is : " << exp;
    return 0;
}

