#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string str;
    getline(cin,str);
    size_t position=str.find('\\');
    cout<<str.substr(0,position);
    return 0;
}