#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int MAX, M, N, cnt;
int arr[105][105] = {0};
bool visit[105][105] = {false};

void DFS(int i,int j, int& cur){
	if(i==0 || i>M || j==0 || j>N) return ;
	if(visit[i][j]) return;
	visit[i][j] = true;
	if(arr[i][j] == 0) return ;
	else{
		if (cur == 0) ++cnt;
		cur += arr[i][j];
		if(MAX < cur) MAX = cur;
	}
	DFS(i, j+1, cur);
	DFS(i, j-1, cur);
	DFS(i+1, j, cur);
	DFS(i-1, j, cur);
}

int main(){
	cin>>N>>M;
	for(int i=1; i<=M; ++i)
	for(int j=1; j<=N; ++j)
		cin >> arr[i][j];
	for(int i=1; i<=M; ++i)
	for(int j=1, cur=0; j<=N; ++j,cur=0)
		DFS(i,j,cur);
	cout<< cnt <<"\n"<< MAX <<endl;
	return 0;
}
