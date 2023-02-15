#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
		// fight one
	    int energy_reduced = min(a,b);
		a=a-energy_reduced;
		b=b-energy_reduced;
		// fight second
		int energy_reduced2 = min(b,c);
		b=b-energy_reduced2;
		c=c-energy_reduced2;
		// fight three
		int energy_reduced3 = min(a,c);
		a=a-energy_reduced3;
		c=c-energy_reduced3;

		if(a>0) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
	return 0;
}