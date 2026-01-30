#include<iostream>
using namespace std;
int main(){
    string c="This";
    for(int i=0;i<c.length()-1;i++){
        swap(c[i],c[c.length()-1-i]);

    }
    for(int i=0;i<c.length();i++){
        cout<<c[i];

    }
    return 0;

}