#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n=10;
    vector<int> NGE(n);
    vector<int> v(n);

    for(int i=0;i<n;i++){
        v[i]=i;
    }
    
    for(int i=0;i<n;i++){
        NGE[i]=0;
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j]){
                NGE[i]=v[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<NGE[i]<<" ";
    }


}