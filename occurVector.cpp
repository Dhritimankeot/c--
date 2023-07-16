#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> v(7);

   for(int i=0; i<v.size();i++){
    cin>>v[i];
   }
    
    int max=v[0];
    int store;
    

    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j]>max){
               
                store=j;
            }
                
            }
        }
        v.erase(v.begin()+store);

      for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j]>max){
                max=v[j];
            }
                
            }
        }

        cout<<"The 2nd largest element is"<<max;

          
    return 0;

}