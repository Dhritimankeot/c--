#include<iostream>
using namespace std;
int changeName(int &,int &);
int main(){
    int a,b;
    cin>>a>>b;
    changeName(a,b);
    cout<<a<<endl<<b;
}
int changeName(int &x,int &y){
    x=200;
    y=300;
}
