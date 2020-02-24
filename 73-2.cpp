#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	double a,b,c,d;
	cin>>a>>b;
	cin>>c>>d;
	printf("(%.2lf)+(%.2lf)i\n", a+c, b+d);
	printf("(%.2lf)+(%.2lf)i\n", a-c, b-d);
	printf("(%.2lf)+(%.2lf)i\n", a*c-b*d, b*c+a*d);

	return 0;
}
