#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char usertPassword [25]; 
int i;

void inputPassword();
int checkLengthPassword();
int checkHasNumber();

int main(){
L1:	{
		
		inputPassword();
	
		printf("%s",usertPassword);
	
		int length=checkLengthPassword();
		if(length==-1){
			goto L1;
		}
		
		if(checkHasNumber(length)==-1){
			printf("\nYour password is invalid. Plece try again..\nPassword is will this type \"Hello4 or hello4\"");
		}
			
	}
	
	
	
	return -1;
}

void inputPassword(){
	printf("Enter Password : ");
	scanf("%s",&usertPassword);
	
}

int checkLengthPassword(){
	int length;
	
	//count array length
	for(length=0;usertPassword[length] !='\0';length++);
	printf("\n%d",length);
	
	if(length>=6 && length<=9){
		return length;
	}else{
		printf("\n\nYour enter password is invalide. \n\"Password must be 6 characters and maximum length 9 characters\"\n\n");
		return -1;
	}
}

int checkHasNumber(int length){
	int count=-2;
	for(i=0;i<length;i++){
		switch(usertPassword[i]){
			case 0:
				printf("%d",0);
				count=1;
				break;
			case 1:
				printf("%d",1);
				count=1;
				break;
			case 2:
				printf("%d",2);
				count=1;
				break;
			case 3:
				printf("%d",3);
				count=1;
				break;
			case 4:
				printf("%d",4);
				count=1;
				break;
			case 5:
				printf("%d",5);
				count=1;
				break;
			case 6:
				printf("%d",6);
				count=1;
				break;
			case 7:
				printf("%d",7);
				count=1;
				break;
			case 8:
				printf("%d",8);
				count=1;
				break;
			case 9:
				printf("%d",9);
				count=1;
				break;
			default:
				count=-1;
		}
	}
	return count;
}










