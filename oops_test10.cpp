// another type of runtime polymorphism is called virtual functions 
// a virtual function is a member function that is expected to be redefined in the derived class ....
// some properties of virtual function are: 1. they are dynamic in nature 2. always declared in the base class with virtal keyword and overridden in child class.
// 3. a virtual function is always called during runtime ... 
#include<bits/stdc++.h>
using namespace std ;

class parent {
    public:
    virtual void print(){
        cout << " hello from parent" << endl ;
    }
};

class child {
    public : 
    void print(){
        cout << "hello from child" << endl ;
    }
} ;

int main(){
    child c1 ;
    c1.print() ;
    return 0 ;
}

    