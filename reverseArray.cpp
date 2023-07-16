// #include <iostream>
// using namespace std;
// int main(){
   // int arr[5];
   // int n=sizeof(arr)/sizeof(arr[0]);
   // for(int i=0;i<n;i++){
      // cin>>arr[i];
   // }
   //  for(int i=0;i<n;i++){
      // cout<<" "<<arr[i];
   // }
   // cout<<"Enter k:";
   // int k;
   // cin>>k;
// 
   // k=k%n;
// 
   // int revarr[5];
   // int j=0;
// 
   // for(int i=n-k;i<n;i++){
      // revarr[j++]=arr[i];
   // 
   // }
// 
   // for(int i=0;i<(n-k);i++){
      // revarr[j++]=arr[i];
   // }
// 
   // for(int i=0;i<n;i++){
      // cout<<" "<<revarr[i];
   // }

   // return 0;
   // 
// 
// }

//using vector operation

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector <int> v(6);

   for(int i=0;i<v.size();i++){
      cin>>v[i];
   }

   cout<<"Enter k"<<endl;
   int k;
   cin>>k;

   k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse((v.begin()+k),v.end());

 for(int i=0;i<v.size();i++){
      cout<<v[i];
   }



}