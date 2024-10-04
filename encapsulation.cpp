// wrapping up data and information in a single unit is called encapsulation
// it is also defined as the binding of the data and function that manipulates them...
// Consider a real-life example of encapsulation, in a company, there are different sections like
// the accounts section, finance section, sales section, etc. Now,

// The finance section handles all the financial transactions and keeps records of all the data related to finance.
// Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
// Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.

// In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer
// in the sales section and then request him to give the particular data.

// the two main properties of the encapsulation is :
// 1. data protection: it protects the internal state of the objects by keeping its data member private...
// 2. information hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface
// of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to 
// be modified without impacting external code.

#include<bits/stdc++.h>

using namespace std ;

class temp {
    private:
    int a ;
    int b ;
    public:
    int half(int input){
        a = input ;
        b = a/2 ;
        return b ;
    }
};

int main(){
    temp num1 ;
    cout << num1.half(12) << endl ;
    return 0 ;
}