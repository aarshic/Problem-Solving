#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long int> a;
	    a.push_back(1);
	    a.push_back(1);
	    const unsigned long int m=1000000007;
	    for(long int i=2;i<=(3*n)-1;i++){
	        a.push_back((a[i-2]%m+a[i-1]%m)%m);
	    }
	    cout<<a[(3*n)-1]<<endl;
	}
	return 0;
}
