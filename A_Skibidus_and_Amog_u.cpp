#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        string str; cin>>str;
        if(str[str.length()-1]=='s'&& str[str.length()-2]=='u')
        {
            for(ll i=0;i<str.length()-2;i++)
            {
                cout<<str[i];
            }
            cout<<'i'<<endl;  
        }
        else if(str=="us")
        {
            cout<<"i"<<endl;
        }
    }
    return 0;
}