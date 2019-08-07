#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void drawCircle(int x1, int y1,int r){
     int angle=0,x,y;
     int xc=x1/2,yc=y1/2;
     while(angle<360){
         x=cos(angle)*r;
         y=sin(angle)*r;
         if(x>0){
            x=xc+x;
         }
         else{
            x=xc+x;
         }
         if(y>0){
            y=yc+y;
         }
         else{
            y=yc+y;
         }
         putpixel(x,y,15);
         angle++;
     }
}
void main(){
     int gd=DETECT,gm;
     int x,y;
     clrscr();
     initgraph(&gd,&gm,"C:\\TC\\BGI");
     drawCircle(10,20,10);
     getch();
     closegraph();
}

/*
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void translate(int *x,int *y, int xcord, int ycord){
     int MAXX=xcord,MAXY=ycord;
     int xc=MAXX/2,yc=MAXY/2;
     if(*x>0){
	 *x=xc+(*x);
     }
     else{
	 *x=xc+(*x);
     }
     if(*y>0){
	 *y=yc+(*y);
     }
     else{
	 *y=yc+(*y);
     }
     line(xc,0,xc,MAXY);
     line(0,yc,MAXX,yc);
}
void drawCircle(int x1, int y1,int r){
     int angle=0,x,y,c=0,i=0;
     int xc=x1/2,yc=y1/2;
     randomize();
     while(angle<1000){
	 x=cos(angle)*r;
	 y=sin(angle)*r;
	 if(x>0){
	    x=xc+x;
	 }
	 else{
	    x=xc+x;
	 }
	 if(y>0){
	    y=yc+y;
	 }
	 else{
	    y=yc+y;
	 }
	 if(angle>90 && c==0){
	     r+=15;
	     c++;
	 }
	 if(angle>360 && i==0){
	    r-=30;
	    i++;
	 }
	 putpixel(x,y,random(16));
	 setcolor(random(16));
	 circle(x,y,3);
	 angle++;
	 delay(20);
     }
}
void main(){
     int gd=DETECT,gm;
     int x,y;
     clrscr();
     initgraph(&gd,&gm,"C:\\TC\\BGI");
     drawCircle(500,400,150);
     setcolor(3);
     settextstyle(3,0,2);
     outtextxy(140,140,"Happy FriendShip Day");
     setcolor(14);
     outtextxy(140,180,"To All My Dear Friends");
     setcolor(5);
     outtextxy(140,230,"   - Shitij Agrawal");
     getch();
     closegraph();
}
*/
