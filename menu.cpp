#include<iostream>
#include<GL/glut.h>
#include<GL/freeglut.h>

using namespace std;

// creating menu

extern int sub_menu,file,edit,view,imagemenu,color,help,sub_menu2,size;



void point_size(int id) /* to CHANGE THE PIXEL SIZE */
{




	switch(id)
	 {
		case 1:size++;
			break;

		case 2:if(size>1)
				size--;
				break;
	 }



}

void right(int id) /* to QUIT the editor */
{

		if(id==2)
		exit(0);
}

void menu() {
sub_menu=glutCreateMenu(point_size);
glutAddMenuEntry("increase",1);
glutAddMenuEntry("decrease",2);

glutCreateMenu(right);
glutAddSubMenu("Point size",sub_menu);
glutAddMenuEntry("Quit",2);
glutAttachMenu(GLUT_RIGHT_BUTTON);


}