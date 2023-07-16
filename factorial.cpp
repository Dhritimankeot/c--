#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
     int digit=1;
    for(int i=1;i<=num;i++)
    {
       digit=i*digit;
       cout<<digit<<endl;
    }

}