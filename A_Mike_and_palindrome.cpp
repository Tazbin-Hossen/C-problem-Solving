#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    string str; cin>>str;
    string temp=str;
    reverse(str.begin(),str.end());
    if(str==temp){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}