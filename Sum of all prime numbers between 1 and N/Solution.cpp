using namespace std;

int main() {
	//code
	long int t; cin>>t;
	while(t--)
	{
	    long int n,sum=0; cin>>n;
	    long int a[n+1]={0};
	    for(long int i=2; i<=n; i++)
	    {
	        if(a[i]==0) { long int k=i; sum=sum+i;
	            while((k*i) <= n){
	                a[k*i] = 1;
	                k++;
	            }
	        }   
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
