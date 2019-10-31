#include<iostream>
#include<GL/glut.h>
#include<GL/freeglut.h>
#include<string.h>
using namespace std;

void *currentfont;
extern int wel,wh;

void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,const char *string) 
{
	const char *c;
	glRasterPos3f(x,y,z);

	for(c=string;*c!='\0';c++)
	{
		glutBitmapCharacter(currentfont,*c);
	}
}

void display() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    if (wel==0||wel==1) {
        glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(0,1,1);
    drawstring(22*wh/45,40*wh/45,0.0,"Welcome to Graphics Editor");

    }
    glFlush();
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

}