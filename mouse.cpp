#include<iostream>
#include<GL/glut.h>


using namespace std;

int constant1=0;
extern int wel;
extern void drawstring(float x,float y,float z,const char *string);
extern void drawCircle(float cx, float cy, float r);
extern void display();


void myMouse(int button, int state, int x, int  y) {

    GLfloat r,r1,r2;
    int num1=0,num2=0;

    int i1, ii2;
    int flag2;


    if (button==GLUT_LEFT_BUTTON && state==GLUT_DOWN) {

        if (wel==1)
        Second_page();
        else if (wel==2)
        Third_page();

        glColor3f(0.0,0.0,0.0);
        /* if (x<80&&y<45&&x>40&&y>25)     for file   */
        /*if (x<145&&y<45&&x>110&&y>25)    for edit   */
        /*if (x<204&&y<45&&x>165&&y>25)    for view   */
        /* if (x<273&&y<45&&x>230&&y>25)   for image  */
        /*if (x<345&&y<45&&x>300&&y>25)    for color  */
        /*if (x<410&&y<45&&x>370&&y>25)    for help   */
           if (x<410&&y<45&&x>370&&y>25)
           {drawCircle(0.0,0.0,0.3);
        glFlush();}


    }





}