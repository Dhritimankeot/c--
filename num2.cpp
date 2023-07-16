#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"number of rows"<<endl;
    cin>>n;
    cout<<"number of columns"<<endl;
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 ||i==n||j==1||j==n){
                cout<<j;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}