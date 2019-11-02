#include<iostream>
#include<GL/glut.h>


using namespace std;



void myMouse(int btn, int state, int x, int  y) {

    GLfloat r,r1,r2;
    int num1=0,num2=0;

    int i1, ii2;
    int flag2;


    if (btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN) {
        if (wel==1) {
            wel=2;
            display();
        }
    }




}