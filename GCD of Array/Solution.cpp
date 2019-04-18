using namespace std;

int gcdab(int a,int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;
    if(a>b)
        return gcdab(a-b,b);
    return gcdab(a,b-a);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int gcd=arr[0];
	    if(n==1){
	        gcd=arr[0];
	    }
	    else{
    	    for(int i=0;i<n-1;i++){
    	        gcd = gcdab(gcd,arr[i+1]);
    	        if(gcd==1){
    	            break;
    	        }
    	       // cout<<"gcd["<<i<<"] = "<<gcd<<endl;
    	    }
	    }
	    cout<<gcd<<endl;
	}
	return 0;
}
