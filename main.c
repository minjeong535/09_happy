#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int stu[5];
	int i;
	
	stu[0]=10;
	stu[1]=20;
	stu[2]=30;
	stu[3]=40;
	stu[4]=50;
	
	for (i=0; i<5; i++)
	 printf("stu[%i]=%i\n", i, stu[i]);
	return 0;
}
