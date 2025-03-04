#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    string str,ans; cin>>str;
    for(ll i=0;i<str.length();i++)
    {
        if(i==0){ans+=toupper(str[i]);}
        if(i>0){ans+=tolower(str[i]);}
    }
    cout<<ans;
    return 0;
}