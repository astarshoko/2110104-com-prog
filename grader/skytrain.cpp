#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,vector<string> > m;
    string s;
    while(true){
        getline(cin,s);
        size_t n = s.find(" ");
        if(n==string::npos){
            break;
        }
        string s1=s.substr(0,n), s2=s.substr(n+1);
        
        m[s1].push_back(s2);
        m[s2].push_back(s1);
    }
    
    vector<string> v;
    int i=1;
    for(auto x:m[s]){
        for(int i=0;i<m[x].size();i++){
            if(m[x][i]!=s)v.push_back(m[x][i]);
        }
        v.push_back(x);
    }
    v.push_back(s);
    sort(v.begin(),v.end());
    auto x = unique(v.begin(),v.end());
    v.erase(x,v.end());
    for(auto x:v)cout << x << endl;
}