#include <iomanip>
#include <iostream>
#include <string>
#include<sstream>
#include <fstream>
using namespace std;

// Car class definition
class Car {
private:
    string modelName;
    string fuelType;
    float showroomPrice;
    float mileage;
    string transmission;
    float tankCapacity;
    int seating;
    string airbags;
public:
    // Function to input car details
    void inputDetails(ifstream &file)
    {
        getline(file,modelName,',');
        getline(file,fuelType,',');
        file >> showroomPrice;
        file.ignore();
        file >> mileage;
        file.ignore();
        getline(file,transmission,',');
        file >> tankCapacity;
        file.ignore();
        file >> seating;
        file.ignore();
        getline(file,airbags,';');
    }
    // Function to display car details
    void displayDetails() {
        cout<<modelName<<setw(5)<<" "<<setw(-15)<<fuelType<<setw(5)<<" "<<setw(-15)<< showroomPrice <<setw(10)<<" "<<setw(-15)<<mileage<<setw(10)<<" "<<setw(-15)<<transmission<<setw(10)<<" "<<setw(-15)<<tankCapacity<<setw(19)<<" "<<setw(-15)<<seating<<setw(15)<<airbags<<endl;

    }
    // Function to get values in Main
    float getshowroomPrice(){
        return showroomPrice;
    }

    string getfuelType(){
        return fuelType;
    }

    string getmodelName(){
        return modelName;
    }
};

int main() {
    Car car[7];
    int i;
    int option,option2;
    ifstream fin;
    fin.open("cardata.txt");
    for(int i=0;i<7;++i)
    {
        car[i].inputDetails(fin);
    }
    system("CLS");

    cout << "WELCOME TO TATA MOTORS" << endl;
    cout << "GET THE CAR AS PER YOUR PREFRENCE" << endl;
    cout << "(1) Model Name (2) Fuel type (3) Price range"<< endl;
    cout << "ENTER YOUR OPTION : ";
    cin >> option;
    cout << "-----------------------------"<< endl;

    fflush(stdin);

    switch (option) {
        case 1: {
            cout << "LIST OF TATA CARS" << endl;

            for(i=0;i<7;i++)
            {
                cout << "(" << i+1 << ") " << car[i].getmodelName() << "\t" ;
            }

            cout << endl << "CHOOSE YOUR CAR TO GET DETAILS : ";

            cin >> option2;
            option2=option2-1;

            cout<<"Model"<<setw(10)<<"Fuel"<<setw(10)<<"Price"<<setw(15)<<"Mileage"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating"<<setw(15)<<"Airbags"<<endl;
            cout<<setw(20)<<" "<<"(Lakhs)"<<setw(10)<<"km/L"<<setw(20)<<" "<<"(Liters)"<<setw(21)<<"Capacity"<<endl;

            car[option2].displayDetails();

            }
            break;

        case 2: {

            cout<<"TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS"<<endl<<"(1) Petrol (2) Diesel (3) CNG (4) Electric " << endl;
            cout<<"ENTER YOUR FUEL PREFRENCE : ";
            cin>>option2;

            cout<<"Model"<<setw(10)<<"Fuel"<<setw(10)<<"Price"<<setw(15)<<"Mileage"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating"<<setw(15)<<"Airbags"<<endl;
            cout<<setw(20)<<" "<<"(Lakhs)"<<setw(10)<<"km/L"<<setw(20)<<" "<<"(Liters)"<<setw(21)<<"Capacity"<<endl;

            switch(option2)
            {
                case 1:
                    {
                        for(i=0;i<7;i++)
                        {
                            if(car[i].getfuelType().compare("Petrol")==0)
                            {
                                car[i].displayDetails();
                            }


                        }
                        break;
                    }
                case 2:
                    {
                        for(i=0;i<7;i++)
                        {
                            if(car[i].getfuelType().compare("Diesel")==0)
                            {
                                car[i].displayDetails();
                            }

                        }
                        break;
                    }
                case 3:
                    {
                        for(i=0;i<7;i++)
                        {
                            if(car[i].getfuelType().compare("CNG")==0)
                            {
                                car[i].displayDetails();
                            }

                        }
                        break;
                    }
                case 4:
                    {
                        for(i=0;i<7;i++)
                        {
                            if(car[i].getfuelType().compare("electric")==0)
                            {
                                car[i].displayDetails();
                            }
                        }
                        break;
                    }
            }

            break;
        }
        case 3: {
            float priceRange;
            cout << "ENTER YOUR MAXIMUM AFFORDABLE PRICE RANGE IN LAKHS : ";
            cin >> priceRange;

            cout<<"Model"<<setw(10)<<"Fuel"<<setw(10)<<"Price"<<setw(15)<<"Mileage"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating"<<setw(15)<<"Airbags"<<endl;
            cout<<setw(20)<<" "<<"(Lakhs)"<<setw(10)<<"km/L"<<setw(20)<<" "<<"(Liters)"<<setw(21)<<"Capacity"<<endl;

            for(i=0;i<7;i++)
                    {
                        if(car[i].getshowroomPrice() <= priceRange)
                        {
                            car[i].displayDetails();
                        }

                    }
            break;
        }
        default:
            cout << "Invalid option!" << endl;
    }

    return 0;
}


