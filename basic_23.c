#include<stdio.h>
#include<stdlib.h>

int main(void){
	
		FILE *fptr;
		char ch;
		fptr=fopen("C:\\Users\\user\\Desktop\\data.txt","r");
		if(fptr!=NULL){
			while((ch=getc(fptr))!=EOF){  //bug�X�{���a�� 
				
				printf("%c", ch);
			}
			fclose(fptr);
		}
		else{
			printf("�ɮ׶}�ҥ���");
		}
		
		system("pause");
		return 0;
} 
