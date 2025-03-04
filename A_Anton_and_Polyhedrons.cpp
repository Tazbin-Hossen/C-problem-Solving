#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll sum=0;
    while(n--)
    {
        string s; cin>>s;
        if(s=="Tetrahedron"){sum+=4;}
        else if(s=="Cube"){sum+=6;}
        else if(s=="Octahedron"){sum+=8;}
        else if(s=="Dodecahedron"){sum+=12;}
        else{sum+=20;}
    }
    cout<<sum;
    return 0;
}