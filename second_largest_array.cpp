#include<iostream>
using namespace std;

int elementLargest(int array[],int s){
    int largest;
    largest=array[0];


    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(array[j]>largest){
                largest=j;
            }
        }
    }
    return largest;
}

int main(){
    int arr[6];
    int size=sizeof(arr)/sizeof(arr[6]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int largestElement = elementLargest(arr,size);

    for(int i=0;i<size;i++){
        if(arr[largestElement]==arr[i]){
            arr[i]=-1;
        }

   
    }
     int secondLargest = elementLargest(arr,size);

    cout<<arr[secondLargest]<<"is the 2nd largest element";


}