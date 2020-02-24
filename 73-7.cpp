#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int cnt = 0;
int t,n,k,i,j;

void DFS(int i, int j, bool arr[][101],bool visit[][101]){
	if(i==0||j==0||i>n||j>n) return ;
	if(visit[i][j]) return ;
	visit[i][j]=true;
	if(arr[i][j]) return ;
	else ++cnt;
	DFS(i,j+1,arr,visit);
	DFS(i,j-1,arr,visit);
	DFS(i+1,j,arr,visit);
	DFS(i-1,j,arr,visit);
}

int main(){
	cin>>t;
	while(t--){
		bool arr[101][101]={};
		bool visit[101][101]={};
		cin>>n>>k;
		while(k--){
			cin>>i>>j;
			arr[i][j]=true;
		}
		cin>>i>>j;
		cnt=0;
		DFS(i,j,arr,visit);
		cout<<cnt<<endl;
	}
	return 0;
}
