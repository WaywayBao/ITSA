#include<iostream>
#include<algorithm>
#include<cmath>
#define N 1000
using namespace std;
int arr[N][N];
bool boy[N], girl[N];

struct Pair{
	int i;
	int j;
	int v;
};

bool cmp(Pair& a, Pair&b){
	return a.v>b.v;
}

int main(){
	int n;
	cin>>n;
	int m=n*n;
	Pair p[m];
	for(int i=1, s=0; i<=n; ++i)
	for(int j=1; j<=n; ++j){
		cin >> p[s].v;
		p[s].i = i;
		p[s].j = j;
		++s;
	}
	sort(p, p+m, cmp);
	for(int k=1, t=0; t<=m && k<=n; ){
		if(boy[(p[t].i)]||girl[p[t].j]){ ++t; continue;}
		cout<<"boy "<<p[t].i<<" pair with girl "<<p[t].j<<endl;
		boy[(p[t].i)] = true;
		girl[p[t].j] = true;
		++k;
	}
	return 0;
}
