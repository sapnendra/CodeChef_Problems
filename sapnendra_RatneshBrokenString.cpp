#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    string str;
	    cin >>str;
	    
	    string a, b;
	  
	    for(int i = 0; i < n/2; i++) {
	        a = a+str[i];   
	    }
	    for(int i = n/2; i < n; i++) {
	        b = b+str[i];
	    }
	    
	    if(a==b) {
	        cout << "Yes" << endl;
	    } else {
	        cout << "No" << endl;
	    }
	}
	return 0;
}
