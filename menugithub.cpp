#include <GL/gl.h>		
#include <GL/glut.h>
#include <GL/glu.h>
#include<stdio.h>

int i=0;
int drop_new=0, drop_open =0;		//drop down flag
int menu_drop=0,edit_drop=0;

void print_edit(float r, float g, float b)
{
	if(edit_drop)					//blue color for hovering
	{
		r=0.7;
		g=0.7;
		b=0.7;
	}
	glColor3f(r,g,b);	
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-150,200);
		glVertex2i(-50,200);
		glVertex2i(-50,250);
		glVertex2i(-150,250);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);			//creating layout 
		glVertex2i(-50,200);
		glVertex2i(250,200);
		glVertex2i(250,250);
		glVertex2i(-50,250);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	
	glRasterPos2i(-140,210);			//set position to top corner to print EDIT
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'D');	
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'I');
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'T');
		
	glColor3f(0.0,0.0,0.0);	
	glBegin(GL_LINES);
		glVertex2i(-150,250);
		glVertex2i(-150,200);
		glColor3f(0.3,0.3,0.3);	
		glVertex2i(-150,200);
		glVertex2i(-150,0);
	glEnd();		
	glFlush();

}
void print_undo(float r, float g, float b)
{
	glColor3f(r,g,b);
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-150,200);
		glVertex2i(-50,200);
		glVertex2i(-50,150);
		glVertex2i(-150,150);
	glEnd();
		
	glColor3f(0.0,0.0,0.0);
	
	glRasterPos2i(-140,160);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'U');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'N');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'D');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');	
			
	glFlush();	
}
void print_redo(float r, float g, float b)
{
	glColor3f(r,g,b);
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-150,150);
		glVertex2i(-50,150);
		glVertex2i(-50,100);
		glVertex2i(-150,100);
	glEnd();
		
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-250,200);
		glVertex2i(-250,0);
		glVertex2i(-150,0);
		glVertex2i(-150,200);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glRasterPos2i(-140,110);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'D');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');		
			
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(-150,150);		glVertex2i(-50,150);
		glVertex2i(-50,200);		glVertex2i(-150,200);
	glEnd();		
				
	
	glFlush();
}
void print_file(float r, float g, float b)
{
	if(menu_drop)	
	{
		r=0.7;
		g=0.7;
		b=0.7;
	}
	glColor3f(r,g,b);
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-250,200);
		glVertex2i(-150,200);
		glVertex2i(-150,250);
		glVertex2i(-250,250);
	glEnd();
		
	glColor3f(0.0,0.0,0.0);
	
	glRasterPos2i(-240,210);			//set position to top corner to print FILE
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'F');
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'I');	
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'L');
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(-150,250);
		glVertex2i(-150,200);
	glEnd();	
}

void print_new(float r, float g, float b)
{
	glColor3f(r,g,b);
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-250,200);
		glVertex2i(-150,200);
		glVertex2i(-150,150);
		glVertex2i(-250,150);
	glEnd();
		
	glColor3f(0.0,0.0,0.0);
	
	glRasterPos2i(-240,160);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'N');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'W');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,' ');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'>');
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(-150,200);
		glVertex2i(-50,200);
	glEnd();	
}

void print_open(float r, float g, float b)
{
	glColor3f(r,g,b);
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-250,100);
		glVertex2i(-150,100);
		glVertex2i(-150,150);
		glVertex2i(-250,150);
	glEnd();
		
	glColor3f(0.0,0.0,0.0);
	
	glRasterPos2i(-240,110);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'P');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'N');		
}

void print_save(float r, float g, float b)
{
	glColor3f(r,g,b);
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-250,100);
		glVertex2i(-150,100);
		glVertex2i(-150,50);
		glVertex2i(-250,50);
	glEnd();
		
	glColor3f(0.0,0.0,0.0);
	
	glRasterPos2i(-240,60);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'S');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'A');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'V');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');		
}

