#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,vector<string> > m;
    vector<string> v;
    while(true){
        string s;
        getline(cin,s);
        if(s=="")break;
        int n=s.find(" ");
        if(m[s.substr(n+1)].empty())v.push_back(s.substr(n+1));
        m[s.substr(n+1)].push_back(s.substr(0,n));
    }
    for(auto x:v){
        cout << x << ": ";
        for(auto y:m[x]){
            cout << y << " ";
        }
        // cout << x << " ";
        cout << endl;
    }
}