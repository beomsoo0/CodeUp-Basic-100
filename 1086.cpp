#include <stdio.h>

int main(){
	long long int R, G, B;
	scanf("%lld %lld %lld", &R, &G, &B);
	double result = R * G * B;
	printf("%.2lf MB", result/(1024*1024*8));
	return 0;
}
