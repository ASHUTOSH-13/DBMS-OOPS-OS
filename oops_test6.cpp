// it is an example of hierarchial inheritence ....
#include<bits/stdc++.h>
using namespace std ;
class student{
    public:
    string name ;
    string dept ;

};
class boy : public student {
    public:
    int age ;
    int height ;
};
class girl : public student{
    public:
    int age ;
    int height ;
};

int main(){
    boy b1 ;
    girl g1 ;
    b1.name = "ASHUTOSH BHATT" ;
    b1.dept = "Industrial design" ;
    b1.age = 21 ;
    b1.height = 176 ;
    g1.name = "SHEETAL BHATT" ;
    g1.dept = "B.Com" ;
    g1.age = 20 ;
    g1.height = 161 ;
    cout << b1.name << endl ;
    cout << b1.age << endl ;
    cout << b1.dept << endl ;
    cout << b1.height << endl ;
    cout << g1.name << endl ;
    cout << g1.age << endl ;
    cout << g1.age << endl ;
    cout << g1.dept << endl ;
    cout << g1.height << endl ;
    return 0 ;
}

// one more type of inheritence called hybrid inheritence which is called as the mix of all the inheritence ...
