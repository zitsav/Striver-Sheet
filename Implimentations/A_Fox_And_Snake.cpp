#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    for (int i = 0; i<n; i++){
        if (i%2 == 0){
            for (int j = 0; j<m; j++){
                cout<<"#";
            }
        }
        else{
            if ((i+1)%4 == 0){
                cout<<"#";
                for (int j = 1; j<m; j++){
                    cout<<".";
                }
            }
            else {
                for (int j = 1; j<m; j++){
                    cout<<".";
                }
                cout<<"#";
            }
        }
        cout<<endl;
    }
}