#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//01
	int a,b,c,y;
	int x,z,m;
	a=1;
	b=3;
	c=4;
	x=5;
	z=6;
	y= a*x*x+b*x+c;
	m=(x+y+z)/3;
	printf("y:%d, m=%d",y,m);
	
	//02
	int x=3;
	int cond1,cond2;
	cond1 = 2<x&&x<5;
	cond2 = x>1||x<4&&x>3;
	printf("cond1=%d,cond2=%d"cond1,cond2);
	
    //03
	int x,y;
	
	printf("enter 2 integars : ");
	scanf("%d %d",&x,&y);
	printf("x+y=%i\n",x+y);
	printf("x-y=%i\n",x-y);
	printf("x*y=%i\n",x*y);
	printf("x/y=%i\n",x/y);
	printf("x%y=%i\n",x%y);
	return 0;
}
