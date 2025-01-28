#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string s1,s2; cin>>s1>>s2;
    char ss1='a',ss2='a';
    for(ll i=0;i<s1.length();i++)
    {
        if(tolower(s1[i])>ss1){ss1=tolower(s1[i]);}
        if(tolower(s2[i])>ss2){ss2=tolower(s2[i]);}
    }
    if(ss1>ss2){cout<<"1";}
    else if(ss1==ss2){cout<<"0";}
    else{cout<<"-1";}
    return 0;
}