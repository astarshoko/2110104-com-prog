#include<bits/stdc++.h>
using namespace std;

string s;
set<string> ans;

void fun(string st, int l, int r){
    if(l==r){
        ans.insert(st);
        return;
    }
    else{
        for(int i=l;i<=r;i++){
            swap(st[i],st[l]);
            fun(st,l+1,r);
            swap(st[i],st[l]);
        }
    }
}

int main(){
    cin >> s;
    fun(s,0,s.length()-1);
    for(auto x:ans) cout << x << " ";
}