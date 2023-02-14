#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
        int n;
        cin>>n;
        char s[n];
        cin>>s;
	    int count = 0;
	    for(int i=0;i<n;i++) {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
	            count=0;
	        } else {
                count++;
            }
            if(count==4){
                break;
            }
	    }
	    if(count == 4) {
	        cout<<"NO"<<endl;
	    } else {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}