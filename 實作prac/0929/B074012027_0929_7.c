#include<stdio.h>
//��J�@�G����ন�^�� 
int main(void){
	//��J�@�G��� ����Q���a1�P�Ӧ��a2 
	int a1, a2;
	printf("�п�J�@�ӤG��� : ");
	scanf("%1d%1d", &a1, &a2);
	
	//�Y�Q��Ƭ�1 �]��10~19�^��զX���P 
	if(a1<2){
	    switch(a2){
	    	case 0:
	    		printf("ten\n");
	    		break;
	    	case 1:
	    		printf("eleven\n");
	    		break;
	    	case 2:
	    		printf("twelve\n");
	    		break;
	    	case 3:
	    		printf("thirteen\n");
	    		break;
	    	case 4:
	    		printf("fourteen\n");
	    		break;
	    	case 5:
	    		printf("fifteen\n");
	    		break;
	    	case 6:
	    		printf("sixteen\n");
	    		break;
	    	case 7:
	    		printf("seventeen\n");
	    		break;
	    	case 8:
	    		printf("eighteen\n");
	    		break;
	    	case 9:
	    		printf("nineteen\n");
	    		break;
		}
	}
	//�Y�G��Ƭ�20~99 �h�^��զX�� : �Q���-�Ӧ�� 
	else{
		//�ݤQ��Ƭ�2~9�� 
		switch(a1){
	    	case 2:
	    		printf("twenty");
	    		break;
	    	case 3:
	    		printf("thirty");
	    		break;
	    	case 4:
	    		printf("forty");
	    		break;
	    	case 5:
	    		printf("fifty");
	    		break;
	    	case 6:
	    		printf("sixty");
	    		break;
	    	case 7:
	    		printf("seventy");
	    		break;
	    	case 8:
	    		printf("eighty");
	    		break;
	    	case 9:
	    		printf("ninety");
	    		break;
		}
		//�f�t�Ӧ�Ƭ�1~9 
		switch(a2){
			case 0:
				printf("\n");
				break;
	    	case 1:
	    		printf("-one\n");
	    		break;
	    	case 2:
	    		printf("-two\n");
	    		break;
	    	case 3:
	    		printf("-three\n");
	    		break;
	    	case 4:
	    		printf("-four\n");
	    		break;
	    	case 5:
	    		printf("-five\n");
	    		break;
	    	case 6:
	    		printf("-six\n");
	    		break;
	    	case 7:
	    		printf("-seven\n");
	    		break;
	    	case 8:
	    		printf("-eight\n");
	    		break;
	    	case 9:
	    		printf("-nine\n");
	    		break;
		}
	}
	return 0;
}
