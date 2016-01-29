#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc!=3){
		printf("Error\n");
		exit(2);
	}

	printf("argc=%d\n", argc);
	printf("argv[1]=%s\n", argv[1]);
	printf("argv[2]=%d\n", atoi(argv[2]));

	return 0;
}
