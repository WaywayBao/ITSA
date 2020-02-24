#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int h1, h2;
	double degree_h, degree_s, degree;
	cin >> h1 >> h2;
	for(int i=h1; i<h2; ++i){
		for(int j=0; j<60; ++j){
			degree_h = (i%12)*30;
			degree_h += j/2.0;
			degree_s = j*6;
			degree = abs(degree_h - degree_s);
			if(degree>180) degree = 360 - degree;
			if(degree>=88 && degree<=92)
				printf("%02d:%02d degree=%.2lf\n",i, j,degree);
		}
	}
	if(h2%12==3 || h2%12==9)
		printf("%02d:%02d degree=%2.2lf\n",h2, 0, 90.00);

	return 0;
}
