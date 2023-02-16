#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--) {
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int x;
	    cin>>x;
	    
	    if(a+b>=x || b+c>=x ||a+c>=x) {
	        cout<<"Yes"<<endl;
	    } else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
	
}