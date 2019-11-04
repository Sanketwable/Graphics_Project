#include<iostream>
#include<GL/glut.h>//glut
#include<math.h>
#include "display.cpp"
#include "variables.cpp"
#include "mouse.cpp"
#include "keyboard.cpp"
#include "draw.cpp"

using namespace std;




FILE *fptr;
char fname[20];



void drawpoint(int x, int y);

void paint(int x,int y);

void eraser(int x , int y);

void reset();











void edgedetect(float x1, float y1, float x2, float y2, int *le, int *re);

void scanfill(GLint num1, GLint num2);

void detect_point(GLint num1, GLint num2, int x, int y);





void myReshape(GLsizei w,GLsizei h);

void point_size(int id);

void right(int id);


void addBackgroundImage() {
  
}

int main(int argc, char **argv) {
    
    image = new char[3*1450*900*sizeof(char)];
    
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1000,800);
    glutCreateWindow("G-Editor --Wable Sanket--Avinash Yadav--Shubhang Bhagat");

    glutDisplayFunc(display);
    glutMouseFunc(myMouse);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return(0);


}