void print_exit(float r, float g, float b)
{
	glColor3f(r,g,b);
	glBegin(GL_POLYGON);			//creating layout for Menu
		glVertex2i(-250,0);
		glVertex2i(-150,0);
		glVertex2i(-150,50);
		glVertex2i(-250,50);
	glEnd();
	glBegin(GL_POLYGON);			//creating layout for Menu	
		glColor3f(0.3,0.3,0.3);
		glVertex2i(-150,200);
		glVertex2i(-50,200);
		glVertex2i(-50,150);
		glVertex2i(-150,150);
		
		glVertex2i(-150,200);
		glVertex2i(-50,200);
		glVertex2i(-50,150);
		glVertex2i(-150,150);
	glEnd();
		
	glColor3f(0.0,0.0,0.0);
	
	glRasterPos2i(-240,10);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'X');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'I');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');	
			
	glBegin(GL_LINES);
					glVertex2i(-250,150);		glVertex2i(-150,150);
					glVertex2i(-250,100);		glVertex2i(-150,100);
					glVertex2i(-250,50);		glVertex2i(-150,50);
					glVertex2i(-150,250);		glVertex2i(-150,0);
					
					glVertex2i(-150,250);
					glVertex2i(-150,200);
		glEnd();
}

void myinit(void)
{
  glClearColor(0.3, 0.3, 0.3, 0.0); /* gray background */
 
  glMatrixMode(GL_PROJECTION);      /* In World coordinates: */
  glLoadIdentity();                 /* position the "clipping rectangle" */
  gluOrtho2D( -250, 250, -250, 250);/* at -B/2, its right edge at +B/2, its bottom */
  glMatrixMode(GL_MODELVIEW);       /* edge at -B/2 and its top edge at +B/2 */
}

void display( void )
{

	glClear(GL_COLOR_BUFFER_BIT);     /* clear the window */
	glMatrixMode(GL_MODELVIEW);       /* The following coordinates are expressed */
	glLoadIdentity();

	glClearColor(0.3, 0.3, 0.3, 0.0); /* gray background */
	
	print_file(1.0,1.0,1.0);	
	print_edit(1.0,1.0,1.0);
	glFlush();                       
}  

void clearSubNew()		//for clearing submenus New
{
		print_file(1.0,1.0,1.0);		
		glColor3f(0.3,0.3,0.3);		//background color
		glBegin(GL_POLYGON);			//creating layout for Menu
			glVertex2i(-150,200);
			glVertex2i(-150,0);
			glVertex2i(-50,0);
			glVertex2i(-50,200);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(-150,250);
		glVertex2i(-150,200);
	glEnd();	
	glFlush();	
}

void clearSubSave()		//for clearing submenus New
{
		print_file(1.0,1.0,1.0);		
		glColor3f(0.3,0.3,0.3);		//background color
		glBegin(GL_POLYGON);			//creating layout for Menu
			glVertex2i(-150,200);
			glVertex2i(-150,50);
			glVertex2i(-50,50);
			glVertex2i(-50,200);
		glEnd();
	glFlush();	
}

void clearSubOpen()		//for clearing submenus New
{
		print_file(1.0,1.0,1.0);		
		glColor3f(0.3,0.3,0.3);		//background color
		
		glBegin(GL_POLYGON);			//creating layout for Menu
			glVertex2i(-150,50);
			glVertex2i(-150,0);
			glVertex2i(-50,0);
			glVertex2i(-50,50);
		glEnd();
		
		glBegin(GL_POLYGON);			//creating layout for Menu
			glVertex2i(-150,200);
			glVertex2i(-150,150);
			glVertex2i(-50,150);
			glVertex2i(-50,200);
		glEnd();
	glFlush();	
}


void print_subNew()
{
     glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);			//creating layout for Menu
        glVertex2i(-150,200);
		glVertex2i(-50,200);
		glVertex2i(-50,100);
		glVertex2i(-150,100);
		glEnd();  
		
     glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
					glVertex2i(-150,150);		glVertex2i(-50,150);
					glVertex2i(-150,200);		glVertex2i(-150,100);
		glEnd();
	
		glRasterPos2i(-140,160);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'F');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'I');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'L');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
			
		glRasterPos2i(-140,110);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'P');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'J');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'C');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');

     glFlush(); 
}

