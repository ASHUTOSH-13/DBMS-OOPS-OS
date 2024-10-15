// it is an example of multiple inheritence.....
#include<bits/stdc++.h>
using namespace std ;

class student{
    public:
    string name ;
    string roll_no ;

};

class teacher {
    public:
    string dept ;
    string course ;
    int salary ;
} ;

class TA : public student, public teacher {
    public:
    string research_area ;
};

int main(){
    TA t1 ;
    t1.name = "Vinod" ;
    t1.course = "simulation lab" ;
    t1.research_area = "quantum physics" ;
    cout << t1.name<< endl ;
    cout << t1.course << endl ;
    cout << t1.research_area << endl ;
    return 0 ;
}
