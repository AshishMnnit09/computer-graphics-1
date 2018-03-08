// to execute
//       gcc midpointcircle.c -lgraph -o a
//       ./a
//    enter radius
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{

double radius,pi;
double x,y;
printf("Enter radius");
scanf("%lf",&radius);

int gd=DETECT,gm;
 
 initgraph(&gd,&gm,NULL);
 pi=1-radius;
 x=0;
 y=radius;
 double a=250;
 
 while(x<=y)
 {
 	putpixel(x+a,y+a,RED);
 	putpixel(-x+a,y+a,RED);
 	putpixel(x+a,-y+a,RED);
 	putpixel(-x+a,-y+a,RED);
     
     putpixel(y+a,x+a,RED);
     putpixel(y+a,-x+a,RED);
 	putpixel(-y+a,x+a,RED);
 	putpixel(-y+a,-x+a,RED);
     
      
 	if(pi<0)
	 {
 	pi=pi+2*(x+1)+1;
 	x=x+1;
 	}
 	else
 	{
       pi=pi+2*(x+1)+1-2*(y-1);
       x=x+1;
       y=y-1;
      }
delay(50);
fflush(stdout);
 }

getch(); 
return 0;
}
