#include<iostream>
using namespace std;
int CharacterCount(string str1,string str2){
    int freq[26]={0};
    for(auto ch:str1){
        freq[ch-'a']++;
    }
    int cnt=0;
    for(auto ch:str2){
        if(freq[ch-'a']>0){
            cnt++;
            freq[ch-'a']--;
        }
    }
    return cnt;
    


}