#include<stdio.h>
//make a randon number and play a game to guess the random number
int main(void){
	int a, r = 0;
	srand(time(NULL));
	r = rand() % 10 + 1; //set a  ranndom number
	while(a != r){ //looping until the number is correct
		printf("�п�J�@�ӼƦr�G");
        scanf("%d", &a);
        if(a == r)
            printf("�q��F�I\n");
        else
			printf("�q���F�I\n");
	} 

    
    return 0;
}
