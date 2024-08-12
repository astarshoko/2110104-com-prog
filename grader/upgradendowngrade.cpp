#include<bits/stdc++.h>
using namespace std;

string grade[8] = {"A","B+","B","C+","C","D+","D","F"};

bool comp(){

}

int main(){
    int n;
    cin >> n;
    vector<pair<string,int>> idindex;
    map<string,int> strindex;
    map<string,string> ans;
    cin.ignore();
    for(int i=0;i<8;i++){
        strindex[grade[i]]=i;
    }
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        int a = s.find(' ');
        string s1=s.substr(0,a), s2=s.substr(a+1);
        idindex.push_back({s1,i});
        ans[s1]=s2;
    }
    vector<pair<string,int> > v; /////////////  V IS OPERATOR
    while(true){
        string s;
        getline(cin,s);
        if(s=="")break;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='+'){
                v.push_back({temp,1});
                temp="";
            }
            else if(s[i]=='-'){
                v.push_back({temp,-1});
                temp="";
            }
            else{
                if(s[i]!=' ')temp+=s[i];
            }
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i].second==1){
            if(strindex[ans[v[i].first]]==0){
                continue;
            }
            else{
                ans[v[i].first]=grade[strindex[ans[v[i].first]]-1];
            }
        }
        else{
            if(strindex[ans[v[i].first]]==7){
                continue;
            }
            else{
                ans[v[i].first]=grade[strindex[ans[v[i].first]]+1];
            }
        }
    }
    // for(int i=0;i<idindex.size();i++){
    //     cout << idindex[i].first << " " << strindex[ans[idindex[i].first]] << endl;
    // }
    vector<pair<int,pair<int,string> > > realans;
    for(int i=0;i<idindex.size();i++){
        realans.push_back({strindex[ans[idindex[i].first]] ,{idindex[i].second,idindex[i].first}});
    }
    sort(realans.begin(),realans.end());
    // for(auto x:realans){
    //     cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    // }
    for(auto x:realans){
        cout << x.second.second << " " << grade[x.first] << endl;
    }
}