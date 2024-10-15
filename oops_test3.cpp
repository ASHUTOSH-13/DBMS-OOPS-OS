#include<bits/stdc++.h>
using namespace std ;
class Teacher{
private:
        double salary ;
public:
    // non-parameterized constructor 
    // Teacher(){
    //     cout << "the constructor has been called \n" ;
    // }

    //parametrized constructor 
    Teacher(string n, string d, string s, double sal){
        name = n ;
        dept = d ;
        subject = s ;
        salary = sal ;
    }

 // properties/ attributes
        string name ;
        string dept ;
        string subject ;
 
 
 // methods/ member functions
 void change_dept(string new_dept){
    dept = new_dept ;
 }
 // this function usually called setter 
 void set_salary(double new_salary){
    salary = new_salary ;
 }
 // this function usually called getter 
 double get_salary(){
    return salary ;
 }
};

int main(){
    Teacher t1("Deepak", "industrial design", "robotics", 125000); // constructor called 
    cout << t1.name << endl ;
    cout << t1.get_salary() << endl ;
    return 0 ;
}

// destructor is just opposite of constructor, as constructor allocates the memory destructor deallocate the memory.
// it also has the same as that of class but with tilde sign at the front of the destructor.
// destructor only deallocates the static memory but it does not deallocates dynamic memory.
// syntax = ~Teacher(){}



