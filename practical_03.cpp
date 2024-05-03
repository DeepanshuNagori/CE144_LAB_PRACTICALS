#include <iomanip>
#include <iostream>
#include <string>
#include <string.h>

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
    void inputDetails() {
        cout << "Enter Model Name: ";
        getline(cin, modelName);
        fflush(stdin);
        cout << "Enter Fuel Type (petrol, diesel, cng, electric): ";
        cin >> fuelType;
        fflush(stdin);
        cout << "Enter Showroom Price(In Lakhs): ";
        cin >> showroomPrice;
        fflush(stdin);
        cout << "Enter Mileage: ";
        cin >> mileage;
        fflush(stdin);
        cout << "Enter Transmission (Manual or AMT): ";
        cin >> transmission;
        fflush(stdin);
        cout << "Enter Tank Capacity: ";
        cin >> tankCapacity;
        fflush(stdin);
        cout << "Enter Seating Capacity: ";
        cin >> seating;
        fflush(stdin);
        cout << "Enter Airbags (Yes or No): ";
        cin >> airbags;
        fflush(stdin);
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
    int numCars;
    int option,option2;
    int i;
    cout << "Enter the number of cars: ";
    cin >> numCars;
    fflush(stdin);
    // Creating Object of Class
    class Car car[numCars];
    // Taking Input
    for (i = 0; i < numCars; i++) {
        cout<<"ENTER INPUT FOR CAR "<<i+1<<endl;
        car[i].inputDetails();

        fflush(stdin);
    }
    //Clearing Screen for Output
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

            for(i=0;i<numCars;i++)
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
                        for(i=0;i<numCars;i++)
                        {
                            if(car[i].getfuelType().compare("petrol")==0)
                            {
                                car[i].displayDetails();
                            }


                        }
                        break;
                    }
                case 2:
                    {
                        for(i=0;i<numCars;i++)
                        {
                            if(car[i].getfuelType().compare("diesel")==0)
                            {
                                car[i].displayDetails();
                            }

                        }
                        break;
                    }
                case 3:
                    {
                        for(i=0;i<numCars;i++)
                        {
                            if(car[i].getfuelType().compare("cng")==0)
                            {
                                car[i].displayDetails();
                            }

                        }
                        break;
                    }
                case 4:
                    {
                        for(i=0;i<numCars;i++)
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

            for(i=0;i<numCars;i++)
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
