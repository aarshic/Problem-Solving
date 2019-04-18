#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    vector<int> a;
	    cin>>n;
	    int b=n;
	    while(n>0){
	        a.push_back(n%10);
	        n=n/10;
	    }
	    int sum=0;
	    for(int j=0;j<a.size();j++){
	        sum=sum+(a[j]*a[j]*a[j]);
	    }
	    if(sum==b){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
