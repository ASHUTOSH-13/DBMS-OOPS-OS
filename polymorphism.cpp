// polymorphism means having many forms, it means displaying the message in different forms 
// A real-life example of polymorphism is a person who at the same time can have different characteristics. 
// A man at the same time is a father, a husband, and an employee.


// there are two types of polymorphism:
// 1. compile-time polymorphism 2. runtime polymorphism

// compile-time polymorphism: this type of polymorphism is acheived using function overloading or operator overloading...
// function overloading: when there are multiple functions with same name but different parameters, then it is said to be function overloaded.
// this overloading is called function overloading, you can achieve this by changing the number of paramters or type of parameters...

#include <bits/stdc++.h>

using namespace std;
class Geeks {
public:
    // Function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }

    // Function with same name but
    // 1 double parameter
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }

    // Function with same name and
    // 2 int parameters
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y
             << endl;
    }
};

// Driver code
int main()
{
    Geeks obj1;

    // Function being called depends
    // on the parameters passed
    // func() is called with int value
    obj1.func(7);

    // func() is called with double value
    obj1.func(9.132);

    // func() is called with 2 int values
    obj1.func(85, 64);
    return 0;
}