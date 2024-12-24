
#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;
};


class Student: public Person{
    public:
    int rollno;
};

class StudentGraduate: public Person{
    public:
    string researchArea;
};


int main(){

    StudentGraduate s1;
    s1.name = "azra";
    s1.researchArea = "Computer coding...";

    cout << "name: "<< s1.name;
    cout << "\nresearch area: "<<s1.researchArea;

 
}
