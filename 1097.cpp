#include <stdio.h>

int main(){
	int point[19][19] = {0};
	int n, x, y;
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			scanf("%d", &point[i][j]);
		}
	}
	scanf("%d", &n);
	
	for(int k=0; k<n; k++){
		scanf("%d %d", &y, &x);
		for(int j=0; j<19; j++){
			if(point[y-1][j]==0){
				point[y-1][j] = 1;
			}
			else{
				point[y-1][j] = 0;
			}
		}
		for(int i=0; i<19; i++){
			if(point[i][x-1]==0){
				point[i][x-1] = 1;
			}
			else{
				point[i][x-1] = 0;
			}
		}
	}
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			printf("%d ", point[i][j]);
		}
		printf("\n");
	}
	return 0;
}
