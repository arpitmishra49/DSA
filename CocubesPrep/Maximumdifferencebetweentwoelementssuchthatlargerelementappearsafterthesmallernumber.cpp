#include<iostream>
using namespace std;
int maxDiff(int arr[],int size){
    int diff=INT_MIN;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[j]-arr[i])>diff){
                diff=arr[j]-arr[i];
            }
        }
    }
    return diff;
}

int main()
{
    int len, i;
    cout << "Enter the length of the array\n"; 
    cin>>len;
    int arr[len];
    cout<< "Enter the elements of the array\n";
    for( i=0; i< len; i++) 
    { 
        cin>>arr[i];
    }
    cout<< maxDiff (arr, len);

    return 0;
}