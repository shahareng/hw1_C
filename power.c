#include "myMath.h"
#define e 2.7182

double Pow(double x, int y){
	double ans = 1;
	int minus = 0;
	int i = 0;
	if(x<0){
		x = mul(x,-1);
		minus = -1;
	}
	while(i<y){
		ans = ans*x;
		i++;
	}
	if(minus == -1){
		ans = 1/ans;
	}	
	return ans;
}

double Exp(int x){
	return Pow(e,x);
}

