#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:

   void  getInfo(){
    cout<<"parent class/n";
   } 
     
};

class Child:public Parent{
    public:

    // more priority
    void  getInfo(){
    cout<<"child class";
   } 
     
};


int main(){

   Child c1;
   c1.getInfo();
   return 0;
}