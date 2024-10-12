// constructor are special class member that are called everytime by the compiler when the object is instantiated...
// constructor are of same name as that of the class and can be defined indside or outside the class 

// there are 4 types of constructor:
// 1. default constructor 2. parameterized constructor 3. copy constructor 4. move constructor 

// default constructor: the constructor that take no argument are called default constructor
// parameterized constructor: this takes the argument to initialize the data member
// copy constructor: this creates objects from already existing object by just copying it.
// move constructor: this creates objects from already existing object by just moving it.

#include<bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    int id;
    
    //Default Constructor
    Geeks() // as it is taking no argument 
    {
        cout << "Default Constructor called" << endl; 
        id=-1;
    }
    
    //Parameterized Constructor
    Geeks(int x)
    {
        cout <<"Parameterized Constructor called "<< endl;
        id=x;
    }
};

int main() {
    
    // obj1 will call Default Constructor
    Geeks obj1;
    cout <<"Geek id is: "<<obj1.id << endl;
    
    // obj2 will call Parameterized Constructor
    Geeks obj2(21); // you have to pass the argument 
    cout <<"Geek id is: " <<obj2.id << endl;
    return 0;
}

// If the programmer does not define the constructor, the compiler automatically creates the default, copy and move constructor.
