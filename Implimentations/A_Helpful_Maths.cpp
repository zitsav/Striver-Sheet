#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = (s.size()+1)/2;
    vector<char>v;
    for (int i = 0; i<s.size(); i+=2){
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i<v.size(); i++){
        if (i != v.size()-1){
            cout<<v[i]<<"+";
        }
        else{
            cout<<v[i];
        }
    }
}