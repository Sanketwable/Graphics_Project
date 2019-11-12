#include<iostream>
#include<GL/glut.h>


using namespace std;
int mbar=0,draw1=0;
int constant1=0;
extern int wel;
extern void drawstring(float x,float y,float z,const char *string);
extern void drawCircle(float cx, float cy, float r);
extern void display();
extern void pencilFunc(int x, int y);
extern void lineFunc(int x, int y);
extern void eraserFunc(int x,int y);
extern void triangleFunc(int x,int y);
extern void brushFunc(int x, int y);
extern void circleFunc(int x, int y);
extern void rectangleFunc(int x, int y);
extern void fillcolorFunc(int x, int y);
extern float R,G,B;
extern int xiline,yiline,drawl;



void clearFunc() {
    //drawstring(0.0,0.0,0.0,"Sanket");
    glScissor(105,84,880,665);
    glEnable(GL_SCISSOR_TEST);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

 void showcolorincolorbar() {

    glColor3f(R,G,B);
    palette(-0.92,-0.90,-0.87,-0.90,-0.87,-0.85,-0.92,-0.85);
 }

void getpoints(int x, int y) {

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

        if (x<125&&x>101&&y<748&&y>730)//color 1
            draw1=1;
        else if (x<153&&x>130&&y>727&&y<745)//color 2
            draw1=2;
        else if (x<185&&x>161&&y<748&&y>729)//color 3
            draw1=3;
        else if (x<215&&x>189&&y<747&&y>728)//color 4
            draw1=4;
        else if (x>221&&x<243&&y>728&&y<746)//color 5
            draw1=5;
        else if (x>251&&x<275&&y<747&&y>729)//color 6
            draw1=6;
        else if (x>281&&x<305&&y<748&&y>728)//color 7
            draw1=7;
        else if (x>312&&x<336&&y<748&&y>729)//color 8
            draw1=8;
        else if (x<125&&x>101&&y<773&&y>753)//color 11
            draw1=9;
        else if (x<154&&x>131&&y>753&&y<770)//color 22
            draw1=10;
        else if (x<184&&x>162&&y<771&&y>753)//color 33
            draw1=11;
        else if (x<215&&x>191&&y<772&&y>752)//color 44
            draw1=12;
        else if (x>221&&x<244&&y>752&&y<772)//color 55
            draw1=13;
        else if (x>252&&x<275&&y<772&&y>753)//color 66
            draw1=14;
        else if (x>282&&x<305&&y<772&&y>752)//color 77
            draw1=15;
        else if (x>310&&x<335&&y<771&&y>752)//color 88
            draw1=16;

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


        if (x>906&&x<964&&y>728&&y<744)
            clearFunc();

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

    
       
        


        switch(draw) {
            case 1:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.8,0.8,0.0,"line");
            lineFunc(x,y);
            glFlush();
            break;
            case 2:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.7,0.7,0.0,"triangle");
            triangleFunc(x,y);
            glFlush();
            break;
            case 3:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.6,0.6,0.0,"rectangle");
            rectangleFunc(x,y);
            glFlush();
            break;
            case 4:
            glColor3f(0.0,0.0,0.0);
            glPointSize(5);
            drawstring(0.5,0.5,0.0,"pencile");
            pencilFunc(x,y);
            glFlush();
            break;
            case 5:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.4,0.4,0.0,"eraser");
            eraserFunc(x,y);
            glFlush();
            break;
            case 6:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.3,0.3,0.0,"circle");
            circleFunc(x,y);
            glFlush();
            break;
            case 7:
            glColor3f(0.0,0.0,0.0);
            fillcolorFunc(x,y);
            drawstring(0.2,0.2,0.0,"colorfill");
            glFlush();
            break;
            case 8:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.1,0.1,0.0,"Brush");
            brushFunc(x,y);
            glFlush();

        }


        switch(draw1) {

            case 1:
            glColor3f(0.0,0.0,1.0);
            drawstring(0.8,0.8,0.0,"color1");
            R=0.0;G=0.0;B=1;
            showcolorincolorbar();
            glFlush();
            break;
            case 2:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.7,0.7,0.0,"color2");
            R=0.0;G=1.0;B=1;
            showcolorincolorbar();
            glFlush();
            break;
            case 3:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.6,0.6,0.0,"color3");
            R=1.0;G=0.0;B=1;
            showcolorincolorbar();
            glFlush();
            break;
            case 4:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.5,0.5,0.0,"color4");
            R=0.5;G=0.5;B=1;
            showcolorincolorbar();
            glFlush();
            break;
            case 5:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.4,0.4,0.0,"color5");
            R=0.5;G=1;B=0.5;
            showcolorincolorbar();
            glFlush();
            break;
            case 6:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.3,0.3,0.0,"color6");
            R=0.9;G=0.2;B=0.3;
            showcolorincolorbar();
            glFlush();
            break;
            case 7:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.2,0.2,0.0,"color7");
            R=0.4;G=0.4;B=0.4;
            showcolorincolorbar();
            glFlush();
            break;
            case 8:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.1,0.1,0.0,"color8");
            R=0.0;G=0;B=0;
            showcolorincolorbar();
            glFlush();
            break;
            case 9:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.8,0.8,0.0,"color9");
            R=0.5;G=0.5;B=0.5;
            showcolorincolorbar();
            glFlush();
            break;
            case 10:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.7,0.7,0.0,"color10");
            R=1;G=1;B=1;
            showcolorincolorbar();
            glFlush();
            break;
            case 11:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.6,0.6,0.0,"color11");
            R=0.4;G=0.6;B=0.8;
            showcolorincolorbar();
            glFlush();
            break;
            case 12:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.5,0.5,0.0,"color12");
            R=0.8;G=0.6;B=0.4;
            showcolorincolorbar();
            glFlush();
            break;
            case 13:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.4,0.4,0.0,"color13");
            R=1;G=0.5;B=1;
            showcolorincolorbar();
            glFlush();
            break;
            case 14:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.3,0.3,0.0,"color14");
            R=0.9;G=0.7;B=0.1;
            showcolorincolorbar();
            glFlush();
            break;
            case 15:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.2,0.2,0.0,"color15");
            R=0.6;G=0.2;B=0.9;
            showcolorincolorbar();
            glFlush();
            break;
            case 16:
            glColor3f(0.0,0.0,0.0);
            drawstring(0.1,0.1,0.0,"color17");
            R=0.1;G=0.9;B=0.4;
            showcolorincolorbar();
            glFlush();
        }
           


    }
   //glutMotionFunc(getpoints);






}