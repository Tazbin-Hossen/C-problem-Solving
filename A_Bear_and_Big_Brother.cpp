#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b; cin>>a>>b;
    ll count=0; bool loop=true;
    while(loop)
    {
        a=a*3;
        b=b*2;
        count++;
        if(a>b){loop=false;}
    }
    cout<<count;
    return 0;
}