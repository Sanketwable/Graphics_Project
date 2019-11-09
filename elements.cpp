#define PI 3.14
#include<iostream>
#include<math.h>
#include<GL/glut.h>

using namespace std;

extern void setFont(void *font);
extern void drawstring(float x,float y,float z,const char *string);
extern void drawCircle(float cx, float cy, float r);

extern int wh, ww, wx, wy, wx1, wy1;



void palette(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) /* to draw the COLOR PALETTE */
{
	glBegin(GL_QUADS);
		glVertex2f(x1, y1);
		glVertex2f(x2, y2);
		glVertex2f(x3, y3);
		glVertex2f(x4, y4);
	glEnd();
}



void Elements() {
    wx=wx1;
    wy=wy1;
    

    glColor3f(0.85,0.93,1.0);//blue line
    glPointSize(1);
    glLineWidth(1);
    glRectf(-1.0,-1.0,-0.98,1.0);
    glRectf(0.98,-1.0,1.0,1.0);
    glRectf(-1.0,-0.96,1.0,-1.0);
    glRectf(-1.0,0.95,1.0,1.0);

    setFont(GLUT_BITMAP_HELVETICA_12);//writing g-edit
    glColor3f(0.0,0.0,0.0);
    drawstring(-0.1,0.967,0.0,"G-Editor");

    setFont(GLUT_BITMAP_HELVETICA_10);//bottom link for github
    glColor3f(0.0,0.0,0.0);
    drawstring(-0.97,-0.989,0.0,"For more information ask at https://github.com/Sanketwable/Graphics_Project/issues ");

    glColor3f(0.90, 0.90, 0.90);//grey color for left and bottom
    glRectf(-0.98, -0.96, -0.8,0.94);
    glRectf(-0.8, -0.96, 0.98, -0.8); 

    glColor3f(0.80, 0.81, 0.80); //grey color for upper
    glRectf(-0.98,0.95,0.98,0.88);  

    glColor3f(0.45,0.45,0.45);//black-grey line border inside editor
    glRectf(-0.8,-0.8,-0.79,0.88);
    glRectf(-0.8,-0.8,0.98,0.-0.79);  
    glColor3f(0.25,0.25,0.25);
    glRectf(-0.8,0.88,0.98,0.87);
    glColor3f(0.55,0.55,0.55);
    glRectf(0.97,0.88,0.98,-0.80);   

    glColor3f(0.0,0.0,0.0);//file dit view image color help
    setFont(GLUT_BITMAP_9_BY_15);
    drawstring(-0.91,0.90,0.0,"FILE");
    drawstring(-0.78,0.90,0.0,"EDIT"); 
    drawstring(-0.67,0.90,0.0,"VIEW"); 
    drawstring(-0.54,0.90,0.0,"IMAGE"); 
    drawstring(-0.40,0.90,0.0,"COLOR"); 
    drawstring(-0.26 ,0.90,0.0,"HELP");  

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2f(-0.95,0.8);   //white color to toolbar
        glVertex2f(-0.95,-0.2);
    glEnd();
    glColor3f(0.99,0.99,0.99);
    glBegin(GL_LINES);
        glVertex2f(-0.82,0.8);
        glVertex2f(-0.82,-0.2);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2f(-0.82,0.8);
        glVertex2f(-0.95,0.8);
    glEnd();
    glColor3f(0.99,0.99,0.99);
    glBegin(GL_LINES);
        glVertex2f(-0.82,-0.2);
        glVertex2f(-0.95,-0.2);
    glEnd();


    glColor3f(0.85, 0.85, 0.85); //box down to tools
    glRectf(-0.82,-0.30,-0.95,-0.5); 

    glColor3f(0.24, 0.24, 0.24);
    glBegin(GL_LINES);
        glVertex2f(-0.95,-0.3);
        glVertex2f(-0.95,-0.5);
    glEnd();

     glBegin(GL_LINES);
        glVertex2f(-0.95,-0.3);
        glVertex2f(-0.82,-0.3);
    glEnd();


      glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_LINES);
        glVertex2f(-0.82,-0.3);
        glVertex2f(-0.82,-0.5);
    glEnd();

     glBegin(GL_LINES);
        glVertex2f(-0.95,-0.5);
        glVertex2f(-0.82,-0.5);
    glEnd();

