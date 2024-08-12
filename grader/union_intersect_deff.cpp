#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> unions;
    // vector<int> intersect, tempinter, diff, ansinter;
    // set<int> diff1, diff2;
    set<int> lastdiff;
    vector<int> all;
    bool first=true;
    int cnt=0;
    while(true){
        string s, temp="";
        getline(cin,s);
        if(s=="")break;
        cnt++;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' || i==s.length()-1){
                
                if(i==s.length()-1)temp+=s[i];
                if(first){
                    lastdiff.insert(stoi(temp));
                    // intersect.push_back(stoi(temp));  //intersect is the first to compare
                    // diff1.insert(stoi(temp));
                }
                if(!first){
                    lastdiff.erase(stoi(temp));
                }
                all.push_back(stoi(temp));
                unions.insert(stoi(temp)); //union
                // diff2.insert(stoi(temp));
                // tempinter.push_back(stoi(temp));
                temp="";
            }
            else{
                temp+=s[i];
            }
        }

        if(!first){
            // for(auto x:intersect){
            //     int a=count(tempinter.begin(),tempinter.end(),x);
            //     if(a!=0){
            //         ansinter.push_back(x); //
            //     }

            //     else{
            //        // intersect.push_back(x);
            //     }
            // }
            // intersect=ansinter;
            // tempinter.clear();
            // set_difference(diff1.begin(), diff1.end(), diff2.begin(), diff2.end(), back_inserter(diff));
        }

        first=false;
    }
    set<int> realanslol;
    for(auto x:all){
        int n=count(all.begin(),all.end(),x);
        // cout << x << " " << n << endl;
        if(n>=cnt){
            realanslol.insert(x);
        }
    }



    cout << "U: ";
    if(unions.empty()){
        cout << "empty set\n";
    }
    else{
        for(auto x:unions){
            cout << x << " ";
        }
        cout << endl;
    }
    cout << "I: ";
    if(realanslol.empty()){
        cout << "empty set\n";
    }
    else{
        for(auto x:realanslol){
            cout << x << " ";
        }
        cout << endl;
    }
    cout << "D: ";
    if(lastdiff.empty()){
        cout << "empty set\n";
    }
    else{
        for(auto x:lastdiff){
            cout << x << " ";
        }
        cout << endl;
    }
    cout << endl;
    // for(auto x : intersect)cout << x << " ";
}