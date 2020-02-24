#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int number[10] = {12,5,12,12,10,15,10,8,13,10};

int main(){
	int t;
	cin>>t;
	while(t--){
		int arr[5][5] = {};
		int cnt=0;
		for(int i=0;i<5;++i)
		for(int j=0;j<5;++j){
			cin>>arr[i][j];
			if(arr[i][j] == 1) ++cnt;
		}
		int inner=arr[1][1]+arr[1][2]+arr[1][3]+arr[2][1]+arr[2][3]
			+arr[3][1]+arr[3][2]+arr[3][3];
		if(cnt == 10){
			if(inner==4) cout<<4<<endl;
			else if((arr[2][1]+arr[2][3]+arr[1][2]+arr[3][2])%3==0) cout<<6<<endl;
			else cout<<9<<endl;
		}else if(cnt == 12){
			if(arr[2][2] == 1) cout<<3<<endl;
			else if(inner == 2) cout<<2<<endl;
			else cout<<0<<endl;
		}else{
			for(int i=0;i<10;++i)
				if(cnt == number[i]) cout<<i<<endl;
		}
	}
	return 0;
}
