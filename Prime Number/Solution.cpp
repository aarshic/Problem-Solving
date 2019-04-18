#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;
	    cin>>n;
	    for(int i=2;i<n;i++){
	        if(n%i==0){
	            flag=1;
	        }
	    }
	    if(flag==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
