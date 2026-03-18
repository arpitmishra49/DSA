#include <iostream>
#include <unordered_map>
#include <string>   

using namespace std;

int main() {
    unordered_map<string, int> marks;

   
   marks["Alice"]=10;
   marks["Bob"]=30;
   cout<<"Alice: "<<marks["Alice"]<<" ";


    return 0;
}