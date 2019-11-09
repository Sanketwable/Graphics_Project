#include<iostream>
#include<GL/glut.h>



GLsizei wh=600, ww=800, wx, wy, wx1=800, wy1=600;

int count=0,sub_menu,draw,i,j,k,m,n,pol,flag=0,flag1,fill=0,size=1,save=0,s=0,wel=0,file,edit,view,imagemenu,sub_menu2,color,help;

float a[100][2],b[100][2],textx,texty,textz=0.0,a1=0,a2=0,a3=0,b1=0,b2=0,b3=0,posx,posy;

char* image;

float R=0.0,G=0.0,B=0.0;

int Drawx1=107,Drawx2=984,Drawy1=55,Drawy2=715;

int xiline=300,yiline=300,drawl=0;

