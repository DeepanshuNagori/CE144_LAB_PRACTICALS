#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class product
{
protected:
    int product_id;
    string product_name,product_manufacturer;
    float product_price;
public:
    product()
    {

    }
    product(int ProductId,string ProductName,string ProductManufacturer,float ProductPrice)
    {
        product_id=ProductId;
        product_name=ProductName;
        product_manufacturer=ProductManufacturer;
        product_price=ProductPrice;
    }
    virtual void putdata() = 0;
};

class smartwatch : public product
{
protected:
    float dial_size;
public:
    smartwatch()
    {

    }
    smartwatch(int ProductId,string ProductName,string ProductManufacturer,float ProductPrice,float DialSize) : product(ProductId,ProductName,ProductManufacturer,ProductPrice)
    {
        dial_size=DialSize;
    }
    void putdata()
    {
        cout << "------------------------------------------" << endl;
        cout <<product_id<< " : " <<product_name<<" : " << product_manufacturer << " : " << product_price << " : " << dial_size << endl;
        cout << "------------------------------------------" << endl;
    }
};

class bedsheet: public product
{
protected:
    float height,width;
public:
    bedsheet()
    {

    }
    bedsheet(int ProductId,string ProductName,string ProductManufacturer,float ProductPrice,float Width,float Height) : product(ProductId,ProductName,ProductManufacturer,ProductPrice)
    {
        height=Height;
        width=Width;
    }
    void putdata()
    {
        cout << "------------------------------------------" << endl;
        cout <<product_id<< " : " <<product_name<<" : " << product_manufacturer << " : " << product_price << " : " << width << " : " << height <<endl;
        cout << "------------------------------------------" << endl;
    }
};

int main()
{
    int option,id;
    string name,manufacturer;
    float price,dialsize,height,width;
    cout << "Enter 1 : smart watch menu"<<endl << "Enter 2 : bed sheet menu";
    cin >> option;
    switch(option)
    {

    case 1:
        {
            cout << "Enter Product Id : ";
            cin >> id;
            fflush(stdin);
            cout << "Enter Product Name : ";
            getline(cin,name);
            fflush(stdin);
            cout << "Enter Product Manufacturer : ";
            cin >>manufacturer;
            fflush(stdin);
            cout << "Enter Product Price : ";
            cin >> price;
            fflush(stdin);
            cout << "Enter Dail Size : ";
            cin >> dialsize;
            fflush(stdin);
            smartwatch s(id,name,manufacturer,price,dialsize);
            s.putdata();
            break;
        }
    case 2:
        {
            cout << "Enter Product Id : ";
            cin >> id;
            fflush(stdin);
            cout << "Enter Product Name : ";
            getline(cin,name);
            fflush(stdin);
            cout << "Enter Product Manufacturer : ";
            cin >>manufacturer;
            fflush(stdin);
            cout << "Enter Product Price : ";
            cin >> price;
            fflush(stdin);
            cout << "Enter Bedsheet Width : ";
            cin >> width;
            fflush(stdin);
            cout << "Enter Bedsheet Height : ";
            cin >> height;
            fflush(stdin);

            bedsheet b(id,name,manufacturer,price,width,height);
            b.putdata();
            break;
        }
    }
}

