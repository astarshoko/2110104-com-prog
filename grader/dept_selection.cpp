#include<bits/stdc++.h>
using namespace std;
#define s second
#define f first
#define ll long long

bool sorted(const pair<double,pair<long long,int>>& a, const pair<double,pair<long long,int>>& b){return a.f>b.f;}

int main(){
    int n, m;
    cin >> n;
    map<string,int> major;
    for(int i=0;i<n;i++){
        string s;
        int a;
        cin >> s >> a;
        major[s]=a;
    }
    cin >> m;
    vector<string> v[m];
    vector<pair<double,pair<ll,int>>> score(m);
    for(int i=0;i<m;i++){
        string s1, s2, s3, s4;
        ll a;
        double d;
        cin >> a >> d >> s1 >> s2 >> s3 >> s4;
        score[i].f=d; score[i].s.f=a; score[i].s.s=i;
        v[i].push_back(s1);
        v[i].push_back(s2);
        v[i].push_back(s3);
        v[i].push_back(s4);
    }
    sort(score.begin(),score.end(),sorted);
    vector<pair<ll,string>> ans;
    for(int i=0;i<m;i++){
        int index = score[i].s.s;
        for(int j=0;j<4;j++){
            if(major[v[index][j]]){
                major[v[index][j]]--;
                ans.push_back({score[i].s.f,v[index][j]});
                break;
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}