#include <stdio.h>

int main(){
	int a, m, d, n;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	long long int result = a;
	for(int i=2; i<=n; i++){
		result *= m;
		result += d;
	}
	printf("%lld", result); 
	return 0;
}
