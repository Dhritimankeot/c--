#include<iostream>
using namespace std;

int f(int n){
    int ans;
    if(n==1){
        return 1;
    }
    else{
        ans=n*f(n-1);
    }
     return ans;
   

}
int main(){
    int n=5;
    int result = f(n);
    cout<<result;

}