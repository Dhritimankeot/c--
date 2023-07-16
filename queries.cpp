#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Array size:";
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     for(int i=0;i<n;i++){
        cout<<v[i];
    }

     const int N=1e5 + 10;

    vector<int> freq(N,0);

    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    cout<<"Enter no of queries";
    int q;
    cin>>q;

    while(q--){
        cout<<"Enter queries";
        int querieele;
        cin>>querieele;
        cout<<freq[querieele]<<endl;
    }
    
    
}