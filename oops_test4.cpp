// now we talk about the inheritence 
// when the properties and member functions of base class are passed on to the derived class is called inheritence.
// inheritence is used for code reusablity lets suppose there is a member int x which other derived class also want 
// then instead of redeclaring we directly inherit from parent class.
#include<bits/stdc++.h>
using namespace std ;

class Person{
    public:
    string name ;
    int age ;
    Person(){

    }
};
class Student : public Person {
    public:
    string roll_no ;
    void get_info(){
        cout << "Name is : " << name << endl;
        cout << "Age of the student is : " << age << endl ;
        cout << "the roll number is : " << roll_no << endl ;
    }
};

int main(){
    Student s1 ;
    s1.name = "Ashutosh" ;
    s1.age = 21 ;
    s1.roll_no = "121ID0974" ;
    s1.get_info() ;
    return 0 ;

}
// note first the constructor of the parent class is executed and then the child class contrucctor is executed.
// in case of a destructor first the child class memory is deallocated and then the parent class is deallocated.
// types of inheritence are: 1. single inheritence(the above code example of single inheritence)....
// 2. multi-level inheritence: more than two level 
// 3. multiple inheritence: derived class derives properties/attributes from two or more base class .... 