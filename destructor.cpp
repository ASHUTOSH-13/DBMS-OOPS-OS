// destructor are the special function that are called by the compiler when the scope of the object ends,
// it deallocates the memory of the object of the class so that there is no memory leaks,
// it has the same name as the class but with tilde as prefix (~) .. 


#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    int id;
    
    //Definition for Destructor
    ~Geeks()
    {
        cout << "Destructor called for id: " << id <<endl; 
    }
}; //  main reason why semi-colons are there at the end of the class is compiler checks if the user is trying to create 
  //an instance of the class at the end of it.

int main() 
  {
    Geeks obj1;
    obj1.id=7;
    int i = 0;
    while ( i < 5 )
    {
        Geeks obj2;
        obj2.id=i;
        i++;        
    } // Scope for obj2 ends here

    return 0;
  } // Scope for obj1 ends here