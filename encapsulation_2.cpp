// features of encapsulation:
// 1. we cannot access member function directly, we need an object to access that, object that is using the member variable of that function..
// 2. the function that we are making inside must be using only the member variable then it is called encapsulation..
// 3. if we make a function outside that is using member variable then that is not called encapsulation..
// 4. encapsulation ensures readability, maintainability and security of the member variables by grouping then together
// 5. it helps us to control the modification of our data members ..

#include<bits/stdc++.h>
using namespace std ;

class person {
    private:
    string name ;
    int age ;
    public:
    person(string name, int age){
        this->name = name ;
        this->age = age ;
    }
    void set_name(string name){
        this->name = name ;
    }
    string get_name(){
        return name ;
    }
    void set_age(int age){
        this->age = age ;
    }
    int get_age(){
        return age ;
    }
};


int main(){
    person p1("ASHUTOSH", 21) ;
    p1.set_name("Kalash") ;
    p1.set_age(22) ;
    cout << p1.get_name() << endl <<  p1.get_age() << endl ;

    return 0 ;
}

// the process of implementing encapsulation can be sub-divided into two steps :
// 1. creating a class and encapsulate all the data and methods in a single unit 
// 2. hiding irrelevent data using access modifiers 

