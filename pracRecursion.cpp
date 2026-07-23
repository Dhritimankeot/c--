#include <iostream>
using namespace std;
// sum of the digits
// int f(int n){
//     if(n>=0 && n<=9){
//         return n;
//     }
//     return f(n/10)+ n%10;
// }
// int main(){
//     int n;
//     cin>>n;
//     int result = f(n);
//     cout<<result;
//     return 0;
// }

// p^q

int power(int p,int q){
    if (q==0){
        return 1;
    }

    return p * power(p,q-1);
}
int main(){
    int p,q;
    cin>>p>>q;
    int result = power(p,q);
    cout<<result;
    return 0;
}