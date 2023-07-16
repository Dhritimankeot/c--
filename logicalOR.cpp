#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"num?";
    cin>>num;

    if( num%3==0 || num%5==0){
        cout<<num<<endl;
    }else{
        cout<<"Dhet"<<endl;
    }
}