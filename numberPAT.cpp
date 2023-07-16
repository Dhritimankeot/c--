#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"no of rows"<<endl;
    cin>>m;
    cout<<"no of columns"<<endl;
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=i;j<=n;j++){
          cout<<j;
        }
        for(int s=1;s<=i-1;s++){
            cout<<s;
        }
        cout<<endl;
    }
}