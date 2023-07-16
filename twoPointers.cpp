#include<iostream>
#include<vector>
using namespace std;

void sortedZeroAndOne(vector<int> &c){
int start_ptr=0;
int end_ptr=c.size()-1;

while(start_ptr<end_ptr){
    if(c[end_ptr]%2==0 && c[start_ptr]%2!=0){
        int d=c[start_ptr];
        c[start_ptr++]=c[end_ptr];
        c[end_ptr--]=d;
    }
    else if(c[start_ptr]%2==0){
        start_ptr++;

    }
  
    else if(c[end_ptr]%2!=0){
        end_ptr--;

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