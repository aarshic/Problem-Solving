using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++){
	       cin>>a[i]; 
	    }
	    int flag=0;
	    for(int k=0;k<n*n;++k){
	        int i=k/n;
	        int j=k%n;
	        if(j>i){
	            if(a[i]+a[j]==x){
	                flag=1;
	                break;
	            }
            }
	    }
	    if(flag==1){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
