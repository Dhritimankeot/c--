#include<iostream>
#include<vector>
using namespace std;

void prefixSum( vector<vector<int>> &v){

    //rows

    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            v[i][j]+=v[i][j-1];
        }
    }

    //columns

      for(int i=1;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            v[i][j]+=v[i-1][j];
        }
    }
}

int sum(vector<vector<int> >&v){
    int l1,r1,l2,r2;
    cout<<"Enter l1";
    cin>>l1;
    cout<<"Enter r1";
    cin>>r1;
    cout<<"Enter l2";
    cin>>l2;
    cout<<"Enter r2";
    cin>>r2;

    int sum=0;

    sum=v[l2][r2]-v[l1-1][r2]-v[l2][r1-1]+v[l1-1][r1-1];
    return sum;

}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n));
    

    for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
             cin>>v[i][j];
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }


    prefixSum(v);

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

   cout<<sum(v);
}