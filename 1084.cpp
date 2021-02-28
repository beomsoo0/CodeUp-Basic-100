#include <stdio.h>

int main(){
	int R, G, B;
	scanf("%d %d %d", &R, &G, &B);
	for(int i=0; i<R; i++){
		for(int j=0; j<G; j++){
			for(int k=0; k<B; k++){
				
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
	printf("%d", R*G*B);
	return 0;
}
