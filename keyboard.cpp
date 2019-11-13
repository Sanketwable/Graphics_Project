#include<iostream>
#include<GL/glut.h>
using namespace std;



extern int wel;
extern void drawCircle(float cx, float cy, float r);


void keyboard(unsigned char key,int x, int y ) {
    
    
    
      switch(key) {
            case ' ':
            display();
            break;
            case 'c':
            drawCircle(0.0,0.0,0.2);
            break;
        }

}