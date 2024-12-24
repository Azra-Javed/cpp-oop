#include <iostream>
#include <string>
using namespace std;

class Teacher{
      
    // properties => attributes
    private:
    double salary;
     
    public:
    // constructor => non-parametarized
    Teacher(){
        cout<<"hi, there i am a constructor/n";
        dept = "Computer Science";
    }

    string name;
    string dept;
    string subject;
   
   //methods => member fucntions
    void chageDept(string newDept){
        dept = newDept;
    }

     //setter => set the value
    void setSalary(double newSalary){
        salary = newSalary;
    }

   // getter => get the value
    double getSalary(){
        return salary;
    }
};

int main(){
   
    Teacher t1; // constructor call 
    t1.name = "azra";
   
    t1.subject = "Computer Science";
    t1.setSalary(234444);
    cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;
     return 0;

}