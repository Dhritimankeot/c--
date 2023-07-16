#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortedArray(vector<int> &d){
    vector<int> a;

    int left_ptr=0;
    int right_ptr=d.size()-1;

    while(left_ptr<=right_ptr){
        if(abs(d[left_ptr])>abs(d[right_ptr])){
             a.push_back(d[left_ptr]*d[left_ptr]);
            left_ptr++;
        }
          if(abs(d[left_ptr])<=abs(d[right_ptr]))
          {
            
           
            a.push_back(d[right_ptr]*d[right_ptr]);
            right_ptr--;
        }
    }

   reverse(a.begin(),a.end());

    for(int i=0;i<d.size();i++){
        d[i]=a[i];
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

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    sortedArray(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}