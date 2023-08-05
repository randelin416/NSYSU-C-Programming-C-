#include<stdio.h>
#include <math.h> //因為使用pow函數需要此標頭檔 
#define PI 3.14159265358
//計算球體體積並比較其以float與double形式儲存之差別 
int main(void) {
	int r;
	printf("請輸入半徑長度(整數) : ");
	scanf("%d", &r);
	float vf = pow(r, 3)*PI*4/3;   //以float形式儲存  //使用pow函數計算r的三次方 
	double vd = pow(r, 3)*PI*4/3;  //以double形式儲存  //使用pow函數計算r的三次方 
	printf("\n體積f : %.12f\n", vf);
	printf("體積d : %.12lf\n", vd);
	return 0;
}
