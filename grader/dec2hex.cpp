#include <iostream>
using namespace std;
string dec2hex(int d) {
    if(d<16){
        if(d>=0 && d<=9)return to_string(d);
        return d==10?"A": d==11?"B":d==12?"C":d==13?"D":d==14?"E":"F";
    }
    return dec2hex(d/16) + dec2hex(d%16);
}
int main() {
	int d=2;
	while (cin >> d) {
		cout << d << " -> " << dec2hex(d) << endl;
	}
	return 0;
}