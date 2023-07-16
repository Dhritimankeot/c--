#include<iostream>
#include<vector>
using namespace std;
bool prefixSuffixSum(vector<int> p){
    int total_sum=0;
    for(int i=0;i<p.size();i++){
        total_sum += p[i];
    
    }
    
     int prefix=0;

    for(int i=0;i<p.size();i++){
       
        prefix+=p[i];
        int suffix=total_sum-prefix;

        if(prefix==suffix){
            return true;
        }
    }
    return false;

    
}

int main(){
    int n;
    cin>>n;
    vector <int> v(n);

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

  

    cout<<prefixSuffixSum(v);
    cout<<"At index"<<" "<<index(v)<<"we can have a partition";

    return 0;


    
    
    

}