#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;

    for(int i=0;i<5;i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    // for(int item:v){
        // cout<<item<<" ";
    // }
    v.insert(v.begin()+2,99);

    v.erase(v.begin()+1);

    v.pop_back();

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}