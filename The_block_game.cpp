#include <iostream>
using namespace std;

int reverse(int n) {
    int sum = 0;
    while(n>0) {
        int rem = n%10;
        sum = (sum*10)+rem;
        n=n/10;
    }
    return sum;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    
	    int n;
	    cin >> n;
	    
	    int temp = n;
	    
	    int rev = reverse(n);
	    if(temp == rev) {
	        cout << "wins" << endl;
	    } else {
	        cout << "loses" << endl;
	    }
	}
	return 0;
}
