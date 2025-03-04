#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        string str; cin>>str;
        if(str[str.length()-1]=='s'&&str[str.length()-2]=='u')
        {
            for(ll i=0;i<str.length()-2;i++)
            {
                cout<<str[i];
            }
            cout<<"i"<<endl;
        }
    }

    return 0;
}