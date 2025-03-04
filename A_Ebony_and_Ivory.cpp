#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b,c; cin>>a>>b>>c;
    bool loop=true;
    while(loop)
    {
        if(c==0){cout<<"Yes";break;}
        if(c<0){cout<<"No";break;}
        if(c==a&&c==b){cout<<"Yes";break;}
        else if(c-a==0 || c-b==0){cout<<"Yes";break;}
        else if(a>c&&b>c){cout<<"No";break;}
        else if(b>c&& a<=c){c=c-a;}
        else if(a>c && b<=c){c=c-b;}
        else if(a<c && b<c)
        {
            if(c%a==0||c%b==0)
            {cout<<"Yes";break;}
            else
            {
                if((a%2!=0&&b%2==0)&&c%2!=0){cout<<"Yes";break;}
                else{cout<<"No";break;}
            }
        }
    }
    return 0;
}