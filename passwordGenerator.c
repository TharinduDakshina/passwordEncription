#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char userFirstPassword [25]; 

void inputPassword();
int checkLengthPassword();

int main(){
L1:	{
		
		inputPassword();
	
		printf("%s",userFirstPassword);
	
		int length=checkLengthPassword();
		if(length==-1){
			goto L1;
		}
			
	}
	
	
	
	return -1;
}

void inputPassword(){
	printf("Enter Password : ");
	scanf("%s",&userFirstPassword);
	
}

int checkLengthPassword(){
	int length;
	
	//count array length
	for(length=0;userFirstPassword[length];length++);
	//printf("\n%d",length);
	
	if(length>=6 && length<=9){
		return length;
	}else{
		printf("\n\nYour enter password is invalide. \n\"Password must be 6 characters and maximum length 9 characters\"\n\n");
		return -1;
	}
}
