// the capacity of a class to derive properties and characterstics from another class is called inheritence..

// class  derived_class_name : access specifiers  base_class_name
// {
//        //    body ....
// };

// the access specifiers can be anyone either public, private or the protected...
class: keyword to create a new class
derived_class_name: name of the new class, which will inherit the base class
access-specifier: Specifies the access mode which can be either of private, public or protected. If neither is specified,
 private is taken as default.
base-class-name: name of the base class.

Note: A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object,
 which contains any private members which that class declares.
 

 #include <iostream>
using namespace std;

// Base class that is to be inherited
class Parent {
public:
    // base class members
    int id_p;
    void printID_p()
    {
        cout << "Base ID: " << id_p << endl;
    }
};

// Sub class or derived publicly inheriting from Base
// Class(Parent)
class Child : public Parent {
public:
    // derived class members
    int id_c;
    void printID_c()
    {
        cout << "Child ID: " << id_c << endl;
    }
};

// main function
int main()
{
    // creating a child class object
    Child obj1;

    // An object of class child has all data members
    // and member functions of class parent
    // so we try accessing the parents method and data from
    // the child class object.
    obj1.id_p = 7;
    obj1.printID_p();

    // finally accessing the child class methods and data
    // too
    obj1.id_c = 91;
    obj1.printID_c();

    return 0;
}