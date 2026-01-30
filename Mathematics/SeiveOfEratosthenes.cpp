#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int T;
    cin>>T;
    int primes[1000001];
    for(int i=0;i<=1000000;i++){
        primes[i]=1;
    }
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i*i<=1000000;i++){
        if(primes[i]==1){
            for(int j=i;i*j<=1000000;j++){
                primes[i*j]=0;
            }
        }
    }
    int prefix[1000001];
    prefix[1]=0;
    
    for(int i=2;i<1000000;i++){
        prefix[i]=prefix[i-1]+primes[i];
    }
    while(T>0){
        int n;
        cin>>n;
        cout<<prefix[n]<<"\n";
        T--;
    }
    return 0;
}