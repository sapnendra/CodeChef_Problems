#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int x, y;
	    cin>>x>>y;
	    
	    if(y>x) {
	        int result1=x+((y-x)*2);
	        cout<<result1<<endl;
	    }
	    if(y<=x) {
	        cout<<y<<endl;
	    }
	}
	return 0;
}