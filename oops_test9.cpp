// runtime ploymorphism also called dynamic polymorphism, it is implemented on runtime 
// the best example of this type of overloading is in function overriding ("FUNCTION OVERLOADING IS DIFFERENT") ...
// function overriding- both parent and child contain same function with different implementation..
//  the parent class function is said to be overridden .... certainly based on the concept of inheritence....
#include<bits/stdc++.h>
using namespace std ;

class parent{
    public:
    void get_info(){
        cout << "the parent class is executed \n" ;
    }
};

class child : public parent {
    public: 
    void get_info(){
        cout << "the child class is executed \n" ;
    }
};

int main(){
    child c1 ;
    parent p1 ;
    p1.get_info() ;
    c1.get_info() ;
    return 0 ;
}