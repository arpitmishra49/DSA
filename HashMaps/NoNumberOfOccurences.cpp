#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    unordered_map<int,int> Hmap;
    int arr[10]={1,1,2,3,45,45,1,4,88,88};
    for(int i=0;i<10;i++){
        Hmap[arr[i]]++;
    }
    for(auto pair:Hmap){
        if(pair.second%2==0){
            cout<<pair.first<<endl;
        }
    }
    return 0;

}