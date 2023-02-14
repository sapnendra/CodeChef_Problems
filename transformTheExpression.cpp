#include<iostream>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string ans="";
	    stack<char> x;
	    for(int i=0;s[i]!='\0';i++) {
	        if(s[i] >= 'a' && s[i] <='z') {
	            ans+=s[i];
	        } else if(s[i]=='+' || s[i]=='-' ||
	                  s[i]=='*' || s[i]=='/' ||
	                  s[i]=='^' || s[i]=='%') {
	                     x.push(s[i]);
	       } else if(s[i]=='(') {
	           continue;
	       } else if (s[i]==')') {
	           ans+=x.top();
               x.pop();
	       }
	    }
	    cout<<ans<<endl;
    }
	return 0;
}
