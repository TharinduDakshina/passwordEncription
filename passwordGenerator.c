#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

char userPassword [25]; 
char userNewPassword [25];
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
		 //User input password 
		inputPassword();
	
		 //cheack password length
		int length=checkLengthPassword();
		if(length==-1){
			goto L1;
		}
		
		//check password has a number
		if(checkHasNumber(length)!=1){
			printf("\nYour password is invalid. Plece try again..\nPassword is will this type \"Hello4 or hello4\"\n");
			printf("-----------------------------------------------------------------------------------------------------------------\n\n");
			goto L1;
		}else{
				// Encryption method start
			encriptionPassword(length);
				// Print encryted password
			printf("\n%s",userNewPassword);
		}
	}
	return -1;
}
 
void inputPassword(){
	printf("Enter Password : ");
	scanf("%s",&userPassword);
	
}

int checkLengthPassword(){
	int length;
	
	//count array length
	for(length=0;userPassword[length] !='\0';length++);
	
	if(length>=6 && length<=9){
		return length;
	}else{
		printf("\n\nYour enter password is invalide. \n\"Password must be 6 characters and maximum length 9 characters\"\n\n");
		return -1;
	}
}

int checkHasNumber(int length){
	for(i=0;i<length;i++){
		if(userPassword[i]=='0' || userPassword[i]=='1' || userPassword[i]=='2' || userPassword[i]=='3' || 
		userPassword[i]=='4' || userPassword[i]=='5' || userPassword[i]=='6' || userPassword[i]=='7' || userPassword[i]=='8' || userPassword[i]=='9'){
			return 1;
		}

	}
	
}

void encriptionPassword(int length){
		//Add 4 to each digit of the password.
	addFourEachDigit(length);
		//Add the length of the string at the beginning of the password & Add * to the end of the password.
	addingLengthAndStarmark(length);
		//Reverse the password such that it is read backwards.
	passwordReverse();
}

void addFourEachDigit(int length){
	int x=-2;
	for(i=0;i<length;i++){
		switch(userPassword[i]){
			case '0':
				userNewPassword[i]='4';
				break;
			case '1':
				userNewPassword[i]='5';
				break;
			case '2':
				userNewPassword[i]='6';
				break;
			case '3':
				userNewPassword[i]='7';
				break;
			case '4':
				userNewPassword[i]='8';
				break;
			case '5':
				userNewPassword[i]='9';
				break;
			case '6':
				userNewPassword[i]='1';
				userNewPassword[i+1]='0';
				x=6;
				break;
			case '7':
				userNewPassword[i]='1';
				userNewPassword[i+1]='1';
				x=7;
				break;
			case '8':
				userNewPassword[i]='1';
				userNewPassword[i+1]='2';
				x=8;
				break; 
			case '9':
				userNewPassword[i]='1';
				userNewPassword[i+1]='3';
				x=9;
				break;
			default:
				if(x<0){
					userNewPassword[i]=toupper(userPassword[i]);	
				}else{
					userNewPassword[i+1]=toupper(userPassword[i]);
				}
				
		}
	}
}

void addingLengthAndStarmark(int orgLength){
	int length,j;
	for(length=0;userNewPassword[length] !='\0';length++);
	for(i=0,j=1;i<=length;i++,j++){
		userPassword[j]=userNewPassword[i];
	}
	userPassword[0]=orgLength+'0';
	userPassword[length+1]='*';
}

void passwordReverse(){
	int length,j;
	for(length=0;userPassword[length] !='\0';length++);	
	for(i=0,j=length-1;i<length,j>=0;i++,j--){
		userNewPassword[i]=userPassword[j];
	}
}



