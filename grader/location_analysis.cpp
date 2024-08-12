#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<string,int> & a,const pair<string,int> b){
    return a.second<b.second;
}

int main(){
    int n;
    cin >> n;
    map<string,vector<string> > id;
    map<string,vector<string> > town;
    map<string,int> index;
    for(int i=0;i<n;i++){
        string id1;
        cin >> id1;
        index[id1]=i;
        while(true){
            string s;
            cin >> s;
            if(s[0]=='*'){
                break;
            }
            else{
                id[id1].push_back(s);
                town[s].push_back(id1);
            }
        }
    }
    string s;
    cin >> s;
    int cnt=0;
    vector<pair<string,int> > ans;
    for(auto x:id[s]){
        for(auto y:town[x]){if(y!=s){
            ans.push_back({y, index[y]});
        cnt++;}}
    }
    sort(ans.begin(), ans.end(), comp);
    
    auto x = unique(ans.begin(),ans.end());
    ans.erase(x,ans.end());
for(auto x:ans){
        cout << ">> " << x.first << endl;
    }
    // for(auto x:ans)cout << ">> " << x << endl;
    if(cnt==0)cout << ">> Not Found";
}