#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	   // a=n;
	    int flag=0;
	    vector<int> ar;
	    while(n>0){
	        if(n%10==0 && flag==0){
	            n=n/10;
	        }
	        else{
    	        ar.push_back(n%10);
    	        flag=1;
    	        n=n/10;
	        }
	    }
	    int m=ar.size();
	   // for(int i=m-1;i>=0;i--){
	   //     arr.push_back(ar[i]);
	   // }
	    for(int i=0;i<m;i++){
	        cout<<ar[i];   
	    }
	    cout<<endl;
	}
	return 0;
}
