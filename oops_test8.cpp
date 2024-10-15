// function overloading .....
#include<bits/stdc++.h>
using namespace std ;

class print {
public:
void show(int x){
    cout << "the value is : " << x << endl ;
}
void show(char ch){
    cout << "the character is : " << endl ;
}
};

int main(){
    print p1 ;
    p1.show(101) ;
    return 0 ;
}
