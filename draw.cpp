#include<math.h>
#include<iostream>
#include<GL/glut.h>
#include<GL/freeglut.h>
using namespace std;

extern int xiline,yiline,drawl;
extern int size,Drawx1,Drawx2,Drawy1,Drawy2;
extern float R,G,B;


void reset() {
    xiline=0;
    yiline=0;
    drawl=0;
    a1=0;b1=0;a2=0;b2=0;a3=0;b3=0;
}
void drawCircle(float cx, float cy, float r){

     glColor3f(R,G,B);
     glPointSize(2);
     glBegin(GL_LINE_LOOP);
        for (float i=0.0;i<2*PI;i=i+0.0006)
            glVertex2f(cx+r*cos(i),cy+r*sin(i));
    glEnd();
}


void drawpoint(int x, int y)        /* to draw point */
{
    glColor3f(R,G,B);
    glPointSize(2);
	if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
    {
        glBegin(GL_POINTS);
        glVertex2f((x-500)/500.0,(400-y)/400.0);
        glEnd();
        glFlush();
    }
}

void Draw_line(int x, int y) {
        glColor3f(R,G,B);
        glPointSize(2);
        if(drawl==0) {
            xiline=x;yiline=y;
            drawl=1;
            glBegin(GL_POINTS);
                glVertex2f((xiline-500)/500.0,(400-yiline)/400.0);
            glEnd();
            glFlush();
        }
        else
        {
            if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
            {
                drawpoint(x,y);
                glBegin(GL_LINES);
                glVertex2f((xiline-500)/500.0,(400-yiline)/400.0);
                glVertex2f((x-500)/500.0,(400-y)/400.0);
                glEnd();
                glFlush();
                reset();
            }
        }
}


void Draw_eraser(int x, int y) {

    glPointSize(14);
    if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
    {
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POINTS);
        glVertex2f((x-500)/500.0,(400-y)/400.0);
        glEnd();
        glFlush();
    }

}
void Draw_triangle(int x,int y) {
    glColor3f(R,G,B);
    glPointSize(1);
    drawpoint(x,y);
    if (drawl==0){
        a1=x;b1=y;
        drawl++;
    }
    else if (drawl==1) {
        a2=x;b2=y;
        drawl++;
    }
    else if (drawl==2) {
        a3=x;b3=y;
        drawl++;
    }
    if (drawl==3) {
        glLineWidth(2);
						glBegin(GL_LINE_LOOP);
							glVertex2f((a3-500)/500.0, (400-b3)/400.0);
							glVertex2f((a2-500)/500.0, (400-b2)/400.0);
							glVertex2f((a1-500)/500.0, (400-b1)/400.0);
						glEnd();
						reset();
    }
}
void pencilFunc(int x , int y) {

	if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
glutMotionFunc(drawpoint);

}
void lineFunc(int x, int y) {
    if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
    Draw_line(x,y);

}
void eraserFunc(int x,int y) {
    if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
    glutMotionFunc(Draw_eraser);
}
void triangleFunc(int x,int y) {
    if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
    Draw_triangle(x,y);
}