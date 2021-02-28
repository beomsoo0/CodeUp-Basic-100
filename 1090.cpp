#include <stdio.h>
#include <math.h>

int main(){
	int a, r, n;
	long long int result;
	scanf("%d %d %d", &a, &r, &n);
	result = a * pow(double(r), double(n-1));
	printf("%lld", result);
	return 0;
}
