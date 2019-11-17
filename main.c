#include <stdio.h>
#include "myMath.h"

int main(){
	double ans1 = 0;
	double ans2 = 0;
	printf("Please inset a real number:\n ");
	double x;
	scanf("%lf", &x);
	
// e^x + x^3 -2
	ans1 = Exp((int) x);
	ans2 = Pow(x,3);
	ans2 = add(ans1,ans2);
	ans2 = sub(ans2,2);
	printf("The value of f(x)=e^x+x^3-2 at the point %0.4lf is: %0.4lf\n", x, ans2);

// 3x + 2x^2
	ans1 = mul(x,3);
	ans2 = Pow(x,2);
	ans2 = mul(ans2,2);
	ans2 = add(ans2,ans1);
	printf("The value of f(x)=3x+2x^2 at the point %0.4lf is: %0.4lf\n", x, ans2);

// (4x^3)/5 - 2x
	ans1 = Pow(x,3);
	ans2 = mul(ans1,4);
	ans2 = div(ans2,5);
	ans1 = mul(x,2);
	ans2 = sub(ans2,ans1);
	printf("The value of f(x)=(4x^3)/5-2x at the point %0.4lf is: %0.4lf\n", x, ans2);

	return 0;
}

