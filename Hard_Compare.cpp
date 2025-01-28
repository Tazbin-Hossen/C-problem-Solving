#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int sum(int x,int y)
{
    int suum=x+y;
    return sqrt(suum);

}
int main(){
    ll n1,n2; cin>>n1>>n2;
    cout<<sum(n1,n2);
    return 0;
}