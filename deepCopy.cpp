#include <iostream>
#include <string>

using namespace std;

class   Student
{  
public:
string name;
double* cgpaPtr;

Student (string name, double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
}


Student (Student &obj){
    this->name = obj.name;
    cgpaPtr = new double;
    *cgpaPtr = *obj.cgpaPtr;
}
   

 void getInfo(){
    cout<<"\nname: "<<name;
    cout<<"\nCGPA: " << *cgpaPtr;
 }
};

int main(){
    Student s1("azra Javed", 3.8);
    s1.getInfo();
    Student s2(s1);
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "rafia";
    s2.getInfo();
}