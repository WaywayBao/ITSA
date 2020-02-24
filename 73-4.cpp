#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int m,n,k;
	cin>>m;
	while(m--){
		cin>>n>>k;
		int gcd=0;
		int* arr=new int[n+1]();
		for(int i=1;i<=n;++i){
			cin>>arr[i];
			while((gcd%=arr[i]) && (arr[i]%=gcd));
			gcd = gcd+arr[i];
		}
		if(k%gcd==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
