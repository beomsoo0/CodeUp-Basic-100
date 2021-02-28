#include <stdio.h>

int main(){
	int height, width, n, length, direction, x, y;
	int point[100][100] = {0};
	
	scanf("%d %d\n%d", &height, &width, &n);
	
	for(int k=0; k<n; k++){
		scanf("%d %d %d %d", &length, &direction, &y, &x);
		
		for(int i=0; i<height; i++){
			for(int j=0; j<width; j++){
				if(direction == 0){
					for(int l=0; l<length; l++){
						point[y-1][x-1+l] = 1;
					}
				}
				else{
					for(int l=0; l<length; l++){
						point[y-1+l][x-1] = 1;
					}
				}
			}
		}
	}
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			printf("%d ", point[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