//for colors i.e colors
    glColor3f(0,0,1);
    palette(-0.8,-0.87,-0.75,-0.87,-0.75,-0.82,-0.8,-0.82);//1
    glColor3f(0,1,1);
    palette(-0.74,-0.87,-0.69,-0.87,-0.69,-0.82,-0.74,-0.82);//2
     glColor3f(1,0,1);
    palette(-0.68,-0.87,-0.63,-0.87,-0.63,-0.82,-0.68,-0.82);//3
     glColor3f(0.5,0.5,1);
    palette(-0.62,-0.87,-0.57,-0.87,-0.57,-0.82,-0.62,-0.82);//4
     glColor3f(0.5,1,0.5);
    palette(-0.56,-0.87,-0.51,-0.87,-0.51,-0.82,-0.56,-0.82);//5
     glColor3f(0.9,0.2,0.3);
    palette(-0.50,-0.87,-0.45,-0.87,-0.45,-0.82,-0.50,-0.82);//6
     glColor3f(0.4,0.4,0.4);
    palette(-0.44,-0.87,-0.39,-0.87,-0.39,-0.82,-0.44,-0.82);//7
     glColor3f(0,0,0);
    palette(-0.38,-0.87,-0.33,-0.87,-0.33,-0.82,-0.38,-0.82);//8


    glColor3f(0.5,0.5,0.5);
    palette(-0.8,-0.93,-0.75,-0.93,-0.75,-0.88,-0.8,-0.88);//11
    glColor3f(1,1,1);
    palette(-0.74,-0.93,-0.69,-0.93,-0.69,-0.88,-0.74,-0.88);//22
     glColor3f(0.4,0.6,0.8);
    palette(-0.68,-0.93,-0.63,-0.93,-0.63,-0.88,-0.68,-0.88);//33
     glColor3f(0.8,0.6,0.4);
    palette(-0.62,-0.93,-0.57,-0.93,-0.57,-0.88,-0.62,-0.88);//44
     glColor3f(1,0.5,1);
    palette(-0.56,-0.93,-0.51,-0.93,-0.51,-0.88,-0.56,-0.88);//55
     glColor3f(0.9,0.7,0.1);
    palette(-0.50,-0.93,-0.45,-0.93,-0.45,-0.88,-0.50,-0.88);//66
     glColor3f(0.6,0.2,0.9);
    palette(-0.44,-0.93,-0.39,-0.93,-0.39,-0.88,-0.44,-0.88);//77
     glColor3f(0.1,0.9,0.4);
    palette(-0.38,-0.93,-0.33,-0.93,-0.33,-0.88,-0.38,-0.88);//8.8



    glColor3f(0.85, 0.85, 0.85); //current color in color bar
    glRectf(-0.85,-0.83,-0.94,-0.92); 

    glColor3f(0.24, 0.24, 0.24);
    glBegin(GL_LINES);
        glVertex2f(-0.94,-0.83);
        glVertex2f(-0.94,-0.92);
    glEnd();

     glBegin(GL_LINES);
        glVertex2f(-0.85,-0.83);
        glVertex2f(-0.94,-0.83);
    glEnd();


      glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
        glVertex2f(-0.85,-0.83);
        glVertex2f(-0.85,-0.92);
    glEnd();

     glBegin(GL_LINES);
        glVertex2f(-0.94,-0.92);
        glVertex2f(-0.85,-0.92);
    glEnd();

   
        glColor3f(0.0,0.0,0.0);
        palette(-0.92,-0.90,-0.87,-0.90,-0.87,-0.85,-0.92,-0.85);
    


    //Drawing elements in tool bar eg,pen, pencil,triangle,eraser...etc


    glColor3f(0.0,0.0,0.0);   //line
    glBegin(GL_LINES);
        glVertex2f(-0.90,0.79);
        glVertex2f(-0.94,0.73);
    glEnd();
    
    glBegin(GL_LINE_LOOP);    //triangle
        glVertex2f(-0.87,0.73);
        glVertex2f(-0.83,0.73);
        glVertex2f(-0.85,0.79);
    glEnd();

    glBegin(GL_LINE_LOOP);                          /* RECTANGLE OPTION */
		glVertex2f(-0.94,0.70);
		glVertex2f(-0.90,0.70);
		glVertex2f(-0.90,0.64);
		glVertex2f(-0.94,0.64);
	glEnd();

    glBegin(GL_TRIANGLES);                          /*PENCIL OPTION*/
		glVertex2f(-0.87,0.64);
		glVertex2f(-0.85,0.64);
		glVertex2f(-0.87,0.66);
	glEnd();

	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.85,0.64);
		glVertex2f(-0.83,0.68);
		glVertex2f(-0.85,0.70);
		glVertex2f(-0.87,0.66);
	glEnd();

    glColor3f(1, 1, 1);
	glBegin(GL_QUADS);                              /* ERASER*/
		glVertex2f(-0.94,0.60);
		glVertex2f(-0.90,0.60);
		glVertex2f(-0.90,0.56);
		glVertex2f(-0.94,0.56);
	glEnd();

    glColor3f(0.0, 0.0, 0.0);
   
    drawCircle(-0.8534,0.5785,0.022);//draw circle in tool bar

    glBegin(GL_POINTS);       //draw dot-dot brush
        double j=0,k=0;
        for (int i=0;i<50;i++) {
            j=rand()%15;
            k=rand()%15;
            glVertex2f(-0.937+j/400,0.485+k/400);
        }
        glEnd();

    glColor3f(0.1, 0.7, 0.8);
	glBegin(GL_QUADS);                               /* to draw COLOUR FILL OPTION on tool bar */
		glVertex2f(-0.849,0.479);
		glVertex2f(-0.8289,0.496);
		glVertex2f(-0.849,0.524);
		glVertex2f(-0.870,0.507);
	glEnd();

	glColor3f(0.9, 0.3, 1);
    glPointSize(4);
	glBegin(GL_POINTS);
		glVertex2f(-0.871,0.50);
	glEnd();

    glColor3f(0.9, 0.3, 1);
    glPointSize(2);
	glBegin(GL_POINTS);
		glVertex2f(-0.87,0.488);
	glEnd();

    glColor3f(0.9, 0.3, 1);
    glPointSize(1);
	glBegin(GL_POINTS);
		glVertex2f(-0.87,0.479);
	glEnd();
   glPointSize(1);
   glColor3f(0.0,0.0,0.0);   
    glBegin(GL_LINES);
        glVertex2f(-0.870,0.507);
        glVertex2f(-0.84,0.52);
    glEnd();

    


   
   




   glColor3f(1,1,1);
    glBegin(GL_LINES);
        glVertex2f(-0.885,0.799);   
        glVertex2f(-0.885,0.44);
    glEnd();

    glColor3f(0.7,0.7,0.7);
    glBegin(GL_LINES);
        glVertex2f(-0.882,0.799);   
        glVertex2f(-0.882,0.44);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_LINES);
        glVertex2f(-0.949,0.719);   
        glVertex2f(-0.82,0.719);
    glEnd();

    glColor3f(0.7,0.7,0.7);
    glBegin(GL_LINES);
        glVertex2f(-0.949,0.714);   
        glVertex2f(-0.82,0.714);
    glEnd();

     glColor3f(1,1,1);
    glBegin(GL_LINES);
        glVertex2f(-0.949,0.62);   
        glVertex2f(-0.82,0.62);
    glEnd();

    glColor3f(0.7,0.7,0.7);
    glBegin(GL_LINES);
        glVertex2f(-0.949,0.618);   
        glVertex2f(-0.82,0.618);
    glEnd();


  glColor3f(1,1,1);
    glBegin(GL_LINES);
        glVertex2f(-0.949,0.54);   
        glVertex2f(-0.82,0.54);
    glEnd();

    glColor3f(0.7,0.7,0.7);
    glBegin(GL_LINES);
        glVertex2f(-0.949,0.538);   
        glVertex2f(-0.82,0.538);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINES);
        glVertex2f(-0.949,0.46);   
        glVertex2f(-0.82,0.46);
    glEnd();

    glColor3f(0.7,0.7,0.7);
    glBegin(GL_LINES);
        glVertex2f(-0.949,0.458);   
        glVertex2f(-0.82,0.458);
    glEnd();

    glColor3f(1,1,1);
    palette(0.93,-0.82,0.81,-0.82,0.81,-0.86,0.93,-0.86);
    glFlush();
   
    glColor3f(0,0,0);
    drawstring(0.83,-0.855,0.0,"Clear");
     glColor3f(1,0.0,0.0);
    drawstring(0.835,-0.855,0.0,"Clear");
     glColor3f(1,0.1,0.1);
    drawstring(0.833,-0.855,0.0,"Clear");
    glFlush();




}