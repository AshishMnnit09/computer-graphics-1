// to execute
//       gcc shaktimaan.c -lgraph -o a
//       ./a
//    enter a and b for ellipse and radius for circle
// radius should be greater then b


#include<graphics.h>
#include<stdio.h>
int main()
{
	double radius,pi;
	double x,y;
	 double a,b;
	printf("enter a and b");
	scanf("%lf%lf",&a,&b);
	printf("enter radius");
	scanf("%lf",&radius);
	int gd=DETECT,gm;
 	initgraph(&gd,&gm,NULL);
 	pi=1-radius;
 	x=0;
 	y=radius;
 	double aa=250;
 while(x<=y)
 {
 	putpixel(x+aa,y+aa,RED);
 	putpixel(-x+aa,y+aa,RED);
 	putpixel(x+aa,-y+aa,RED);
 	putpixel(-x+aa,-y+aa,RED);
     
     putpixel(y+aa,x+aa,RED);
     putpixel(y+aa,-x+aa,RED);
 	putpixel(-y+aa,x+aa,RED);
 	putpixel(-y+aa,-x+aa,RED);
     
      
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
 }
 
x=0,y=b;
double fx=0,fy=2*(a*a*b);
double p=(b*b)-(a*a*b)+((a*a)/4);
double c=250;
double l=30;
while(fx<=fy)
{
	putpixel(x+c,y+c+l,RED);
	putpixel(-x+c,y+c+l,RED);
	putpixel(x+c,-y+c+l,RED);
	putpixel(-x+c,-y+c+l,RED);
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

//putpixel(x+c,y+c+l,RED);
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
 	     delay(50);
	     putpixel(x+c,y+c+l,RED);
	     putpixel(-x+c,y+c+l,RED);
	     putpixel(x+c,-y+c+l,RED);
	     putpixel(-x+c,-y+c+l,RED);

      }
          getch(); 
          return 0;     
}
