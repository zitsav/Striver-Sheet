#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long int n; cin>>n;
	int luck = 0;
    while (n>0){
        if (n%10 == 4 || n%10 == 7){
            luck++;
        }
        n /= 10;
    }
    if (luck == 7 || luck == 4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}