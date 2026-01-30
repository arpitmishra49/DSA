#include<iostream>
using namespace std;
int main(){
    string str="AAN7AIURT";
    for(int i=0;i<str.length();i++){
        if(isnumber(str[i])){
            cout<<str[i];
            
        }
    }
}