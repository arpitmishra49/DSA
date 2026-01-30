#include <iostream>
using namespace std;
#include<vector>
int main() {
    // your code goes here
    vector<int> primes(1000001,1),count(1000001,0);
    primes[0]=primes[1]=0;
    for(int i=2;i<=1000000;i++){
        if(primes[i]==1){
            for(int j=2;j*i<=1000000;j++){
                count[i*j]+=1;
                primes[i*j]=0;
            }
        }
    }
    vector<int> hpcount(1000001,0);
    for(int i=2;i<=1000000;i++){
        if(count[i]==2){
            hpcount[i]=1;
        }
    }
    vector<int> pdcount(1000001,0);
    pdcount[0]=hpcount[0];
    for(int i=1;i<1000001;i++){
        pdcount[i]=pdcount[i-1]+hpcount[i];
    }
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        cout<<pdcount[n]<<"\n";
        t--;
        
    }
    return 0;
}