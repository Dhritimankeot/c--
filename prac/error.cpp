#include <iostream>
 using namespace std;

 int main(){
    int a;
    cout<<"write your age:"<<endl;
    cin>>a;

    if(a<12){
        cout<<"Child"<<endl;
    }
 // 12 <= a → returns true (1) or false (0)

// Then it checks → 1 <= 18 or 0 <= 18

// That is always true

// So your program will always print "Teenager" for any age ≥ 12.
   else if(12<=a && a<=18){  
        cout<<"Teenager"<<endl;
    }
    else{
        cout<<"Adult"<<endl;
    }

    return 0;
 }