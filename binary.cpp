#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 
 int ans=0;
 int power =1;
 while(n>0){
    int rem;
    rem=n%2;
    ans=(power*rem)+ans;
    power*=10;
    n=n/2;
 }cout<<ans;

}