#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string str; cin>>str;
    bool ans=false;
    for(ll i=0;i<str.length();i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'||str[i]=='+'||str[i]==33||str[i]==126||str[i]==72||str[i]==81)
        {ans=true;break;}
    }
    if(ans==true){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}