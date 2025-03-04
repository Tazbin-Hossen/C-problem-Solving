#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string s; cin>>s;
    if(s=="S"){cout<<"N";}
    else if(s=="N"){cout<<"S";}
    else if(s=="E"){cout<<"W";}
    else if(s=="W"){cout<<"E";}
    else if(s=="NE"){cout<<"SW";}
    else if(s=="SE"){cout<<"NW";}
    else if(s=="NW"){cout<<"SE";}
    else{cout<<"NE";}
    return 0;
}