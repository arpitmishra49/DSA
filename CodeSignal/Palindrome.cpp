#include<iostream>
using namespace std;
#include<string>
bool palindrome(string s){
    int st=0;
    int e=s.length()-1;
    bool flag=true;
    while(st<=e){
        if(s[st]!=s[e]){
            flag=false;
            break;

        }
        else{
           
            st++;
            e--;

        }

    }
    return flag;
}
int main(){
    string s="MAM";
    if(palindrome(s)){
        cout<<"Is a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }


}