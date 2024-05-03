#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Literature
{
    int uid;
    string title;
public:
    void getdata()
    {
        cout << "ID : ";
        cin >> uid;
        fflush(stdin);
        cout << "Title : ";
        getline( cin , title);
        fflush(stdin);
    }
    void putdata()
    {
        cout << setw(8) << left << uid <<setw(40) << left << title ;
    }

};

class ELiterature : public virtual Literature
{
    string DOI;
public:
    void getdata()
    {
        cout << "DOI : ";
        cin>> DOI;
        fflush(stdin);
    }
    void putdata()
    {
        cout << setw (8) << left << DOI;
    }
};

class HardBoundLiterature : public virtual Literature
{
    int Copies;
public:
    void getdata()
    {
        cout << "In stock copies : ";
        cin >> Copies;
        fflush(stdin);
    }
    void putdata()
    {
        cout << setw (8) << left << Copies;

    }
};

class Books : public ELiterature , public HardBoundLiterature
{
    int ISBN;
    char x;
    public:
    void getdata()
    {
        Literature::getdata();
        cout << "Enter E for ELiterature and H for HardBoundLiterature : ";
    A:    cin >> x;
        if(x=='E' || x=='e')
        {
            ELiterature::getdata();
        }
        else if(x=='H' || x=='h')
        {
            HardBoundLiterature::getdata();
        }
        else
        {
            cout <<"WARNING" << endl<< "Enter a Valid option";
            goto A;
        }
        cout << "ISBN : ";
        cin >> ISBN;
        fflush(stdin);
    }
    void putdata()
    {
        Literature::putdata();
        if(x=='E' || x=='e')
        {
            ELiterature::putdata();
        }
        else if(x=='H' || x=='h')
        {
            HardBoundLiterature::putdata();
        }
        cout << ISBN <<endl;
    }
};

class Magazine : public ELiterature , public HardBoundLiterature
{
    int ISSN;
    char x;
    public:
    void getdata()
    {
        Literature::getdata();
        cout << "Enter E for ELiterature and H for HardBoundLiterature : ";
    A:    cin >> x;
        if(x=='E' || x=='e')
        {
            ELiterature::getdata();
        }
        else if(x=='H' || x=='h')
        {
            HardBoundLiterature::getdata();
        }
        else
        {
            cout <<"WARNING" << endl<< "Enter a Valid option";
            goto A;
        }
        cout << "ISSN : ";
        cin >> ISSN;
        fflush(stdin);
    }
    void putdata()
    {
        Literature::putdata();
        if(x=='E' || x=='e')
        {
            ELiterature::putdata();
        }
        else if(x=='H' || x=='h')
        {
            HardBoundLiterature::putdata();
        }
        cout << ISSN <<endl;
    }
};

int main()
{
    char c;
    Books b[25];
    Magazine m[25];
    int option,btop=-1,mtop=-1,i;
    do{
    cout << "Enter 1 : Add book data"<<endl;
    cout << "Enter 2 : Add Magazine data"<<endl;
    cout << "Enter 3 : List All books"<<endl;
    cout << "Enter 4 : List All magazine "<<endl;
    cin>>option;
    switch(option)
    {
    case 1:
        {
            cout << "*********Add Book Data*********";
            btop++;
            b[btop].getdata();
            cout << "------------------------------------";
        break;
        }
    case 2:
        {
            cout << "*********Add Magazine Data*********";
            mtop++;
            m[mtop].getdata();
            cout << "------------------------------------";
        break;
        }
    case 3:
        {
            cout << "*********List All Book*********";
            if(btop==-1)
            {
                cout << "WARNING" << endl ;
                cout << "Please Enter data of book first";
                break;
            }
            for(i=0;i<=btop;i++)
            {
                b[i].putdata();
            }
            cout << "------------------------------------";
            break;
        }
    case 4:
        {
            cout << "*********List All Magazine*********";
            if(mtop==-1)
            {
                cout << "WARNING" << endl ;
                cout << "Please Enter data of magazine first";
                break;
            }
            for(i=0;i<=mtop;i++)
            {
                m[i].putdata();
            }
            cout << "------------------------------------";
            break;
        }
    }
    cout << "Enter M to goto main menu. Press any key to exit : ";
    cin >> c;
    }while(c=='M' || c=='m');
    return 0;
}

