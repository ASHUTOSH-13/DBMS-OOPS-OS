#include<bits/stdc++.h>
using namespace std ;
class Teacher{
private:
        double salary ;
public:
    // non-parameterized constructor 
    Teacher(){
        cout << "the constructor has been called \n" ;
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
    Teacher t1; // constructor called 
    t1.name = "Deepak" ;
    t1.dept = "industrial design" ;
    t1.subject = "robotics" ;
    t1.set_salary(150000) ;
    cout << t1.name << endl ;
    cout << t1.get_salary() << endl ;
    return 0 ;
}