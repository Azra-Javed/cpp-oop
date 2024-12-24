// When properties & member functions of base class are passed on to the derived class;
// code reusablility

//(parent, base) ===> (child, derived);

// firstly parent class constructor is called then the constructor of derived class -=> constructor
// destrucotr mai derive ka phlay call hota then base class ka destructor call hota hai...


#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){
        cout<<"\nparent constructor...";
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

   Student (){
    cout<<"\nchild constructor...";
   }

   ~Student (){
    cout<<"\nchild destructor...";
   }
};



int main(){

  Student s1;
  s1.name = "azra";
  s1.age = 21;
  s1.rollno = 3434,

  s1.getInfo();
}
