#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long int fact=1;
	    cin>>n;
	    if(n==0){
	        cout<<fact<<endl;
	    }
	    else{
    	    for(int i=1;i<=n;i++){
    	        fact=fact*i;
            }
            cout<<fact<<endl;
	    }
	}
	return 0;
}
