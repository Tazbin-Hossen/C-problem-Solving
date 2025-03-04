#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     string  str1,str2,str3; cin>>str1>>str2;
     for (ll i = 0; i < str1.length(); i++)
     {
        if((str1[i]=='1' && str2[i]=='1')||(str1[i]=='0' && str2[i]=='0')){str3+='0';}
        else{str3+='1';}
     }
     cout<<str3;
     
    return 0;
}