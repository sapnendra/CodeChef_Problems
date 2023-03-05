#include<iostream>
using namespace std;

int main() {
        int m,n,k;
        cin>>m>>n>>k;
        
        int sum=0;
        while(n>0) {
            sum+=k;
        }
        if(sum<m) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    return 0;
}