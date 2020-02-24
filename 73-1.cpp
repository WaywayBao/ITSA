#include<iostream>
#include<algorithm>
using namespace std;

struct S{
	int v;
	int sum;
};
bool cmp(S& a,S& b){
	if(a.sum < b.sum) return true;
	if(a.sum==b.sum && a.v<b.v) return true;
	return false;
}

int main(){
	S s[10];
	int n,v,sum;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>v;
		sum = 0;
		s[i].v = v;
		while(v){
			sum += v%10;
			v /= 10;
		}
		s[i].sum = sum;
	}
	sort(s, s+n, cmp);
	for(int i=0; i<n; ++i){
		cout<<s[i].v;
		if(i != n-1) cout<<" ";
	}
	cout<<endl;
	return 0;
}
