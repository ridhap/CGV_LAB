#include<stdio.h>
#include<iostream>
#include<GL/glut.h>
#include<math.h>

int xx, yy, xend, yend;
void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 800);
}

void setPixel(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2f(x, y);
	glEnd();
	glFlush();
}

void setColor()
{
	glPointSize(62);
	int count = 0;
	bool even = true;
	for (int i = 0; i <= 800; i += 100)
	{
		for (int j = 0; j <= 800; j += 100)
		{
			if (even == true)
			{
				setPixel(i + 50, j + 50);
			}
			count++;
			if (count % 2 != 0) even = false;
			else even = true;
		}

	}
}

void ChessBoard()
{
	int x, y, xend, yend;
	glColor3f(0, 0, 0);
	glPointSize(2);
	for (int i = 100; i <= 800; i += 100)
	{
		x = i;
		y = 0;
		xend = i;
		yend = 800;
		setPixel(x, y);
		while (y < yend)
		{
			y = y + 1;
			setPixel(x, y);

		}
		y = i;
		x = 0;
		xend = 800;
		yend = i;
		setPixel(x, y);
		while (x < xend)
		{
			x = x + 1;
			setPixel(x, y);
		}
	}
	setColor();
}



void display()
{

	glClearColor(1, 1, 1, 1);		//Specifies a background RGB color for a display window.
	glClear(GL_COLOR_BUFFER_BIT);// Clear display window.
	//glViewport(300, 300, 100, 100);
	ChessBoard();
	glFlush();	// Process all OpenGL routines as quickly as possible.
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);		// Set display mode.
	glutInitWindowPosition(100, 100);			// Set top-left display-window position.
	glutInitWindowSize(500, 500);				// Set display-window width and height.
	glutCreateWindow("ChessBoard");// Create display window.
	myinit();									// Execute initialization procedure.
	glutDisplayFunc(display);				//Invokes a function to create a picture within the current display window.
	glutMainLoop();							 //Executes the computer-graphics program.
}