void mouse_func(GLint button, GLint state, GLint x, GLint y)
{
	x+= -250; y= 250-y;
	//printf("Position %d %d\n",x,y);
if(!state)
{
	if((x>=-250 && x<=-150) && (y>=200 && y<=250) && !menu_drop)
	{
        edit_drop=0;
        menu_drop=1;
		print_file(0.3,0.3,0.3);
	
		print_new(1.0,1.0,1.0);
		print_open(1.0,1.0,1.0);
		print_save(1.0,1.0,1.0);
		print_exit(1.0,1.0,1.0);
		
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
			glVertex2i(-250,150);		glVertex2i(-150,150);
			glVertex2i(-250,100);		glVertex2i(-150,100);
			glVertex2i(-250,50);		glVertex2i(-150,50);
			glVertex2i(-150,250);
			glVertex2i(-150,200);
		glEnd();
		glFlush();
	}
	else if((x>=-150 && x<=-50) && (y>=200 && y<=250) && !edit_drop)	//EDIT
	{
		print_edit(0.7,0.7,0.7);
		print_redo(1.0,1.0,1.0);
		print_undo(1.0,1.0,1.0);	
        menu_drop = 0;
        edit_drop=1;
        glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
			glVertex2i(-150,150);		glVertex2i(-50,150);
			glVertex2i(-50,200);		glVertex2i(-150,200);
		glEnd();		
		glFlush();
	}
	else if((x>=-250 && x<=-150) && (y>=150 && y<=200) && menu_drop==1)
    {
    	// New submenu
    	 clearSubNew();
         print_subNew();
         glFlush();     
    }
    else if((x>=-250 && x<=-150) && (y>=100 && y<=150) && menu_drop==1)
    {
    	// Open Submenu
       if(state==0)
       {
       	  printf("\nOpen \n");   
		  glutInitWindowSize( 500, 500 );       /* A x A pixel screen window  */
		  glutInitWindowPosition( -1000, -200 );
		  glutInitDisplayMode( GLUT_RGB | GLUT_SINGLE);
		  glutCreateWindow("Open Menu"); /* window title                   */
		  glutDisplayFunc(display);
	  }
		    
	}	
    else if((x>=-250 && x<=-150) && (y>=50 && y<=100) && menu_drop==1)
    {
    	// Save
    	 clearSubSave();
    	 if(state==0)
        	 printf("\nSave \n");   
         glFlush();     
    }
    else if((x>=-250 && x<=-150) && (y>=0 && y<=50) && menu_drop==1)
    {
    	// Exit
    	 clearSubSave();
    	 if(state==0)
         	printf("\nExit \n");   
         exit(0);
         glFlush();     
    }
    else if((x>=-150 && x<=-50) && (y>=150 && y<=200) && menu_drop==1 && drop_new ==1)
    {
    	// New > File submenu
    	if(state==0)
    	{
    	 	printf("\nNew -> File\n");    
    	}
    }
    else if((x>=-150 && x<=-50) && (y>=100 && y<=150) && menu_drop==1 && drop_new ==1)
    {
    	// New > Project submenu
    	// New > File submenu
    	if(state==0)
    	{
    	 	printf("\nNew -> Project\n");    
       	}
    }
    else if((x>=-150 && x<=-50) && (y>=150 && y<=200) && edit_drop==1 && state==0)
    {
		print_undo(0.3,0.3,0.7);
		print_redo(1.0,1.0,1.0);
		printf("\nUNDO\n");
         glFlush();     
    }
    else if((x>=-150 && x<=-50) && (y>=100 && y<=150) && edit_drop==1 && state==0)
    {
	    print_redo(0.3,0.3,0.7);
		print_undo(1.0,1.0,1.0);
		printf("\nREDO\n");
         glFlush();     
    }
 
	else
	{
        menu_drop = 0;
        edit_drop=0;
        print_edit(1.0,1.0,1.0);
		print_file(1.0,1.0,1.0);		
		glColor3f(0.3,0.3,0.3);
		glBegin(GL_POLYGON);			//creating layout for Menu
			glVertex2i(-250,200);
			glVertex2i(-250,0);
			glVertex2i(-50,0);
			glVertex2i(-50,200);
		glEnd();
		glFlush();		

	}
}
}
void hover(int x, int y)
{
	x-=250;
	y=250-y;
	if((x>=-250 && x<=-150) && (y>=200 && y<=250))	//FILE
	{
		print_file(0.3,0.3,0.7);	//BLUE
	 print_edit(1.0,1.0,1.0);
		if(menu_drop)
		{
 			clearSubNew();
			 print_new(1.0,1.0,1.0); 
			 print_exit(1.0,1.0,1.0);
		}
		 
    	if(edit_drop)
    	{
    		menu_drop = 1;
		    edit_drop=0;
			print_file(0.3,0.3,0.3);
	
			print_new(1.0,1.0,1.0);
			print_open(1.0,1.0,1.0);
			print_save(1.0,1.0,1.0);
			print_exit(1.0,1.0,1.0);
		
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_LINES);
				glVertex2i(-250,150);		glVertex2i(-150,150);
				glVertex2i(-250,100);		glVertex2i(-150,100);
				glVertex2i(-250,50);		glVertex2i(-150,50);
				glVertex2i(-150,250);
				glVertex2i(-150,200);
			glEnd();
		}
		glFlush();
		
	}
	else if((x>=-150 && x<=-50) && (y>=200 && y<=250))	//EDIT
	{
		print_file(1.0,1.0,1.0);	
		print_edit(0.3,0.3,0.7);
		if(menu_drop)
		{
			print_undo(1.0,1.0,1.0);
			print_redo(1.0,1.0,1.0);
			menu_drop=0;
			edit_drop=1;
		}
		glFlush();
		
	}
	else if((x>=-150 && x<=-50) && (y>=150 && y<=200) && edit_drop==1)
    {
    	
		print_undo(0.3,0.3,0.7);
		print_redo(1.0,1.0,1.0);
	
         glFlush();     
    }
    else if((x>=-150 && x<=-50) && (y>=100 && y<=250) && edit_drop==1)
    {
    
	    print_redo(0.3,0.3,0.7);
		print_undo(1.0,1.0,1.0);
		
         glFlush();     
    }
    else if((x>=-250 && x<=-150) && (y>=150 && y<=200) && menu_drop==1)
    {
    	// New submenu
    	 drop_new = 1;
    	 drop_open = 0;
    	 
    	 clearSubNew();
    	 print_new(0.3,0.3,0.7);
    	 print_open(1.0,1.0,1.0);
    	 print_save(1.0,1.0,1.0); 
    	 print_exit(1.0,1.0,1.0); 	 
    
         print_subNew();
         glFlush();     
    }
    else if((x>=-150 && x<=-50) && (y>=150 && y<=200) && menu_drop==1 && drop_new ==1)
    {
    	// New > File submenu
     glColor3f(0.3,0.3,0.7);
        glBegin(GL_POLYGON);			//creating layout for Menu
        glVertex2i(-150,200);
		glVertex2i(-50,200);
		glVertex2i(-50,150);
		glVertex2i(-150,150);
		glEnd();  
	
	glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);			//creating layout for Menu
        glVertex2i(-150,150);
		glVertex2i(-50,150);
		glVertex2i(-50,100);
		glVertex2i(-150,100);
		glEnd();  
     glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
					glVertex2i(-150,150);		glVertex2i(-50,150);
					glVertex2i(-150,200);		glVertex2i(-150,100);
		glEnd();
	
		glRasterPos2i(-140,160);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'F');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'I');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'L');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
			
			glRasterPos2i(-140,110);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'P');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'J');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'C');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');
     glFlush(); 
    
    }
    else if((x>=-150 && x<=-50) && (y>=100 && y<=150) && menu_drop==1 && drop_new ==1)
    {
    	// New > Project submenu
 		glColor3f(0.3,0.3,0.7);
        glBegin(GL_POLYGON);			//creating layout for Menu
        glVertex2i(-150,150);
		glVertex2i(-50,150);
		glVertex2i(-50,100);
		glVertex2i(-150,100);
		glEnd();  
		
		glColor3f(1.0,1.0,1.0);
		glBegin(GL_POLYGON);			//creating layout for Menu
        glVertex2i(-150,200);
		glVertex2i(-50,200);
		glVertex2i(-50,150);
		glVertex2i(-150,150);
		glEnd();  
		
    	glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
					glVertex2i(-150,150);		glVertex2i(-50,150);
					glVertex2i(-150,200);		glVertex2i(-150,100);
		glEnd();
	
			glRasterPos2i(-140,160);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'F');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'I');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'L');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
			
    		glRasterPos2i(-140,110);			//set position to top corner to print FILE
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'P');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'J');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');	
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'C');
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');
		glFlush();

    }
    else if((x>=-250 && x<=-150) && (y>=100 && y<=150) && menu_drop==1)
    {
    	// Open Submenu
    	 drop_new = 0;
    	 drop_open = 1;
    	 
    	 clearSubSave();
    	 print_open(0.3,0.3,0.7);
    	 print_new(1.0,1.0,1.0);
    	 print_save(1.0,1.0,1.0);
    	 print_exit(1.0,1.0,1.0);
    	 drop_new = 0;
    	 drop_open = 0;
       //  print_subOpen();
         glFlush();     
    }
    else if((x>=-250 && x<=-150) && (y>=50 && y<=100) && menu_drop==1)
    {
    	// Save Submenu
    	 clearSubSave();
    	 print_save(0.3,0.3,0.7);
    	 print_open(1.0,1.0,1.0);
    	 print_new(1.0,1.0,1.0);
    	 print_exit(1.0,1.0,1.0);
		drop_new = 0;
    	 drop_open = 0;
         glFlush();     
    }
    else if((x>=-250 && x<=-150) && (y>=0 && y<=50) && menu_drop==1)
    {
    	// EXIT Submenu

    	 clearSubSave();
    	 
    	 print_save(1.0,1.0,1.0);
    	 print_open(1.0,1.0,1.0);
    	 print_new(1.0,1.0,1.0);
    	 print_exit(0.3,0.3,0.7);
    	 
         glFlush();     
    }
	else
	{
		drop_new=0;
		drop_open=0; 
		if(menu_drop)
		{
			clearSubNew();
			print_save(1.0,1.0,1.0);
			 print_open(1.0,1.0,1.0);
			 print_new(1.0,1.0,1.0);
			 print_exit(1.0,1.0,1.0);
		}
		else if(edit_drop)
		{
			clearSubNew();
			print_undo(1.0,1.0,1.0);
			print_redo(1.0,1.0,1.0);
		}
		print_file(1.0,1.0,1.0);
		print_edit(1.0,1.0,1.0);
		glFlush();
	}
}

int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitWindowSize( 500, 500 );       /* A x A pixel screen window  */
  glutInitWindowPosition( 100, 100 );
  glutInitDisplayMode( GLUT_RGB | GLUT_SINGLE);
  glutCreateWindow("Menu"); /* window title                   */
  
  myinit();  
  glutDisplayFunc(display);         /* tell OpenGL main loop what     */
                        			/* set attributes                 */
  glutMouseFunc(mouse_func);		/* Set actions on mouse Click 	*/
  glutPassiveMotionFunc(hover);		/* Set actions on mouse hover 	*/

  glutMainLoop();                   /* pass control to the main loop  */
  return 0;
}