#include <stdio.h>

int main(){
	int n, m;
	scanf("%d\n", &n);
	int data[23] = {0};
	for(int i=0; i<n; i++){
		scanf("%d", &m);
		data[m-1] = data[m-1] + 1;
	}
	for(int j=0; j<23; j++){
		printf("%d ", data[j]);
	}
	return 0;
}
