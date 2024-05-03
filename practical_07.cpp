#include<iostream>
using namespace std;
class Complex
{
private:
    float Re,Im;
public:
    void get()
    {
        cout<<"Enter real part : ";
        cin>>Re;
        cout<<"Enter imaginary part : ";
        cin>>Im;
    }
    void display() const
    {
        if(Im<0)
        {
            cout<< Re <<" "<< Im <<"i" << endl;
        }
        else if(Im>0)
        {
            cout<< Re <<"+"<< Im <<"i" << endl;
        }
    }
    Complex operator+(Complex &X)
    {
        Complex temp;
        temp.Re = Re + X.Re;
        temp.Im = Im + X.Im;
        return temp;
    }
    Complex operator-(Complex &X)
    {
        Complex temp;
        temp.Re = Re - X.Re;
        temp.Im = Im - X.Im;
        return temp;
    }
    Complex operator*(Complex &X)
    {
        Complex temp;
        temp.Re = (Re*X.Re)-(Im*X.Im);
        temp.Im = (Re*X.Im)+(Im*X.Re);
        return temp;
    }
    Complex operator/(Complex &X)
    {
        Complex temp;
        temp.Re = ((Re*X.Re)+(Im*X.Im))/((X.Im*X.Im)+(X.Re*X.Re));
        temp.Im = ((Im*X.Re)-(Re*X.Im))/((X.Im*X.Im)+(X.Re*X.Re));
        return temp;
    }
    void operator!()
    {
        Re=-Re;
        Im=-Im;
    }

};
int main()
{
    Complex num1,num2,num3;
    char c;
    num1.get();
    num2.get();
    cout<<"Choose operation "<< endl << "(+) addition " << endl << "(-) subtraction " << endl << "(*) multiplication "<< endl << "(/) division "<< endl << "(!) negation " << endl;
    cout<<"Enter your choice : ";
    cin>>c;
    switch(c)
    {
    case '+' :
        {
            num3=num1+num2;
            num3.display();
            break;
        }
    case '-' :
        {
            num3=num1-num2;
            num3.display();
            break;
        }
    case '*' :
        {
            num3=num1*num2;
            num3.display();
            break;
        }
    case '/' :
        {
            num3=num1/num2;
            num3.display();
            break;
        }
    case '!' :
        {
            !num1;
            !num2;
            num1.display();
            num2.display();
            break;
        }
    }
}

