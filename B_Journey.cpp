#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        int n,a,b,c; cin>>n>>a>>b>>c;
        int sum=0,count=0;
        bool loop=true;
        
        while(loop)
        {
            sum+=a;
            count+=1;
            if(sum>=n){break; loop=false;}
            sum+=b;
            count+=1;
            if(sum>=n){break; loop=false;}
            sum+=c;
            count+=1;
            if(sum>=n){break;loop =false;}
        }
        cout<<count<<endl;
        count=0;
    }

    return 0;
}