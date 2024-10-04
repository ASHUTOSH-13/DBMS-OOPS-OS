// when a class is defined, only the specification of the object is defined, no memory is allocated,
// to access the data member and member function we need to create the object

// syntax : classname object_name ;
// now the data member and member function are accessed using dot operator 
// object_name.function_name() ;

#include<bits/stdc++.h>

using namespace std ;

class person {
    public:
    string name ;
    int age ;
    void introduce(){
        cout << "hello welcome" ;
    }
};

int main(){
    person p1 ;
    p1.name = "Ashutosh" ;
    p1.age = 21 ;
    p1.introduce() ;
    return 0 ;
}