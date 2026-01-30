#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v;
    
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(2);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
        v.push_back(1);
        v.push_back(3);
        v.push_back(2);
    
    sort(v.begin(),v.end());
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            cout<<v[i-1]<<" "<<"Occurs"<<" "<<count<<"\n";
            count=1;
        }
    }
    return 0;

    
}