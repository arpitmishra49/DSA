#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

   for(int i=0;i<s1.length();i++){
    cout<<s1[i]-'a'<<"->"<<(int)s1[i]<<endl;
   }
    return 0;
}