#include <stdio.h>
#include <string.h>

int main(){
	printf("Enter the password: ");
	char pass[21];
	if(scanf("%20s", pass) <= 0){
		printf("scanf failed\n");
		return 1;
	}
	if(strncmp("superSecretPassword", pass, 21) == 0){
		printf("You're in.\n");
	} else {
		printf("Access Denied!\n");
	}
	return 0;
}
