#include<iostream>
#include<GL/glut.h>
#include<math.h>
using namespace std;


GLsizei wh=600, ww=800, wx, wy, wx1=800, wy1=600;

int count=0,sub_menu,draw,i,j,k,m,n,pol,flag=0,flag1,fill=0,size=1,save=0;

float a[100][2],b[100][2],textx,texty,textz=0.0,a1=0,a2=0,a3=0,b1=0,b2=0,b3=0,posx,posy;

char* image;

void *currentfont;

FILE *fptr;
char fname[20];
int s=0,wel=0;

void drawstring(float x,float y,float z,char *string);

void setFont(void *font);

void drawpoint(int x, int y);

void paint(int x,int y);

void eraser(int x , int y);

void reset();

void palette(float x1, float y1, float x2, float y2, float x3 , float y3, float x4, float y4);

void draw_pixel(GLfloat x, GLfloat y);

void plotpixels(GLfloat p, GLfloat q, GLfloat x, GLfloat y);

void draw_circle(GLfloat p , GLfloat q , GLfloat r);

void draw_pixel1(GLfloat x, GLfloat y);

void plotpixels1(GLfloat p, GLfloat q, GLfloat x, GLfloat y);

void draw_circle(GLfloat p, GLfloat q,  GLfloat r);

void edgedetect(float x1, float y1, float x2, float y2, int *le, int *re);

void scanfill(GLint num1, GLint num2);

void detect_point(GLint num1, GLint num2, int x, int y);

void display(void);

void keys(unsigned char key, int x, int y);

void myMouse(int btn, int state, int x, int  y);

void myReshape(GLsizei w,GLsizei h);

void point_size(int id);

void right(int id);

int main(int argc, char **argv) {
    image = new char;
    
    glutInit(&argc,argv);
    


}




