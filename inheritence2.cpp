

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }


    ~Person(){
        cout<<"\nparent destrucotr...";
    }
};


class Student: public Person{
    public:
    int rollno;

   void getInfo(){
    cout<< "\nname : "<<name<<endl;
    cout<< "age : "<<age<<endl;
    cout<< "rollno : "<<rollno<<endl;
   }
   
   // phlay parnt class k constructor ko call krain gay..
   Student (string name, int age, int rollno):Person(name, age){
    this->rollno = rollno;
   }

   ~Student (){
    cout<<"\nchild destructor...";
   }
};



int main(){

  Student s1("azra",21,1234);

  s1.getInfo();
}
