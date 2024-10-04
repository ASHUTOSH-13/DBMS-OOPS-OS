// abstraction means showing essential information and hiding the details..
// Consider a real-life example of a man driving a car. The man only knows that pressing the accelerator will increase the speed of the car
// or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually increasing, he does not
// know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car. This is what abstraction is.

// types of abstraction :
// 1. data abstraction: this only shows the neccessary information about the data and ignores the unnecessary details ....
// 2. control abstraction: this only shows the neccessary information about the implementation and ignores the unnecessary details ..

// abstraction can be done using classes ..
// abstraction can also be seen c++ header files, ex: we use power function that is present inside the math.h header file..
// abstraction can also be done using access modifiers 

#include <iostream>
using namespace std;

class implementAbstraction {
private:
    int a, b;

public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
