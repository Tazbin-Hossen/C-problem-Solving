#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll count=0;
    string str1,str2; 
    cin>>str1>>str2;
    for(ll i=0;i<str1.length();i++)
    {
        char x=tolower(str1[i]);
        char y=tolower(str2[i]);
        if(x<y){cout<<-1;break;}
        if(x==y){count++;}
        else if(x>y){cout<<1;break;}

    }
    if(count==str1.length()){cout<<0;}
    return 0;
}