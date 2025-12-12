#include <iostream>
using namespace std;

class Device {
protected:
    string brand;
    int power;
    int price;

public:
    void setBrand(string b) 
    { 
        brand = b; 
    }
    void setPower(int p) 
    { 
        power = p; 
    }
    void setPrice(int pr) 
    { 
        price = pr; 
    }

    string getBrand() 
    { 
        return brand; 
    }
    int getPower() 
    { 
        return power; 
    }
    int getPrice() 
    { 
        return price; 
    }

    virtual int calculateDiscount() 
    {
        return 0;
    }

    virtual void display() {
        cout << "Brand: " << brand << endl;
        cout << "Power: " << power << endl;
        cout << "Price: " << price << endl;
    }
};

class Laptop : public Device {
public:

    int calculateDiscount() {
        if (price > 50000)
            return price * 15 / 100;
        else
            return price * 10 / 100;
    }

    void display() {
        cout << "\n--- Laptop ---\n";
        cout << "Brand: " << brand << endl;
        cout << "Power: " << power << endl;
        cout << "Price: " << price << endl;
    }
};

class Smartphone : public Device {
public:

    int calculateDiscount() {
        if (price > 30000)
            return price * 12 / 100;
        else
            return price * 10 / 100;
    }

    void display() {
        cout << "\n--- Smartphone ---\n";
        cout << "Brand: " << brand << endl;
        cout << "Power: " << power << endl;
        cout << "Price: " << price << endl;
    }
};


int main() {

    Laptop l;
    Smartphone s;

    string b;
    int p, pr;

    cout << "Enter Laptop Brand Name: ";
    cin >> b;
    l.setBrand(b);

    cout << "Enter Laptop Power Consuption: ";
    cin >> p;
    l.setPower(p);

    cout << "Enter Laptop Price is: ";
    cin >> pr;
    l.setPrice(pr);

    cout << "\nEnter Smartphone Brand Name: ";
    cin >> b;
    s.setBrand(b);

    cout << "Enter Smartphone Power Consuption: ";
    cin >> p;
    s.setPower(p);

    cout << "Enter Smartphone Price is: ";
    cin >> pr;
    s.setPrice(pr);


    Device* arr[2];
    arr[0] = &l;
    arr[1] = &s;


    for (int i = 0; i < 2; i++) {
        arr[i]->display();
        int d = arr[i]->calculateDiscount();
        cout << "Discount: " << d << endl;
        cout << "Final Price: " << arr[i]->getPrice() - d << endl;
    }

    return 0;
}
