#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
            count++;
        }
    }
    cout<< count ;
    return 0;


}