#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f",a+b, a-b, a*b, a/b, a%b, float(a)/float(b));
	return 0;
}
