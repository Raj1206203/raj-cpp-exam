#include <iostream>

using namespace std;

class Student{
    string name;
    int rollNo;

public:
    Student(string stu_name, int stu_roll)
    {
        name = stu_name;
        rollNo = stu_roll;
    }

    void display() 
    {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    Student stu[5] 
    {
        Student("Raj", 1),
        Student("krishna", 2),
        Student("dhruv", 3),
        Student("Chitt", 4),
        Student("Jarir", 5)

    };

    for (int i = 0; i < 5; i++)
    {
        stu[i].display();
    }

    return 0;
}
