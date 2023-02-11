#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    char s[100];
	    cin >> s;
	    char t[100];
	    cin >> t;
	    
	    char m[100];
	    
	    for(int i = 0; i < 5; i++) {
	        if(s[i] == t[i]) {
	            m[i]='G';
	        } else {
	            m[i] = 'B';
	        }
	    }
        for(int i = 0; i<5; i++) {
            cout << m[i];
        }
        cout << endl;
	}
	return 0;
}
