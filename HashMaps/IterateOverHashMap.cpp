#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    unordered_map<string,int> marks;
    marks["Arpit"]=40;
    marks["Anant"]=80;
    for(auto pair:marks){
        cout<<pair.first<<" "<<pair.second<<" ";
        cout<<"\n";

    }
    return 0;

}