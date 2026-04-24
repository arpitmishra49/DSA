#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    cin>>s;
    string ans="";
    for(char ch : s){
        if(isalpha(ch)){
            ch=tolower(ch);
            int val=(ch-'a'+1);
            ans=ans+to_string(val);
        }
    }
    cout<<ans;

}