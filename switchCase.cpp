#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"character:";
    cin>>ch;

  switch (ch)
  {
    case 'a':
    cout<<"Vowels"<<endl;
    break;
    case 'e':
    cout<<"Vowels"<<endl;
    break;
     case 'i':
    cout<<"Vowels"<<endl;
    break;
     case 'o':
    cout<<"Vowels"<<endl;
    break;
     case 'u':
    cout<<"Vowels"<<endl;
    break;
    

  
  default:
  cout<<"Consonants";
    break;
  }
  return 0;
}