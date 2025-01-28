#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    bool loopCholbe=true; ll count=0;
    ll limak,bob; cin>>limak>>bob;
    while(loopCholbe)
    {
        limak=limak*3;
        bob=bob*2;
        count++;
        if(limak>bob)
        {
            break;
        }
    }
    cout<<count;
    count=0;
    return 0;
}