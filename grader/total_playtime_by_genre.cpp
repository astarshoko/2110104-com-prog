#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    vector<string> v;
    while(true){
        string s, genre="", time="00", sec="00";
        bool colon=false;
        getline(cin,s);
        if(s=="")break;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==':'){
                colon=true;
                continue;
            }
            if(colon){
                sec+=s[i];
            }
            if(cnt==2 && s[i]!=' '){
                genre+=s[i];
            }
            if(cnt==3 && colon==false && s[i]!=' '){
                time+=s[i];
            }
            if(s[i]==' '){
                cnt++;
            }
        }
        int n = (stoi(time)*60) + stoi(sec);
        if(m[genre]==0){
            v.push_back(genre);
        }
        m[genre]+=n;
        // cout << genre << " " << time << " " << sec;
        // cout << m[genre];
    }
    vector<pair<int,string> > ans;
    for(int i=0;i<v.size();i++){
        ans.push_back({m[v[i]],v[i]});
    }
    sort(ans.begin(),ans.end());
    // cout << "sadsa";
    for(int i=ans.size()-1;i>=0;i--){
        if(i==ans.size()-4)break;
        int a=ans[i].first/60;
        cout << ans[i].second << " --> " << a << ":" << ans[i].first%60 << endl;
    }
    // for(auto x:ans)cout << x.first << " " << x.second << endl;
}