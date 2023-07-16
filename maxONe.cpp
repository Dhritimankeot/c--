#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxOneRow(vector<vector<int>> &v){
    int maxOne=INT_MIN;
     int rowMaxOne=-1;
     int column=v[0].size();
     
    //  for(int i=0;i<v.size();i++){
        // for(int j=0;j<v[i].size();j++){
                // int oneCount;
            // if(v[i][j]==1){
            //    int index=j;
                // oneCount=column-index;
                // if(oneCount>maxOne){
                    // maxOne=oneCount;
                    // rowMaxOne=i;
                // }
            // }
        // }
    //  }
        for(int i=0;i<v.size();i++){
            int oneCount=0;
        for(int j=v[i].size()-1;j>=0;j--){
                
            if(v[i][j]==1){
               oneCount++;
                if(oneCount>maxOne){
                    maxOne=oneCount;
                    rowMaxOne=i;
                }
            }
        }
     }
     return rowMaxOne;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j];
        }cout<<endl;
    }

    cout<<maxOneRow(v);
}