#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Area {

private:
    float area1,h,b,d;

public:
    void data()
    {
    cout<<"Enter the radius of Circle : ";
    cin>>h;
    fflush(stdin);
    area(h);
    cout<<"Enter the height of Rectangle : ";
    cin>>h;
    fflush(stdin);
    cout<<"Enter the breadth of Rectangle : ";
    cin>>b;
    fflush(stdin);
    area(h,b);
    cout<<"Enter the height of Cuboid : ";
    cin>>h;
    fflush(stdin);
    cout<<"Enter the breadth of Cuboid : ";
    cin>>b;
    fflush(stdin);
    cout<<"Enter the width of Cuboid : ";
    cin>>d;
    fflush(stdin);
    area(h,b,d);

    cout<<"This code is done by Nemin Haria - 23CE040";
    }

    void area(float height)
    {
        area1=3.14*height*height;
        cout<<"Area of Circle is : "<<area1<<endl;
    }
    void area(float height, float breadth)
    {
        area1=height*breadth;
        cout<<"Area of Rectangle is : "<<area1<<endl;
    }
    void area(float height, float breadth, float depth)
    {
        area1=height*breadth*depth;
        cout<<"Area of Cuboid is : "<<area1<<endl;
    }


};

int main()
{
    class Area area;
    area.data();
    return 0;                                                                                                                                                                                                                                                                                                       //Nemin
}

