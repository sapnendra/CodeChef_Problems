#include <iostream>
using namespace std;

int speedOfCar(int x) {
    if(x <= 70) {
        return 0;
    }
    if(x > 70 && x <= 100) {
        return 500;
    }
    if(x > 100) {
        return 2000;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
    while(t--) {
        int x;
        cin >> x;
        cout << speedOfCar(x) << endl;
    }
    return 0;
}