#include <iostream>
using namespace std;
int main(){
    
    int x,y;
    cin>>x>>y;

    int *ptrx =&x;
    int *ptry= &y;

    int result;
    
    int *result_ptr=&result;

    *result_ptr=*ptrx + *ptry;

    cout<<result<<*result_ptr;
}