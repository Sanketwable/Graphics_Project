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
    drawstring(-0.17,0.8,0.0,"Graphics Editor");
    setFont(GLUT_BITMAP_TIMES_ROMAN_10);
    drawstring(-0.05,0.75,0.0,"by");
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1,1,1);
    drawstring(-0.9,0.4,0.0,"Wable Sanket - 185088");
    drawstring(-0.9,0.25,0.0,"Avinash Yadav - 185058");
    drawstring(-0.9,0.1,0.0,"Shubhang Bhagat - 185060");
    setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(0.5,0.5,1.0);
    drawstring(-0.5,-0.2,0.0,"Computer Science and Engineering Department");
    drawstring(-0.2,-0.3,0.0,"NIT Hamirpur");
    glColor3f(1.0,1.0,1.0);
    drawstring(0.4,-0.65,0.0,"Under the guidance of");
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(0.4,-0.8,0.0,"Dr. Naveen Chauhan");
    }
    glFlush();
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

}