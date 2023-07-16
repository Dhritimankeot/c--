#include <iostream>
using namespace std;
int main(){
    char array[5]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    
    //for(int idx=0;idx<size;idx++){
    //    cin>>array[idx];
    //}
    // for(int idx=0;idx<size;idx++){
    //    cout<<array[idx]<<endl;
    //}
    // for(int &elements:array){
        // cin>>elements;
    // }
    //    for(int &elements:array){
        // cout<<elements;
    //
    int sum=0;

  for(int i=0;i<size;i++){
    sum+=array[i];
  }
   cout<<sum<<endl;
   
}