#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	for(int i=1; i<=x; i++){
		if(i%3!=0){
			printf("%d ", i);
		}
	}
	return 0;
}
