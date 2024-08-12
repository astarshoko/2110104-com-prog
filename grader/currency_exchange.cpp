#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,double> m;
    for(int i=0;i<n;i++){
        string s;
        double d;
        cin >> s >> d;
        m[s]=d;
    }
    int value;
    cin >> value;
    string s;
    cin >> s;
    cout << value << " " << s << " -> ";
    vector<string> vs;
    vs.push_back(s);
    string a;
    getline(cin,a);
    string temp="";
    for(int i=0;i<a.length();i++){
        if(a[i]!=' '){
            temp+=a[i];
        }
        if(temp.length()==3){
            vs.push_back(temp);
            temp="";
        }
    }
    // for(auto x:vs)cout << x << " ";
    for(int i=1;i<vs.size();i++){
        a=vs[i];
        s=vs[i-1];
        if(a==s){
            cout << value << " " << s ;
        }
        else{
            if(s=="THB"){
                value=value/m[a];
                s=a;
                cout << value << " " << s ;
                
            }
            else{
                if(a=="THB"){
                    value=value*m[s];
                    s=a;
                    cout << value << " " << s ;
                }
                else{
                    value=value*m[s]/m[a];
                    s=a;
                    cout << value << " " << s ;
                }
            }
        }
        if(i==vs.size()-1)break;
        cout << " -> ";
    }
}

/*

        
*/