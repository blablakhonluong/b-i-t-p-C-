//tính tổng các số từ 1 đến n

#include<iostream>
using namespace std;

int main(){
    int n,S=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        S+=i;
    }

    cout<<S;

    //Second solution 
    //cout<<n*(n+1)/2 :))



}