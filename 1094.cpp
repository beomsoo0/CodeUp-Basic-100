#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int data[10000] = {0};
	for(int i=0; i<n; i++){
		scanf("%d", &data[i]);
	}
	for(int j=0; j<n; j++){
		printf("%d ", data[n-1-j]);
	}
	return 0;
}
