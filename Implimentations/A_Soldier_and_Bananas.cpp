#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int money = (k*(w)*(w+1))/2;
    if (money>n){
        cout<<money-n;
    }
    else{
        cout<<0;
    }
}