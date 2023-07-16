#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Value till you want to print";
    cin>>n;
    int sum=0;
    int num;
    cout<<"your initializing number";
    cin>>num;
    do{
        sum+=num;
        num++;
        n--;
    }while(n>0);
    cout<<sum<<endl;
    return 0;
}