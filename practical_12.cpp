
#include<iostream>
#include<iomanip>
using namespace std;

class Result;
class Student
{
    char StudentID[7];
    string StudentName;
    int Semester;

    public:
    void getdata_stu()
    {
        cout<<"Enter StudentID: ";
        cin>>StudentID;
        fflush(stdin);
        cout<<"Enter Student Name: ";
        cin>>StudentName;
        fflush(stdin);
        cout<<"Enter Semester: ";
        cin>>Semester;
    }
    void putdata_stu()
    {
        cout<<"Student ID"<<setw(6)<<":  "<<StudentID<<endl;
        cout<<"Student name"<<setw(4)<<":  "<<StudentName<<endl;
        cout<<"Semester"<<setw(8)<<":  "<<Semester<<endl;
    }
    void getdata_result(Result &result);
    void calculate_result(Result &result);
    void putdata_result(Result &result);
};
class Result
{
    string StudentName,SubjectName[3],LetterGradeT[3],LetterGradeP[3];
    int Semester,MarksTheory[3],MarksPractical[3],GradePoint,i,TheoryCredit[3],PracticalCredit[3],CGT[3],CGP[3],TotalCredit=0;
    float SGPA=0,SumCG=0;

    public:
    friend void Student::getdata_result(Result &);
    friend void Student::calculate_result(Result &);
    friend void Student::putdata_result(Result &);
};
void Student::getdata_result(Result &result)
{
    for(int i=0;i<3;i++)
        {
            cout<<"Enter "<<i+1<<" Subject Name: ";
            fflush(stdin);
            getline(cin,result.SubjectName[i]);
            cout<<"Enter "<<result.SubjectName[i]<<" Theory Marks: ";
            cin>>result.MarksTheory[i];
            cout<<"Enter "<<result.SubjectName[i]<<" Practical Marks: ";
            cin>>result.MarksPractical[i];
            cout<<"Enter "<<result.SubjectName[i]<<" Theory Credit: ";
            cin>>result.TheoryCredit[i];
            cout<<"Enter "<<result.SubjectName[i]<<" Practical Credit: ";
            cin>>result.PracticalCredit[i];
            result.TotalCredit=result.TotalCredit+result.TheoryCredit[i]+result.PracticalCredit[i];
            cout<<endl;
        }
}
void Student::calculate_result(Result &result)
{
    int i;
    for(i=0;i<3;i++)
    {
        if(result.MarksTheory[i]>=80&&result.MarksTheory[i]<100)
        {
            result.LetterGradeT[i]="AA";
            result.GradePoint=10;
        }
        else if(result.MarksTheory[i]>=73&&result.MarksTheory[i]<80)
        {
            result.LetterGradeT[i]="AB";
            result.GradePoint=9;
        }
        else if(result.MarksTheory[i]>=66&&result.MarksTheory[i]<73)
        {
            result.LetterGradeT[i]="BB";
            result.GradePoint=8;
        }
        else if(result.MarksTheory[i]>=60&&result.MarksTheory[i]<66)
        {
            result.LetterGradeT[i]="BC";
            result.GradePoint=7;
        }
        else if(result.MarksTheory[i]>=55&&result.MarksTheory[i]<60)
        {
            result.LetterGradeT[i]="CC";
            result.GradePoint=6;
        }
        else if(result.MarksTheory[i]>=50&&result.MarksTheory[i]<55)
        {
            result.LetterGradeT[i]="CD";
            result.GradePoint=5;
        }
        else if(result.MarksTheory[i]>=45&&result.MarksTheory[i]<50)
        {
            result.LetterGradeT[i]="DD";
            result.GradePoint=4;
        }
        else
        {
            result.LetterGradeT[i]="FF";
            result.GradePoint=0;
        }
        result.CGT[i]=result.TheoryCredit[i]*result.GradePoint;
        result.SumCG=result.SumCG+result.CGT[i];
    }
     for(i=0;i<3;i++)
    {
        if(result.MarksPractical[i]>=80&&result.MarksPractical[i]<100)
        {
            result.LetterGradeP[i]="AA";
            result.GradePoint=10;
        }
        else if(result.MarksPractical[i]>=73&&result.MarksPractical[i]<80)
        {
            result.LetterGradeP[i]="AB";
            result.GradePoint=9;
        }
        else if(result.MarksPractical[i]>=66&&result.MarksPractical[i]<73)
        {
            result.LetterGradeP[i]="BB";
            result.GradePoint=8;
        }
        else if(result.MarksPractical[i]>=60&&result.MarksPractical[i]<66)
        {
            result.LetterGradeP[i]="BC";
            result.GradePoint=7;
        }
        else if(result.MarksPractical[i]>=55&&result.MarksPractical[i]<60)
        {
            result.LetterGradeP[i]="CC";
            result.GradePoint=6;
        }
        else if(result.MarksPractical[i]>=50&&result.MarksPractical[i]<55)
        {
            result.LetterGradeP[i]="CD";
            result.GradePoint=5;
        }
        else if(result.MarksPractical[i]>=45&&result.MarksPractical[i]<50)
        {
            result.LetterGradeP[i]="DD";
            result.GradePoint=4;
        }
        else
        {
            result.LetterGradeP[i]="FF";
            result.GradePoint=0;
        }
        result.CGP[i]=result.PracticalCredit[i]*result.GradePoint;
        result.SumCG=result.SumCG+result.CGP[i];
    }
}
void Student::putdata_result(Result &result)
{
    int i;
    result.SGPA=result.SumCG/result.TotalCredit;
    cout<<endl<<"Result: "<<endl;
    fflush(stdout);
    cout<<setw(33)<<"Theory"<<setw(16)<<"Practical"<<endl;
    for(i=0;i<3;i++)
    {
       cout<<result.SubjectName[i]<<setw(30-result.SubjectName[i].length())<<result.LetterGradeT[i]<<setw(16)<<result.LetterGradeP[i]<<endl;
    }
    cout<<endl<<"SGPA"<<setw(12)<<":  "<<setprecision(3)<<result.SGPA;
}
int main()
{
    class Student Std;
    class Result s1;
    Std.getdata_stu();
    Std.getdata_result(s1);
    Std.calculate_result(s1);
    Std.putdata_stu();
    Std.putdata_result(s1);
    return 0;

}
