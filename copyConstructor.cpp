
#include <iostream>
#include <string>
using namespace std;

class Teacher{
      
    
    private:
    double salary;
     
    public:

    string name;
    string dept;
    string subject;

    // parametirizes constructor
    Teacher(string name, string dept, string subject, double salary){
    // this operator
      this->name = name;
      this->dept = dept ;
      this->subject = subject;
       
    }

    // copy constructor
    Teacher (Teacher &obj){
        cout << " This is copy constructor...";
        this->name  = obj.name;
        this->dept = obj.dept;
        this-> subject = obj.subject;
    }
   
   
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
     Teacher t2(t1);
     t2.getInfo();  // automatic copy constructor
     return 0;
     

}