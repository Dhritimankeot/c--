#include<iostream>
#include<vector>
using namespace std;

void sortedZeroAndOne(vector<int> &c){
    int zero_count=0;

    for(int item:c){
        if(item==0){
            zero_count++;
        }
    }
    for(int i=0;i<c.size();i++){
        if(i<zero_count){
            c[i]=0;
        }else{
            c[i]=1;
        }
    }
}
int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    sortedZeroAndOne(v);

    for(int i= 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}