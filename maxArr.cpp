#include <iostream>
using namespace std;
int main(){
    int array[5]={1,2,5,16,3};
    int size=sizeof(array)/sizeof(array[0]);
    int num;
    cin>>num;
    for(int i=1;i<size;i++){
        if(num==array[i]){
            cout<<array[i]<<endl<<i;
        }
        
    }
    
}