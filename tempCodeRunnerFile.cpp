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

    for(int i=l1;i<=l2;i++){
        if(r1!=0){
             sum=sum+(v[i][r2]-v[i][r1-1]);
        }
        else{
            sum+=v[i][r2];
        }
       
    }
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