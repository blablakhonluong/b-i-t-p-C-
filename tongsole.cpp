#include<iostream>
using namespace std;

int main(){
    int n,S=0;
    cin>>n;
    for(int i=0; i<=n; i++){
        if(i%2==1){
            S+=i;
        }
    }
    cout<<S;



}