#include<iostream>
#include<vector>
using namespace std;
void squareOfArray(vector <int> &v){
    for(int i=0;i<v.size();i++){
        v[i]=v[i]*v[i];
    }
}
void sortArray(vector <int> &v){
    int min=v[0];
    int c;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j]<v[i]){
                int c=v[i];
                v[i]=v[j];
                v[j]=c;
            }
          

        }
    }
}
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Your array is";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"The square of array is:"<<endl;
    squareOfArray(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    cout<<"The sorted array is:"<<endl;

    sortArray(v);
      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}