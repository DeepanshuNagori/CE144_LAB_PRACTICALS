#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
int c=0;
class circle
{
    int r;
    float area;
    public:
    circle()
    {
        r=1;
        c++;
    }
    circle( int radius )
    {
        r=radius;
        c++;
    }
    circle( class circle &N )
    {
        r=N.r;
        c++;
    }
    void display()
    {
        cout << "Circle with radius " << r << " has area " << area << endl;
    }
    void calculate()
    {
        area=3.148*r*r;
    }
    ~circle()
    {
        cout << "One object is deleted" << endl;
        c--;
        cout << "total active object : " << c << endl;
    }
};
int main()
{
    class circle *a,*b,*c;
    a=new circle();
    a->calculate();
    a->display();
    b=new circle(20);
    b->calculate();
    b->display();
    c=new circle(*a);
    delete a;
    delete b;
    c->calculate();
    c->display();
    delete a;
    delete b;
    delete c;
}

