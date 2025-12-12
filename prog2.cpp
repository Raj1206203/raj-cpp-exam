#include <iostream>

using namespace std;

class car
{

    string model;
    int year;
    int speed;

public:
    void setModel(string mod) 
    {
        model = mod;
    }

    void setYear(int y) 
    {
        year = y;
    }

    void setSpeed(int s) 
    {
        speed = s;
    }

    string getModel() 
    {
        return model;
    }

    int getYear() {
        return year;
    }

    int getSpeed() {
        return speed;
    }
};

int main()
{
    car c1,c2;   

    c1.setModel("BMW X5");
    c1.setYear(2023);
    c1.setSpeed(220);

    c2.setModel("Ferrari 296 gtb");
    c2.setYear(2025);
    c2.setSpeed(250);

    cout << "Car Model: " << c1.getModel() << endl;
    cout << "Car Year : " << c1.getYear() << endl;
    cout << "Car Speed: " << c1.getSpeed() << " km/h" << endl;
    cout << "Car Model: " << c2.getModel() << endl;
    cout << "Car Year : " << c2.getYear() << endl;
    cout << "Car Speed: " << c2.getSpeed() << " km/h" << endl;

    return 0;
}
