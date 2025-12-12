#include <iostream>

using namespace std;

class Device
{

    string brand;
    int powerConsumption;

public:
    void setBrand(string brand_name) 
    { 
        brand = brand_name; 
    }
    void setPower(int pc)   
    { 
        powerConsumption = pc; 
    }

    string getBrand() 
    { 
        return brand; 
    }
    int getPower()    
    { 
        return powerConsumption; 
    }

    virtual void display()
    {
        cout << "Brand : " << brand << endl;
        cout << "Power Consumption: " << powerConsumption << "in Watts" << endl;
    }
};


class Laptop : public Device
{
public:
    void display()
    {
        cout << "\n=== Laptop Information ===" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power: " << getPower() << " Watts" << endl;
        cout << "Feature: has great battery life" << endl;

    }
};


class Smartphone : public Device
{
public:
    void display()
    {
        cout << "\n=== Smartphone Information ===" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power: " << getPower() << " Watts" << endl;
        cout << "Feature: has great camera quality " << endl;

    }
};

int main()
{
    Laptop l;
    Smartphone s;

    string brand;
    int power;

    cout << "Enter Laptop Brand Name: ";
    cin >> brand;
    l.setBrand(brand);

    cout << "Enter Laptop Power Consuption: ";
    cin >> power;
    l.setPower(power);


    cout << "\nEnter Smartphone Brand Name: ";
    cin >> brand;
    s.setBrand(brand);

    cout << "Enter Smartphone Power Consuption: ";
    cin >> power;
    s.setPower(power);

    l.display();
    s.display();

    return 0;
}
