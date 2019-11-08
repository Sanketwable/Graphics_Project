#include<iostream>
#include<GL/glut.h>


using namespace std;
int mbar=0;
int constant1=0;
extern int wel;
extern void drawstring(float x,float y,float z,const char *string);
extern void drawCircle(float cx, float cy, float r);
extern void display();


void getpoint(int x, int y) {

        cout<<"x="<<x<<"y="<<y<<endl;
}


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

        if (x<80&&y<45&&x>40&&y>25)
        mbar=1;   //file
        else if (x<145&&y<45&&x>110&&y>25)
        mbar=2;   //edit
        else if (x<204&&y<45&&x>165&&y>25)
        mbar=3;   //view
        else if (x<273&&y<45&&x>230&&y>25) 
        mbar=4;  //for image  */
        else if (x<345&&y<45&&x>300&&y>25)
        mbar=5;    //for color  */
        else if (x<410&&y<45&&x>370&&y>25)
        mbar=6;    //for help   */


        switch(mbar) {
            case 1:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.8,0.8,0.0,"file");
            glFlush();
            break;
            case 2:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.7,0.7,0.0,"edit");
            glFlush();
            break;
            case 3:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.6,0.6,0.0,"view");
            glFlush();
            break;
            case 4:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.5,0.5,0.0,"image");
            glFlush();
            break;
            case 5:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.4,0.4,0.0,"color");
            glFlush();
            break;
            case 6:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.3,0.3,0.0,"help");
            glFlush();
            break;
        }

    
        if (x<58&&x>25&&y<113&&y>82)//line
            draw=1;
        else if (x<89&&x>59&&y>82&&y<113)//triangle
            draw=2;
        else if (x<57&&x>27&&y<152&&y>115)//rectangle
            draw=3;
        else if (x<88&&x>60&&y<152&&y>115)//pencil
            draw=4;
        else if (x>28&&x<57&&y>153&&y<184)//eraser
            draw=5;
        else if (x>60&&x<89&&y<184&&y>153)//circle
            draw=6;
        else if (x>60&&x<89&&y<216&&y>186)//colorfill
            draw=7;
        else if (x>28&&x<58&&y<216&&y>186)//brush
            draw=8;
        


        switch(draw) {
            case 1:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.8,0.8,0.0,"line");
            glFlush();
            break;
            case 2:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.7,0.7,0.0,"triangle");
            glFlush();
            break;
            case 3:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.6,0.6,0.0,"rectangle");
            glFlush();
            break;
            case 4:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.5,0.5,0.0,"pencile");
            glFlush();
            break;
            case 5:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.4,0.4,0.0,"eraser");
            glFlush();
            break;
            case 6:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.3,0.3,0.0,"circle");
            glFlush();
            break;
            case 7:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.2,0.2,0.0,"colorfill");
            glFlush();
            break;
            case 8:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.1,0.1,0.0,"Brush");
            glFlush();

        }
           


    }





}