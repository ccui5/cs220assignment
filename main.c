#include "define.h"
#include <stdio.h>
int main(){
	while(1){
	struct point p1;
	struct point p2;
	printf("please input p1 x,,y,z:");
	scanf("%f",&p1.x);
	scanf("%f",&p1.y);
	scanf("%f",&p1.z);
	printf("please input p2 x,y,z: ");
	scanf("%f",&p2.x);
	scanf("%f",&p2.y);
	scanf("%f",&p2.z);
	printf("so the distance is: %f",distance(p1,p2));
	char str[255];
	char init[255];
	char ifNum[255];
	char com;
	char s;
	printf("please enter a string S: ");
	scanf("%s",&str);
	printf("please enter a string T: ");
	scanf("%s",&init);
	printf("so the index of the last char is : %d \n",strrindex(str,init));
	printf("please input a num and i will check if you listen to me: ");
	scanf("%s",&ifNum);
	printf("%d \n",is_int(ifNum));

	printf("type q to quit, else again: ");
	scanf("%s",&com);
	if(com == 'q')return 0;
	}
	return 0;
}
