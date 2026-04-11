#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);

    }
    cout<<s;
    


    return 0;

}
