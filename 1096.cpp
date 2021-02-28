#include <stdio.h>

int main(){
	int n,x,y;
	scanf("%d", &n);
	int point[19][19] = {0};
	for(int i=0; i<n; i++){
		scanf("%d %d", &x, &y);
		point[x-1][y-1] = 1;
	}
	for(int height=0; height<19; height++){
		for(int width=0; width<19; width++){
			printf("%d ", point[height][width]);
		}
		printf("\n");
	}
	return 0;
}
