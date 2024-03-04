#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    ROBOT_RIAD;
    int t; cin >> t;
    while(t--)
    {
        ll w1,w2,x1,x2,m;cin>>w1>>w2>>x1>>x2>>m;

        ll dif =w2-w1;
        ll in1=x1*m;      
        ll in2=x2*m;
        if(dif>=in1 && dif<=in2)
        {
            cout<<1<<endl;
        } 
        else
        {
            cout<<0<<endl;
        }     
    }
    return 0;
}
