#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        string str; cin>>str;
        if(str.length()>10)
        {
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
    cout<<endl;
    return 0;
}