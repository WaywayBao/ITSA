#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	while(n--){
		long long arr[1000]={};
		cin>>m;
		for(int i=0;i<m;++i)
			cin>>arr[i];
		sort(arr, arr+m, greater<int>());
		int max= arr[0],sum = 0;
		for(int i=0;i<m;++i){
			if(arr[i]==max) sum += (int)(arr[i]*0.4+0.5);
			else {
				int rate = ((double)i/m + 0.0099999)*100;
				if(rate<=10) sum+= (int)(arr[i]*0.4+0.5);
				else if(rate>10&&rate<=30) sum+= (int)(arr[i]*0.3+0.5);
				else if(rate>30&&rate<=60) sum+= (int)(arr[i]*0.2+0.5);
				else if(rate>60&&rate<=80) sum+= (int)(arr[i]*0.1+0.5);
			}
		}
		cout<<int(sum+0.5)<<endl;
	}
	return 0;
}
