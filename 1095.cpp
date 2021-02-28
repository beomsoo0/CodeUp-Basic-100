#include <stdio.h>

int main(){
	int n, m;
	scanf("%d", &n);
	int min = 23;
	for(int i=0; i<n; i++){
		scanf("%d", &m);
		if(m < min){
			min = m;
		}
	}
	printf("%d", min);
	return 0;
}
