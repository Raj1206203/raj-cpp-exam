#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void makesound() = 0;

    virtual void move() = 0;

    virtual ~Animal() 
    {

    }
};

class lion : public Animal
{
    public:

    void makesound() override
        {
            cout<<endl;
            cout<< "Lion is roaring in the Jungleeeee!!!!" << endl;
        }
        void move() override
        {
            cout<<endl;
            cout << "Lion is moving in the Jungleeeee....." << endl;
        }
};

class fish : public Animal
{
public:
    void makesound() override
    {
        cout<<endl;
        cout<< "Fish is Making Sound......" << endl;
    }
    void move() override
    {
        cout<<endl;
        cout<<"Fish is Moving ......." << endl;
    }
};

int main()
{
    lion l;
    fish f;

    Animal *animal[2];
    animal[0] = &l;
    animal[1] = &f;

    for (int i = 0; i < 2; i++)
    {
        animal[i]->makesound();
        animal[i]->move();
        cout << "======================" << endl;
    }

    return 0;
}
