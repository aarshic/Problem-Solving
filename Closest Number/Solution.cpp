#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int distp=1,distn=1,p=0,o=0;
	    if(m<0){
	        m=m*-1;
	    }
	    for(int i=n;i<n+m;i++){
	        if(i%m==0){
	            distp=i;
	            p++;
	            break;
	        }
	        p++;
	    }
	    for(int j=n;j>n-m;j--){
	        if(j%m==0){
	            distn=j;
	            o++;
	            break;
	        }
	        o++;
	    }
	    int da=distp,db=distn;
	    if(distp<0){
	        da=distp*-1;
	    }
	    if(distn<0){
	        db=distn*-1;
	    }
	    if(p==o){
	        if(da>db){
	            cout<<distp<<endl;
	        }
	        else{
	            cout<<distn<<endl;
	        }
	    }
	    else if(p>o)
	        cout<<distn<<endl;
	    else
	        cout<<distp<<endl;
	}
	return 0;
}
