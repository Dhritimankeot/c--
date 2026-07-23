#include<iostream>
using namespace std;
int main(){
    int x=10;
    void *ptr=&x;
    
    int *p= (int*) ptr;
    cout<<*p;
    


}