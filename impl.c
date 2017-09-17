#include <math.h>
#include "define.h"
#include <string.h>
#include <stdio.h>
float distance(struct point p1, struct point p2){
	float hor_2 = (p1.x-p2.x)*(p1.x-p2.x)+(p1.z-p2.z)*(p1.z-p2.z);
	float hor_1 = sqrt(hor_2);
	float ver = p1.y-p2.y;
	float returnVal=sqrt((hor_1*hor_1)+(ver*ver));
	return returnVal;
}
int strrindex(char s[],char t[]){
	int returnVal=-1;
	int n=strlen(s);
	int m=strlen(t);
	for(int i=0;i<n;i++){
		if(s[i]==t[0]){
			int check=i;
			//printf("%d \n", check);
			for(int j=0;j<m;j++){
				if(s[check]==t[j]){
					check++;
					returnVal=check;
				}else{
					returnVal=-1;
					break;
				}
			}
		}
	}
	if(returnVal>=1){
		returnVal--;
	}
	return returnVal;
}
int is_int(char str[]){
	int returnVal;
	int s=strlen(str);
	if(s==1){
		if((str[0]-'0')>=0&&(str[0]-'0')<=9){return 1;}
		else{return 0;}
	}
	else if(((str[0]-'0')>9 ||(str[0]-'0')<0) &&str[0]!='-'){returnVal=0;}
	else{
		for(int i=1; i<s;i++){
			if((str[i]-'0')>9){
				returnVal=0;
				break;
			}else{
				returnVal=1;
			}
		}
	}
	return returnVal;
}
