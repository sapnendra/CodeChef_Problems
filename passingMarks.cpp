#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n,x;
	    cin>>n>>x;
	    
	    vector<int> v;
	    for(int i=0;i<n;i++) {
	        int ele;
	        cin>>ele;
	        v.push_back(ele);
	    }
	    sort(v.begin(),v.end(),greater<int>());
	    cout<<v[x-1]-1<<endl;
	    
	}
	return 0;
}