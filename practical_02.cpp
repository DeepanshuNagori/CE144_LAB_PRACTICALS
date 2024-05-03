#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//Creating a structure named employee
struct employee
{
    private:
    string Name,Qual;
    float Exp;
    long double C_No;
    int id;
    public:
    //Function to get data and put data
    void getdata()
    {
        cout<<"Enter the id:";
        cin>>id;
        cout<<"Enter the employee name:";
        cin>>Name;
        cout<<"Enter qualification:";
        cin>>Qual;
        cout<<"Enter the years of experience:";
        cin>>Exp;
        cout<<"Enter the contact number:";
        cin>>C_No;
    }
    void putdata()
    {
        cout<<"**************************************"<<endl;
        cout<<setw(30)<<left<<"The name of the employee is"<<":"<<Name<<endl;
        cout<<setw(30)<<left<<"Qualification"<<":"<<Qual<<endl;
        cout<<setw(30)<<left<<"Years of experience"<<":"<<Exp<<endl;
        cout<<setw(30)<<left<<"Contact number"<<":"<<C_No<<endl;
        cout<<"**************************************"<<endl;
    }
    //Function to get id in main
    int getid()
    {
        return id;
    }
};

int main()
  {
    int n,i;
    char x;
    cout<<"The number of employees are:";
    cin>>n;
    struct employee Employee[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the details of employee "<<i+1<<""<<endl;
        Employee[i].getdata();
    }

    system("CLS"); // clearing screen

    do
    {
        int z;
        cout<<"Enter the employee id ";
        cin>>z;
        for(i=0;i<n;i++)
        {

            if(z == Employee[i].getid())
            {
                Employee[i].putdata();
                break;
            }

        }
        if(i==n)
        {
            cout<<"***************************"<<endl;
            cout<<"Error.Entered employee id does not exist."<<endl;
            cout<<"***************************"<<endl;
        }
        cout<<"Enter Y for continue and N for exit:"<<endl;
        cin>>x;
    }while(x == 'Y' || x=='y');



    return 0;
 }
