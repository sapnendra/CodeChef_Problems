#include<iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    
	    int arr[4];
	    for(int i=0; i<4; i++) {
	        cin>>arr[i];
	    }
	    
	    int max = INT_MIN;
	    for(int i = 0; i< 4; i++) {
	        if(arr[i] > arr[i+1]) {
	            max = arr[i];
	        }
	    }
	    cout << max << endl;
	}
	return 0;
}
