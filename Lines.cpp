#include<iostream>
#include<GL/glut.h>

void myInit(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
}

void display(void)
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.8, 0.0, 1.0);
	glLineStipple(4, 0XCCFF );
	glEnable(GL_LINE_STIPPLE);	
	glLineWidth(8);
	glBegin(GL_LINES);
	glVertex2f(25, 25);
	glVertex2f(400, 400);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(300, 75);
	glutCreateWindow("Lines");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop(); //to retain the window always at end
}