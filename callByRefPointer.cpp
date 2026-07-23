#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10;
    int b=20;


    int *pa=&a;

    int *pb=&b;

    swap(pa,pb);

    cout<<a<<" "<<b;
}