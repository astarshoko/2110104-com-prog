#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> ans;
    set<string> teams;
    vector<string> realans;
    while(1){
        string s;
        getline(cin,s);
        if(s=="")break;
        int n=s.find(' ');
        string s1 = s.substr(0,n), s2=s.substr(n+1);
        if(ans[s1]!=-1)ans[s1]=1; ans[s2]=-1;
        teams.insert(s1); teams.insert(s2);
    }
    for(auto x:teams ){
        if(ans[x] == 1)realans.push_back(x);
    }
    if(realans.empty())cout<<"None";
    else{
        for(auto x:realans)cout << x << " ";
    }
}