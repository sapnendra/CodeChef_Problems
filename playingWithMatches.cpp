#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int matches[] = {6,2,5,5,4,5,6,3,7,6};
	int t;
	cin >>t;
	while(t--) {
	    int a,b;
	    cin >> a >> b;
	    
        int sum = a+b;
        int ans = 0;
        while(sum>0) {
            int rem = sum%10;
            ans+=matches[rem];
            sum=sum/10;
        }
	}
	return 0;
}
