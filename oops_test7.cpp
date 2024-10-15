// polymorphism is the ability of the object to take on different forms or behave in different ways depending on the context in which they are used.
// one of the classical example of polymorphism is constructor overloading...
#include<bits/stdc++.h>
using namespace std ;
class student{
    public:
    string name ;
    student(){
        cout << "non-parameterized constructor \n" ;
    }
    student(string n){
        this->name = n ;
        cout << "parameterized \n" ;
    }
};



int main(){
    student s1("Ashutosh Bhatt") ;
    return 0 ;
}
// there is two types of polymorphism :  1. compile time polymorphism (constructor overloading, the above example) 
// one more type of compile time polymorphism is function overloading--> in this in the same class has the same the function name
// but takes different parameters ....
//2. run-time polymorphism 



