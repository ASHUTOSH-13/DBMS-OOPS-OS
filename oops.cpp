// as the name suggests oops uses objects in the programming.
// it aims to implement real world entities like inheritence, hiding, polymorphism...
//the main aim of the oops is to bind togather the data and function so that no other part could access the data except the function
// the building blocks of the oops are:
// 1. class 2. object 3. encapsulation 4. abstraction 5. inheritence 6. polymorphism 7. dynamic binding 8. messege passing

// class : it is the building block of the oops, it is a user defined data type that contains data members and member functions which
// which can be used and accessed by creating a instance of the class, it is like a blue print for an object.
// class in oops is blue print for the group og objects that share a common properties and behavior...
// note: when a class is created no memory is created but when it is intantiated it gets allocated a memory

#include<bits/stdc++.h>
using namespace std;

class person {
    char name[20] ;
    int age ;                                    // this is data member
    public:                                     // this is access modifiers 
    void getdetails(){                          // this is member function
        cout <<"hello welcome"<< endl;
    }
};

int main(){
    person p1 ;
    return 0 ;
}