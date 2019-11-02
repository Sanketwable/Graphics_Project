#include<iostream>
#include<GL/glut.h>


using namespace std;

int constant1=0;
extern int wel;


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

    }





}