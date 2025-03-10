#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     string s; cin>>s;
     bool ans=true;
     for(ll i=1;i<s.length();i++)
     {
       if(islower(s[i])){ans=false;}
     }
     if(ans==true)
     {
        for(auto x:s)
        {
            if(islower(x)){cout<<(char)toupper(x);}
            else{cout<<(char)tolower(x);}
        }
     }
     else{cout<<s;}
    return 0;
}