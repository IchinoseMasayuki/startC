#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mydice(int x){
	time_t ti;
	time(&ti);
	srand(ti);
	return (rand()%x+1);
}