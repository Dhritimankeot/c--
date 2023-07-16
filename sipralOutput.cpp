#include<iostream>
#include<vector>
using namespace std;
void spiralOutput (vector<vector<int>> &v){
    int dir=0;
    int top=0;
    int bottom=v.size()-1;
    int left=0;
    int right=v[0].size()-1;

    while(top<=bottom && left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++){
               cout<< v[top][i];
               
            }
            top++;
        }
          else if(dir==1){
            for(int j=top;j<=bottom;j++){
               cout<<v[j][right];
                
            }
            right--;
        }
        else if(dir==2){
            for(int i=right;i>=left;i--){
               cout<<v[bottom][i];
              
            }
            bottom--;
        }

        else {
            for(int j=bottom;j>=top;j--){
               cout<<v[j][left];
               
            }
            left++;
        }
        
    dir=(dir+1)%4;
    }

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

    spiralOutput(v);

    return 0;
}