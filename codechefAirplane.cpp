#include <iostream>
using namespace std;

int main(){
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int cap = 10*x;
	    
	    if(cap >= y) {
	        cout<<(y*z)<<endl;
	    } else {
	        cout<<(cap*z)<<endl;
	    }
    }
	return 0;
}