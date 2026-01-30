#include <iostream>



using namespace std;

int main() {

    // your code goes here

    int n,k,c=0,f=0;

    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++){

        cin>>a[i];

    }

    

    for(int i=0;i<n;i++){

        if(a[i]<=k){

            c++;

        }

    }

    for(int i=0;i<c;i++){

        if(a[i]<=k){

            f++;

        }

    }

    int f1=f;

    for(int i=c;i<n;i++){

        if(a[i]<=k){

            f1++;

        }

        if(a[i-c]<=k){

            f1--;

        }

        if(f1>f){

            f=f1;

        }

    }

    cout<<(c-f);

    return 0;

}