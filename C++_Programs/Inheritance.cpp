#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    int rollNo;
};

int main() {
    Student s;
    s.name = "Abi";
    s.rollNo = 101;
    cout << s.name << ", Roll No: " << s.rollNo << endl;
    return 0;
}