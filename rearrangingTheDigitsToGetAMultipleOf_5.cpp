#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int d;
	    cin >> d;
	    
        string ch;
	    cin >> ch;
        bool flag = false;
        for(int i = 0; i < d; i++) {
            if(ch[i] == '5' || ch[i] == '0') {
                flag = true;
                break;
            }
        }
        if(flag) {
            cout << "Yes" <<endl;
        } else {
            cout << "No" << endl;
        }
	}
	return 0;
}
