#include <stdio.h>

int main() {
	char data[2000];
	scanf("%s", data);
for(int i = 0; data[i] != NULL; i++){
		printf("'%c'\n",data[i]);
	}
	return 0;
}
