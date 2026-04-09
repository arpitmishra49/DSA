#include<iostream>
using namespace std;
#include<string>
#include<vector>
vector<string> Max(vector<string> v){
    int max=0;
    vector<string> ans;
    for(int i=0;i<v.size();i++){
        if(v[i].length()>max){
            max=v[i].length();
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i].length()==max){
            ans.push_back(v[i]);
        }
    }
    return ans;

}

int main(){
    vector<string> v;
    v.push_back("Abbbc");
    v.push_back("Abc");
    v.push_back("Abbc");
    v.push_back("Abbbc");
    v.push_back("Abbc");
    v.push_back("Abbbc");
    vector<string> ans=Max(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }


}