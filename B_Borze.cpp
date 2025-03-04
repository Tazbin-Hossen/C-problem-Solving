#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    string s,k; cin>>s>>k;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='.'){k+='0';}
        if(s[i]=='-'&&s[i+1]=='-'){k+=2;}
        if(s[i]=='-'&&s[i+1]=='.'){k+=1;}
    }
    cout<<k;
    return 0;
}