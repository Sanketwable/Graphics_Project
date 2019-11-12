#include<math.h>
#include<iostream>
#include<GL/glut.h>
#include<GL/freeglut.h>
using namespace std;

extern int xiline,yiline,drawl;
extern int size,Drawx1,Drawx2,Drawy1,Drawy2;
extern float R,G,B;


struct Color {
    float r;
    float g;
    float b;
};
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
        {
            glVertex2f(cx+r*cos(i),cy+r*sin(i));
        }
    glEnd();
}
void drawCircle1(float cx, float cy, float r){

     glColor3f(R,G,B);
     glPointSize(2);
     glBegin(GL_LINE_LOOP);
        for (float i=0.0;i<2*PI;i=i+0.0006)
        {
            if(cx+r*cos(i)<0.975&&cx+r*cos(i)>-0.8&&cy+r*sin(i)<0.875&&cy+r*sin(i)>-0.80)
            glVertex2f(cx+r*cos(i),cy+r*sin(i));
        }
    glEnd();
}


void drawpoint(int x, int y)   
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
void Draw_brush(int x,int y) {
    glColor3f(R,G,B);
    glPointSize(1);
    float x123=x,y123=y;
	if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
    {
        for (int i=0;i<40;i++) {
            j=rand()%15;
            k=rand()%15;
            drawpoint(x+j,y+k);
        }
        glFlush();
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
void Draw_circle(int x, int y) {
    drawpoint(x,y);
    if (drawl==0)
    {
        a1=x;b1=y;drawl++;
    }
    else if (drawl==1)
    {
        float fx1=(x-500)/500.0,fx2=(a1-500)/500.0,fy1=(400-y)/400.0,fy2=(400-b1)/400.0;
        float r=sqrt(pow((fx1-fx2),2)+pow((fy1-fy2),2));
        glColor3f(R,G,B);
         if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
        drawCircle1(fx2,fy2,r);
        reset();

    }
}
void Draw_rectangle(int x,int y) {
    drawpoint(x,y);
    if (drawl==0) {
        a1=x;b1=y;drawl++;
    }
    else if (drawl==1) {
        glColor3f(R,G,B);
        glBegin(GL_LINE_LOOP);
            glVertex2f((a1-500)/500.0,(400-b1)/400.0);
            glVertex2f((x-500)/500.0,(400-b1)/400.0);
            glVertex2f((x-500)/500.0,(400-y)/400.0);
            glVertex2f((a1-500)/500.0,(400-y)/400.0);
        glEnd();
        reset();
    }
    glFlush();
}
void Fill_color(int x, int y, float oldcolor[],float newcolor[]) {

	if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2) {
        glReadPixels(x,y,1,1,GL_RGB,GL_UNSIGNED_BYTE,&newcolor);
        if(newcolor[0] == oldcolor[0] && newcolor[1] == oldcolor[1] && newcolor[2] == oldcolor[2]) {
		
            glColor3f(R,G,B);
	        glBegin(GL_POINT);
	            glVertex2f((500-x)/500.0, (400-y)/400.0);
	        glEnd();
	        glFlush();
		    Fill_color(x+1, y, oldcolor, newcolor);
		    Fill_color(x, y+1, oldcolor, newcolor);
		    Fill_color(x-1, y, oldcolor, newcolor);
		    Fill_color(x, y-1, oldcolor, newcolor);
	    }


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
void brushFunc(int x, int y) {
    if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
        glutMotionFunc(Draw_brush);
}
void circleFunc(int x, int y) {
    if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
    Draw_circle(x,y);
}
void rectangleFunc(int x, int y) {
    if(x>Drawx1&&x<Drawx2&&y>Drawy1&&y<Drawy2)
    Draw_rectangle(x,y);
}
void fillcolorFunc(int x, int y) {
    Color oldcolor;
    Color newcolor;
    glReadPixels(x,y,1,1,GL_RGB,GL_UNSIGNED_BYTE,&oldcolor);
    Fill_color(x,y,&oldcolor,&newcolor);

    


}