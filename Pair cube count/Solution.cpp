using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    for(int a=1;a<=n;a++){
	        for(int b=0;b<=n;b++){
	            int a3=a*a*a;
	            int b3=b*b*b;
	            if((a3+b3)==n){
	                count++;   
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
