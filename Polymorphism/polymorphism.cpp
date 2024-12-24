#include <iostream>
#include <string>
using namespace std;

class  Student{
    public:
    string name;

    //non parametarized
    Student (){
        cout<<"non parametarized...";
    }

    // parametarized 
    Student(string name){
        cout<<"parametarized...";
        this->name = name;
    }

};


int main(){

    Student s1;
}