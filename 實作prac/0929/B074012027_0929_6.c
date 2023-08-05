#include<stdio.h>
//輸入ADUQ隻大小寫字母時顯示不同功能 以外則顯示錯誤 
int main(void){
	char a;
	printf("請輸入一個字元 : ");
	scanf("%c", &a);
	
	switch(a){
		case 'A':
		case 'a':
			printf("進入新增\n");
			break;
		case 'D':
		case 'd':
			printf("進入刪除\n");
			break;
		case 'U':
		case 'u':
			printf("進入修改\n");
			break;
		case 'Q':
		case 'q':
			printf("離開系統\n");
			break;
		default:
			printf("沒有這個選項！\n");
	}
	return 0;
}
