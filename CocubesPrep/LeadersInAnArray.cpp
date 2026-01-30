#include<iostream>
using namespace std;
void findLeaders(int arr[],int size){
    for(int i=0;i<size;i++){
        bool flag=false;
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<arr[size-1];
}
int main()
{
int len, i;
cout<< "Enter the length of the array\n"; cin >> len;
int arr[len];
cout<< "Enter the elements of the array\n";
for( i=0; i<len; i++) 
{ 
cin>>arr[i];
}

int n = sizeof(arr)/sizeof(arr[0]);
findLeaders(arr, n);
return 0;
}