// we can control the access to the member in the class using access modifiers,
// there are three types of access modifiers:
// 1. public : the member functions and data members can be accessed outside the class also/
// 2. private : the member can be accessed only within the class 
// 3. protected : the member function and data members can be accessed only within the class and the derived class 
// by default the member functions and data members are private.


// member functions in the class are of two types :
// 1. inside class definition 2. outside class definition

// lets see both of them:

#include<bits/stdc++.h>

using namespace std ;

class ashutosh {
    public:
    string name ;
    int age ;
    void print_name() ;
    void response(){
        cout <<"hello world "<< endl ;
    }

};

void ashutosh::print_name(){
    cout << "outside function" << endl ;
}

int main(){
    ashutosh a1 ;
    a1.name = "ASHUTOSH" ;
    a1.age = 21 ;
   
    a1.response() ;
    a1.print_name() ;
    return 0 ;
}

// member function defined inside the class are inline, but we can make non-class member inline using inline keyword ....
// Inline functions are actual functions, which are copied everywhere during compilation, like pre-processor macro, so the overhead of function calls is reduced.
// Declaring a friend function is a way to give private access to a non-member function.



