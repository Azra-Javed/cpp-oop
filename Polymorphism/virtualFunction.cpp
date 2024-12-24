// run time polymorphism

// a virtual is a member function that you expect to be redfined in derived classes.

// ... are dynamic in nature
// ... defined by the keyword "virtual" inside a base class and are always declared with a base class and overriden in a child class.
// ... a virtual function is called during Runtime

#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:

   void  getInfo(){
    cout<<"parent class/n";
   } 

 virtual void hello(){
    cout<<"hello from parent";
   }
     
};

class Child:public Parent{
    public:

    // more priority
    void  getInfo(){
    cout<<"child class";
   } 

   void hello(){
    cout<<"hello from child";
   }
     
};


int main(){

   Child c1;
   c1.hello();
   return 0;
}


