#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector <vector<int>> v(m,vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    //transpose

   for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        swap(v[i][j],v[j][i]);
    }
   }

   //reverse

   for(int i=0;i<n;i++){
    reverse(v[i].begin(),v[i].end());
   }


        

    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }

}