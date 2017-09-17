#ifndef DEFINITION_H
#define DEFINITION_H
struct point{

	float x;
	float y;
	float z;
};
float distance(struct point p1, struct point p2);
int strrindex(char s[],char t[]);
int is_int(char str[]);
#endif
