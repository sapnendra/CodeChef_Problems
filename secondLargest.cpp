#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    vector<int> v;
	    for(int i=0;i<3;i++) {
	        int ele;
	        cin>>ele;
	        v.push_back(ele);
	    }
	    sort(v.begin(),v.end());
	    cout<<v[1]<<endl;
	}
	return 0;
}