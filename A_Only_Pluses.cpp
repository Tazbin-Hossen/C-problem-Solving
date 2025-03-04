#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c; cin>>a>>b>>c;
        ll x=max({a,b,c}),y=min({a,b,c});

        if(a!=b&&b!=c&&c!=a){x+=3;cout<<a*b*x<<endl;}
        else if(a==b&&b==c&&c==a){a+=2;b+=2;c+=1; cout<<a*b*c<<endl;}
        else if((a==b&&b==c)||(b==c&&c==a)||(c==a||a==b))
        {
            if(a>b||a>c){a+=1;b+=2;c+=2;cout<<a*b*c<<endl;}
            else if(b>a||b>c){b+=1;a+=2;c+=2;cout<<a*b*c<<endl;}
            else if(c>b||c>a){c+=1;b+=2;a+=2;cout<<a*b*c<<endl;}
            else 
            {
                else if(a==y){a+=2;b+=2;c+=1;cout<<a*b*c<<endl;}
                else if(b==y){a+=2;b+=2;c+=1;cout<<a*b*c<<endl;}
                else if(c==y){a+=1;b+=2;c+=2;cout<<a*b*c<<endl;}
            }
       }
        else if((a!=b&&b!=c&&c!=a))
        {
            if(x!=a&&y!=a){a+=2;cout<<a*b*c<<endl;}
            else if(x!=b&&y!=b){b+=2;cout<<a*b*c<<endl;}
            else if(x!=c&&y!=c){c+=2;cout<<a*b*c<<endl;}
        }
    }
    return 0;
}