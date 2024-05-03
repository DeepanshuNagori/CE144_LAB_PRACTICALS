#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
    string studentId;
    string studentName;
    int sem,theory[3],practical[3],A[3],B[3],i;
    string C[3],D[3];
    string subjectName[3];
    float CGPA;
    cout<<"Enter Name of Student : ";
    cin>>studentName;
    cout<<"Enter ID of Student : ";
    cin>>studentId;
    cout<<"Enter Semister of Student : ";
    cin>>sem;
    for(i=0;i<3;i++)
    {
        fflush(stdin);
        cout<<"Enter Subject "<<i+1<<" Name :";
        getline(cin,subjectName[i]);
    }
    for(i=0;i<3;i++)
    {
        cout<<"Enter Marks of Subject "<<i+1<<" : ";
        cin>>theory[i];
    }
    for(i=0;i<3;i++)
    {
        cout<<"Enter Marks of Subject "<<i+1<<" : ";
        cin>>practical[i];
    }
    cout<<"\n\n";
    for(i=0;i<3;i++)
    {
        if(practical[i]<100 && practical[i]>=80)
        {
            A[i]=10;
            C[i]="AA";
        }
        else if(practical[i]<80 && practical[i]>=73)
        {
            A[i]=9;
            C[i]="AB";
        }
        else if(practical[i]<73 && practical[i]>=66)
        {
            A[i]=8;
            C[i]="BB";
        }
        else if(practical[i]<66 && practical[i]>=60)
        {
            A[i]=7;
            C[i]="BC";
        }
        else if(practical[i]<60 && practical[i]>=55)
        {
            A[i]=6;
            C[i]="CC";
        }
        else if(practical[i]<55 && practical[i]>=50)
        {
            A[i]=5;
            C[i]="CD";
        }
        else if(practical[i]<50 && practical[i]>=45)
        {
            A[i]=4;
            C[i]="DD";
        }
        else if(practical[i]<45)
        {
            A[i]=0;
            C[i]="FF";
        }
    }
    for(i=0;i<3;i++)
    {
        if(theory[i]<100 && theory[i]>=80)
        {
            B[i]=10;
            D[i]="AA";
        }
        else if(theory[i]<80 && theory[i]>=73)
        {
            B[i]=9;
            D[i]="AB";
        }
        else if(theory[i]<73 && theory[i]>=66)
        {
            B[i]=8;
            D[i]="BB";
        }
        else if(theory[i]<66 && theory[i]>=60)
        {
            B[i]=7;
            D[i]="BC";
        }
        else if(theory[i]<60 && theory[i]>=55)
        {
            B[i]=6;
            D[i]="CC";
        }
        else if(theory[i]<55 && theory[i]>=50)
        {
            B[i]=5;
            D[i]="CD";
        }
        else if(theory[i]<50 && theory[i]>=45)
        {
            B[i]=4;
            D[i]="DD";
        }
        else if(theory[i]<45)
        {
            B[i]=0;
            D[i]="FF";
        }
    }
    for(i=0;i<3;i++)
    {
        CGPA+=(float)4*A[i] + (float)4*B[i];
    }
    CGPA=CGPA/24;
    //printing outputs

    cout<<"Student ID"<<setw(12)<<":"<<setw(5)<<" "<<setw(-10)<<studentId<<endl;
    cout<<"Student Name"<<setw(10)<<":"<<setw(5)<<" "<<setw(-10)<<studentName<<endl;
    cout<<"Semester"<<setw(14)<<":"<<setw(5)<<" "<<setw(-10)<<sem<<endl;
    cout<<setw(35)<<" "<<setw(-10)<<"Theory"<<setw(7)<<" "<<"Practical"<<endl;
    cout<<subjectName[0]<<setw(18)<<" "<<D[0]<<setw(13)<<C[0]<<endl;
    cout<<subjectName[1]<<setw(16)<<" "<<D[1]<<setw(13)<<C[1]<<endl;
    cout<<subjectName[2]<<setw(10)<<"  "<<D[2]<<setw(13)<<C[2]<<endl;
    cout<<"S.G.P.A"<<setw(14)<<":"<<setw(5)<<CGPA;
    cout<<"\n\n";

}
