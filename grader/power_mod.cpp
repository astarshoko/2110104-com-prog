#include<bits/stdc++.h>
using namespace std;
#define ll long long

double fun(int a, int k, int m){
    if(k==0)return 1;
    long long x = pow(fun(a,k/2,m),2);
    if(k%2==1)return (a*x)%m;
    else return x%m;

}

int main(){
    int a, k, m;
    cin >> a >> k >> m;
    long long x = fun(a, k, m);
    cout << x;
}