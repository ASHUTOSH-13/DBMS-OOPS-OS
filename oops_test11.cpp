// abstraction : hiding all unneccessary/sensitive details and showing the important parts ... this is done using access modifiers
// another way to implement the abstraction is using abstract class .... 
// abstract class are like the blueprint for the other class, how they should look like ... 
// they are not meant to be instantiated but are meant to be inherited ..
#include<bits/stdc++.h>
using namespace std;

class shape {
    public:
    // pure virtual function
    virtual void draw() = 0;
};

class circle : public shape {
    public:
    void draw() override {  // Implementation of the pure virtual function
        cout << "Drawing a circle \n";
    }
};

int main() {
    shape* s1 = new circle();  // Create a shape pointer pointing to a circle object
    s1->draw();  // Call draw through the base class pointer

    delete s1;  // Clean up dynamically allocated memory
    return 0;
}


