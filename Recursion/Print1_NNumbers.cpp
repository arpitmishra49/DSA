#include<iostream>
using namespace std;
void printNum(int n){
    
    if(n>6){
        return;
    }
    cout<<n<<endl;
    n++;
    printNum(n);
}
int main(){
    int n;
    cin>>n;
    printNum(n);
    return 0;

}