#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string ";
    cin>>str;
    bool flag=true;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]==str[str.length()-1-i]){
            flag=true;
        }
        else{
            flag=false;
            break;
        }

    }
    if(flag==false){
        cout<<"Not a palindrome ";
    }
    else{
        cout<<"It is a palindrome";

    }
    return 0;
    

}