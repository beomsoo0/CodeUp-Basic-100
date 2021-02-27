#include <stdio.h>

int main(){
	char chr;
	scanf("%c", &chr);
	for(char i = 'a'; i <= chr; i++){
		printf("%c ", i);
	}
	return 0;
}
