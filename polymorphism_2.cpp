// operator overloading: this functionality provide the user to define a operator in a special manner or user-defined way, 

#include <iostream>
using namespace std;

class Number {
public:
    int value;

    // Constructor to initialize the value
    Number(int v = 0) : value(v) {}

    // Overloading the '+' operator
    Number operator + (const Number& obj) {
        Number result;
        result.value = this->value + obj.value;  // Adding the values of two objects
        return result;
    }
};

int main() {
    Number num1(10);  // First number
    Number num2(20);  // Second number

    Number sum = num1 + num2;  // Using the overloaded + operator

    cout << "Sum: " << sum.value << endl;  // Output: Sum: 30

    return 0;
}
//For example, we can make use of the addition operator (+) for string class to concatenate two strings.

// runtime polymorphism :  also called late binding or dynamic polymorphism, the function call is resolved in runtime in runtime polymorphism
// In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.

#include <bits/stdc++.h>
using namespace std;

//  base class declaration.
class Animal {
public:
    string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal {
public:
    string color = "Grey";
};

// Driver code
int main(void)
{
    Animal d = Dog(); // accessing the field by reference
                      // variable which refers to derived
    cout << d.color;
}

// the output will be black ...
