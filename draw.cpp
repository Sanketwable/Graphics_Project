#include<math.h>
#include<iostream>
#include<GL/glut.h>
#include<GL/freeglut.h>
using namespace std;






void drawCircle(float cx, float cy, float r){

     glBegin(GL_LINE_LOOP);
        for (float i=0.0;i<2*PI;i=i+0.0006)
            glVertex2f(cx+r*cos(i),cy+r*sin(i));
    glEnd();
}
