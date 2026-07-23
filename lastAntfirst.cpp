#include<iostream>
using namespace std;

void swap(string s, char ch, int *first,int *last){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *first=i;
            break;
        }

    }

       for(int i=s.size()-1 ;i>=0 ;i--){
        if(s[i]==ch){
            *last=i;
            break;
        }

    }
}

int main(){
    string s = "aabcad";
    char ch='a';

    int first;
    int last;

    int *pf=&first;
    int *pl=&last;

    swap(s,ch,pf,pl);

    cout<<first<<" "<<last<<endl;
    cout<<pf<<" "<<pl;
}