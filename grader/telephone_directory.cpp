#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    map<string,string> name;
    map<string,string> tel;
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        int cnt=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==' ')cnt++;
            if(cnt==2){
                name[s.substr(0,j)]=s.substr(j+1);
                tel[s.substr(j+1)]=s.substr(0,j);
                break;
            }
        }
    }
    
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        if(name[s].empty() && tel[s].empty()){
            cout << s << " --> Not found" << endl;
        }
        else if(name[s]!=""){
            cout << s << " --> " << name[s] << endl;
        }
        else {
            cout << s << " --> " << tel[s] << endl;
        }
    }
}