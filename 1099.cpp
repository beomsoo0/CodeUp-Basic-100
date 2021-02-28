#include <stdio.h>

int main(){
	int map[10][10] = {0};
	int x_point = 1 , y_point = 1;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			scanf("%d", &map[i][j]);
		}
	}
	while(1){
		if(map[y_point][x_point] == 2){
			map[y_point][x_point] = 9;
			break;
		}
		else if(map[y_point][x_point + 1] == 2){
			map[y_point][x_point] = 9;
			map[y_point][x_point + 1] = 9;
			break;
		}
		else if(map[y_point][x_point + 1] == 0){
			map[y_point][x_point] = 9;
			x_point++;
		}
		else if(map[y_point][x_point + 1] == 1){
			map[y_point][x_point] = 9;
			if(map[y_point + 1][x_point] == 2){
				map[y_point+1][x_point] = 9;
				break;
			}
			else if(map[y_point + 1][x_point] == 0){
				y_point++;
			}
			else if(map[y_point + 1][x_point] == 1){
				break;
			}
		}

	}
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
}
