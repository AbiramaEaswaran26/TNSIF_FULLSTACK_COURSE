#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Abi";
    s1.age = 21;
    s1.display();
    return 0;
}