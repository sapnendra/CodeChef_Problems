#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"

void solve() {
    long long n,x;
    cin>>n>>x;
    long long total = (n+1);
    if((1-n)<=x && x<=(n+1)) {
        if(x<0) {
            long long ms = abs(x)+1;
            long long mul = n-ms;
            while(ms--) cout<<'-';
            while(mul--) cout<<'*';
            cout<< endl;
            return;
        }
        if(x>0) {
            long long p1 = abs(x)+1;
            long long mul = n-p1;
            while(p1--) cout<<'+';
            while(mul--) cout<<'*';
            cout<<endl;
            return;
        }
        if(x==0) {
            long long mul = (n-1);
            while(mul--) {
                cout<<"*";
                cout<<"-"<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}

int main() {
    int t;cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}