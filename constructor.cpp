#include <iostream>
#include <string>
using namespace std;

class Teacher{
      
    
    private:
    double salary;
     
    public:
   // parametirizes constructor
    Teacher(string name, string dept, string subject, double salary){
    // this operator
      this->name = name;
      this->dept = dept ;
      this->subject = subject;
     
       
    }

    string name;
    string dept;
    string subject;
   
   //methods => member fucntions
    void chageDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout << "name: " << name;
        cout << "\nsubject: " << subject;
    }
};

int main(){
   
    Teacher t1("azra","computer Science","C++",25000 );
     t1.getInfo();
     return 0;
     

}