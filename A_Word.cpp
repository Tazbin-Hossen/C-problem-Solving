#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string s; cin>>s;
    ll uc=0,lc=0;
    string ans1,ans2;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]>='A'&& s[i]<='Z'){uc++;}
        else{lc++;}
    }
    if(uc>lc)
    {
        for(ll j=0;j<s.length();j++)
        {
           ans1+=toupper(s[j]);
        }  
        cout<<ans1;
    }
    else
    {
      for(ll k=0;k<s.length();k++)
        {
          ans2+=tolower(s[k]);
        }  
        cout<<ans2;
    }
    return 0;
}