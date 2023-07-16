#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit=0;
    while(n>0)
    {
        int num;
        num=n%10;
        digit=10* digit + num;
        n=n/10;
    }cout<<digit;    
}
