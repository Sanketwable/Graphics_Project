#include<math.h>
#include<iostream>
#include<GL/glut.h>
#include<GL/freeglut.h>
using namespace std;






void drawCircle(float cx, float cy, float r, int num_segments)
{
glBegin(GL_LINE_LOOP);
for(int ii = 0; ii < num_segments; ii++)
{
float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

float x = r * cosf(theta);//calculate the x component
float y = r * sinf(theta);//calculate the y component

glVertex2f(x + cx, y + cy);//output vertex

}
glEnd();
}
