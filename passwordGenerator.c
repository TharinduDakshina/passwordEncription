#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

char usertPassword [25]; 
char usertNewPassword [25];
int i;

void inputPassword();
int checkLengthPassword();
int checkHasNumber(int length);
void encriptionPassword(int length);
void addFourEachDigit(int length);
void addingLengthAndStarmark(int orgLength);
void passwordReverse();

int main(){
L1:	{
		
		inputPassword();
	
		 //cheack password length
		int length=checkLengthPassword();
		if(length==-1){
			goto L1;
		}
		
		//check password has a number
		if(checkHasNumber(length)==-1){
			printf("\nYour password is invalid. Plece try again..\nPassword is will this type \"Hello4 or hello4\"");
		}
		
		encriptionPassword(length);
		
		printf("\n--> %s",usertNewPassword);
		
		
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
			case '0':
				return 1;
				break;
			case '1':
				return 1;
				break;
			case '2':
				return 1;
				break;
			case '3':
				return 1;
				break;
			case '4':
				return 1;
				break;
			case '5':
				return 1;
				break;
			case '6':
				return 1;
				break;
			case '7':
				return 1;
				break;
			case '8':
				return 1;
				break; 
			case '9':
				return 1;
				break;
			default:
				break;
		}
	}
	
}

void encriptionPassword(int length){
	addFourEachDigit(length);
	addingLengthAndStarmark(length);
	passwordReverse();
}

void addFourEachDigit(int length){
	int x=-2;
	for(i=0;i<length;i++){
		switch(usertPassword[i]){
			case '0':
				usertNewPassword[i]='4';
				break;
			case '1':
				usertNewPassword[i]='5';
				break;
			case '2':
				usertNewPassword[i]='6';
				break;
			case '3':
				usertNewPassword[i]='7';
				break;
			case '4':
				usertNewPassword[i]='8';
				break;
			case '5':
				usertNewPassword[i]='9';
				break;
			case '6':
				usertNewPassword[i]='1';
				usertNewPassword[i+1]='0';
				x=6;
				break;
			case '7':
				usertNewPassword[i]='1';
				usertNewPassword[i+1]='1';
				break;
			case '8':
				usertNewPassword[i]='1';
				usertNewPassword[i+1]='2';
				break; 
			case '9':
				usertNewPassword[i]='1';
				usertNewPassword[i+1]='3';
				break;
			default:
				if(x<0){
					usertNewPassword[i]=toupper(usertPassword[i]);	
				}else{
					usertNewPassword[i+1]=toupper(usertPassword[i]);
				}
				
		}
	}
}

void addingLengthAndStarmark(int orgLength){
	int length,j;
	for(length=0;usertNewPassword[length] !='\0';length++);
	for(i=0,j=1;i<=length;i++,j++){
		usertPassword[j]=usertNewPassword[i];
	}
	usertPassword[0]=orgLength+'0';
	usertPassword[length+1]='*';
}

void passwordReverse(){
	int length,j;
	for(length=0;usertPassword[length] !='\0';length++);	
	for(i=0,j=length-1;i<length,j>=0;i++,j--){
		usertNewPassword[i]=usertPassword[j];
	}
}



