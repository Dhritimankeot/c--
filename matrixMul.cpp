#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter r1";
    cin>>r1;
    cout<<"Enter c1";
    cin>>c1;

    int a[r1][c1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
       for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }

        int r2,c2;
    cout<<"Enter r2";
    cin>>r2;
    cout<<"Enter c2";
    cin>>c2;

    int b[r2][c2];

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
      
      for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<b[i][j]<<" ";
        }cout<<endl;
        
    }

    if(c1!=r2){
        cout<<"Cannot be multiplied";
    }

   
 

    
  

    
    int ans[r1][c2];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++ ){
                value+=a[i][k]*b[k][j];
            }

            ans[i][j]=value;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

    return 0;




}