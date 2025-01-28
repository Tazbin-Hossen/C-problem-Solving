#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string s1,s2,s3; cin>>s1>>s2>>s3;
    for(ll i=s1.length()-1;i>=0;i--)
    {
        s3+=s1[i];
    }
    if(s3==s2){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}