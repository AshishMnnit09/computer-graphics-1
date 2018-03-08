// to execute
//       gcc midpointellipse.c -lgraph -o a
//       ./a
//    enter point a and b

#include<graphics.h>
#include<stdio.h>
int main()
{
double a,b;
printf("enter a and b");
scanf("%lf%lf",&a,&b);
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
double x=0,y=b;

double fx=0,fy=2*(a*a*b);
double p=(b*b)-(a*a*b)+((a*a)/4);
double c=300;
while(fx<=fy)
{
putpixel(x+c,y+c,RED);
putpixel(-x+c,y+c,RED);
putpixel(x+c,-y+c,RED);
putpixel(-x+c,-y+c,RED);

     x++;
    fx=fx+2*b*b;
    if(p<0)
    p=p+fx+b*b;
 else
{
y--;
fy=fy-2*a*a;
p=p+fx+b*b-fy;
}
delay(50);
}
putpixel(x+c,y+c,RED);

p=b*b*((x+0.5)*(x+0.5))+a*a*((y-1)*(y-1))-(a*a*b*b);
while(y>0)
{
y--;
fy=fy-2*a*a;
if(p>0)
p=p-fy+a*a;
else
{
x++;
fx=fx+2*b*b;
p=p+fx-fy+a*a;
}
putpixel(x+c,y+c,RED);
putpixel(-x+c,y+c,RED);
putpixel(x+c,-y+c,RED);
putpixel(-x+c,-y+c,RED);
delay(50);
}
getch();
}
