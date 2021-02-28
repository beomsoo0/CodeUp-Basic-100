#include <stdio.h>

int main(){
	int x;
	int i = 1;
	int sum=0;
	scanf("%d", &x);
	while(sum<x){
		sum += i;
		i++;
	}
	printf("%d", sum);
	return 0;
}
