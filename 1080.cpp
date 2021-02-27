#include <stdio.h>

int main(){
	int n;
	int m = 0;
	int sum = 0;
	scanf("%d", &n);
	while(sum<n){
		m++;
		sum += m;
	}
	printf("%d",m);
	return 0;
}
