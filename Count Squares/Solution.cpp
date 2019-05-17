#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
        cin>>n;
        double m=sqrt(n);
        if(m-int(m)==0.0){
            cout<<int(m)-1<<endl;
        }
        else{
            cout<<int(m)<<endl;
        }
	}
	return 0;
}
