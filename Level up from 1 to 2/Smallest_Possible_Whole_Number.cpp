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
        ll n,k;cin>>n>>k;
        if(k==0)
        {
            cout<<n<<endl;
        }
        else
        {
             cout<<n%k<<endl;
        }       
     }
     return 0;
 }
 