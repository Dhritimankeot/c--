#include<iosteam>
using namespace std;
int main(){
    int m,n;
    cout<<"no of rows";
    cin>>m;
    cout<<"no of columns";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=i;j<=n;j++){
            for(int s=1;s<=i-1;s++){
                cout<<i+s;
            }
        }
        cout<endl;
    }
}