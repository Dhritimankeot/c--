#include<iostream>
using namespace std;

int main(){
    int age;
     cout<<"age:";
     cin>>age;
if(0<age&&age<12){
    cout<<"child";
}else if(100>age&&age>18){
    cout<<"adult";
}
else if(18>age&&age>=12){
    cout<<"Teen";

    }
    else {
    cout<<"error";
}
return 0;
}