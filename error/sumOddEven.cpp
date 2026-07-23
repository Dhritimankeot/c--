#include <iostream>

using namespace std;

int main(){
    int m,n,x,y;
    cout<<"Enter No of rows and columns of 1st array"<<endl;
    cin>>m>>n;
    cout<<"Enter No of rows and columns of  2nd array"<<endl;
    cin>>x>>y;
    
    int arr1[m][n];

    cout<<"Enter the inputs for 1st array";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"arr1"<<"["<<i<<"]"<<"["<<i<<"]"<<":";
            cin>>arr1[i][j];
        }
    }

    int arr2[x][y];

     cout<<"Enter the inputs for 2nd array";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            cout<<"arr1"<<"["<<i<<"]"<<"["<<j<<"]"<<":";
            cin>>arr2[i][j];
        }
    }

    cout<<"MATRIX MULTIPLICATION"<<endl;

    int matMul[m][y];
    
    if(n!=x){
        cout<<"Invalid matrix for multiplication";
    }else{
            for(int i=0;i<m;i++){
                for(int j=0;j<y;j++){
                    int value = 0;
                    for(int k=0;k<n;k++){
                        value += arr1[j][k] * arr2[k][j];
                }
                matMul[i][j] = value;
            }
        }
    }
    
for(int i=0;i<m;i++){
    for(int j=0;j<y;j++){

            cout<<matMul[i][j]<<" ";
        }cout<<endl;
    }


    


}