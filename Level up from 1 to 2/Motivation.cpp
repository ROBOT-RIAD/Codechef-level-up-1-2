#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        int mx=INT_MIN;
        while(n--)
        {
            int s,r;cin>>s>>r;
            if(s<=x)
            {
               mx=max(mx,r);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}