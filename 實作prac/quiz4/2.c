#include "stdio.h"
#include "stdlib.h"
#include "time.h"

struct Student{
	//�Ǹ��B���Z�}�C�B�������Z�]double�^
	int id;
	int scores[3];
	double average;
};

void calculate(struct Student *student){
	// �p�⥭�����Z	
	int a, b, c;
	a = student -> scores[0];
	b = student -> scores[1];
	c = student -> scores[2];
	student -> average = (a + b + c) / 3;
}

int main(void){
	srand(time(NULL));
	struct Student array[10];
	int index, scoreIndex;
	for(index=0;index<10;index++){
		array[index].id = index+100;
		for(scoreIndex=0;scoreIndex<3;scoreIndex++){
			array[index].scores[scoreIndex] = rand()%100;
		}
		array[index].average = 0;
	}
	for(index=0;index<10;index++){
		calculate(&array[index]);
	}
	for(index=0;index<10;index++){
		// �L�X�������Z 
		printf("�Ǹ� %d ���������Z�� %.2lf\n",array[index].id,array[index].average);
	}
	puts("");
}
