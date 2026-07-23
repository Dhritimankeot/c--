#include <iostream>
using namespace std;
void array(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i);
    }

    *(arr + 3)=7;

}
int main(){
    int arr[5]={1,2,3,4,5};
    int *p= arr;

   array(p,5);
      for(int i=0;i<5;i++){
        cout<<*(arr+i);
    }
    
}