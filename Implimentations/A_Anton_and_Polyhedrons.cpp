#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    while (n--){
        string s;
        cin>>s;
        if (s == "Cube"){
            ans += 6;
        }
        else if (s == "Dodecahedron"){
            ans += 12;
        }
        else if (s == "Octahedron"){
            ans += 8;
        }
        else if (s == "Icosahedron"){
            ans += 20;
        }
        else if (s == "Tetrahedron"){
            ans += 4;
        }
    }
    cout<<ans;
}