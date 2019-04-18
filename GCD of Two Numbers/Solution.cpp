#include <bits/stdc++.h>
using namespace std;

int minval(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    vector<int> ma,mb;
	    int min=minval(a,b);
	    for(int i=1;i<=min;i++){
	        if(a%i==0){
	            ma.push_back(i);
	        }
	        if(b%i==0){
	            mb.push_back(i);
	        }
	    }
	   // for(int i=0;i<ma.size();i++){
	   //      cout<<"ma["<<i<<"]="<<ma[i]<<endl;
	   // }
	   // for(int i=0;i<mb.size();i++){
	   //      cout<<"mb["<<i<<"]="<<mb[i]<<endl;
	   // }
	    int flag=0,res=1;
	   // int minab=minval(na,nb);
	    for(int i=ma.size()-1;i>=0;i--){
	        for(int j=mb.size()-1;j>=0;j--){
	            if(ma[i]==mb[j]){
	               // cout<<"ma["<<i<<"]="<<ma[i]<<endl;
	               // cout<<"mb["<<j<<"]="<<mb[j]<<endl;
	                flag=1;
	                res=ma[i];
	               // cout<<"res = "<<ma[i]<<endl;
	                break;
	            }
	        }
	        if(flag==1){
	            break;
	        }
	    }
	   // if(flag==1){
        cout<<res<<endl;
	   // }
	   // else{
	       // cout<<"1"<<endl;
	   // }
	}
	return 0;
}
