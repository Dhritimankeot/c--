#include<iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascalTriangle(int k){
    vector<vector<int>> pascal(k);

    for(int i=0;i<pascal.size();i++){
        pascal[i].resize(i+1);

            for(int j=0;j<i+1;j++){
                if(j==0 || j==i){
                    pascal[i][j]=1;
                }
                else{
                    pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                }
            }
           
        }
        return pascal;
    }



int main(){
    int n;
    cin>>n;
    vector <vector<int>> v(n);
    
    

    
    vector <vector<int>> ans;
    ans=pascalTriangle(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }cout<<endl;
    }
}