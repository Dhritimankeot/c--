#include<iostream>
#include<vector>
using namespace std;

void spiralInput(vector<vector<int>> &v){
    int dir=0;
    int top=0;
    int bottom=v.size()-1;
    int left=0;
    int right=v[0].size()-1;

    while( top<=bottom && left<=right){
        //left to right
           
                    if(dir==0){
                        for(int i=left;i<=right;i++){
                            cin>>v[top][i];
                        }
                         top++;
                    }
                  

                    //top to bottom 
                    
                    else if(dir==1){
                        for(int j=top;j<=bottom;j++){
                             cin>>v[j][right];
                        }
                         right--;
                       
                    }
                    
                   //right to left

                    else if(dir==2){
                        for(int i=right;i>=left;i--){
                            cin>>v[bottom][i];
                        }
                     bottom--;
                    }
                    
                    //bottom to top
                          else if(dir==3){
                        for(int j=bottom;j>=top;j--){
                            cin>>v[j][left];
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

     spiralInput(v);

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
     }

}