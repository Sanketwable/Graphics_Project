#include<iostream>
#include<GL/glut.h>
#include<GL/freeglut.h>
#include<string.h>
#include<GL/gl.h>
#include "elements.cpp"


using namespace std;

void *currentfont;
extern int wel,wh,constant1;
extern float posx,posy;
extern char *image;



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

void First_page() {

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
    drawstring(-0.9,-0.05,0.0,"Sachin Wattamwar - 185070");
    glColor3f(1,0,0);
    drawstring(0.3,0.3,0.0,"CSE-4yr");
    setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(0.5,0.5,1.0);
    drawstring(-0.5,-0.45,0.0,"Computer Science and Engineering Department");
    drawstring(-0.2,-0.55,0.0,"NIT Hamirpur");
    

    glFlush();

     wel=1;
}



void Second_page() {

    glClearColor(0.1, 0.1, 0.1, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    setFont(GLUT_BITMAP_8_BY_13);
    glColor3f(1.0,1.0,1.0);
    drawstring(-0.2,0.15,0.0,"Under the guidance of");
    setFont(GLUT_BITMAP_HELVETICA_18);
    drawstring(-0.2,0.0,0.0,"Dr. Naveen Chauhan");

    glFlush();
    wel=2;


}


void Third_page() {
    wel=7;
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glDrawBuffer(GL_FRONT);
   // glRasterPos2f(0.0,0.0);
   // glDrawPixels(10,10,GL_RGB,GL_UNSIGNED_BYTE,image);

    

    Elements();

    glFlush();

}

void display() {
   

   First_page();
    
}