#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prefix_sum=0;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        arr[i]=prefix_sum;
    }

    cout<<"The prefix sum array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}