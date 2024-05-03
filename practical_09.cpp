#include<iostream>
using namespace std;
class MM;
class CM
{
    float cm;
public:
    CM()
    {
        cm=0;
    }
    void getcmdata()
    {
        cout << "Enter Measurement in cm :";
        cin >> cm;
    }
    void putcmdata()
    {
        cout << "Measurement in cm is " << cm;
    }
    float sendcmdata();
    CM(MM &X);
};
class MM
{
    float mm;
public:
    MM()
    {
        mm=0;
    }
    void getmmdata()
    {
        cout << "Enter Measurement in mm :";
        cin >> mm;
    }
    void putmmdata()
    {
        cout << "Measurement in mm is " << mm;
    }
    float sendmmdata();
    MM(CM &X);
};

float CM::sendcmdata()
{
    return cm;
}

CM::CM(MM &X)
{
    cm=X.sendmmdata()/10;
}

MM::MM(CM &X)
{
    mm=X.sendcmdata()*10;
}

float MM::sendmmdata()
{
    return mm;
}
int main()
{
    MM m;
    CM c;
    int option;
    cout << "Enter 1 : mm to cm converter " << endl;
    cout << "Enter 2 : cm to mm converter " << endl;
    cin >> option;
    switch(option)
    {
    case 1:
        {
            m.getmmdata();
            c=m;
            c.putcmdata();
            break;
        }
    case 2:
        {
            c.getcmdata();
            m=c;
            m.putmmdata();
            break;
        }
    }
    return 0;
}

