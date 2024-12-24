// opposite of constructor => deallocate memory => statically memeroy
// same name as class

//new => used to allocate memory dynamically;
// delete => to deallocate;

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

  // destructor
 ~Student(){
    cout<<"Hi , i delete everything\n";
    delete cgpaPtr;
 }

   

 void getInfo(){
    cout<<"\nname: "<<name;
    cout<<"\nCGPA: " << *cgpaPtr;
 }
};

int main(){
    Student s1("azra Javed", 3.8);
    s1.getInfo();
   
}