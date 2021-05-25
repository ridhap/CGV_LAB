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
	glColor3f(1, 0, 1);
	glPointSize(10);
	glBegin(GL_POINTS);
		glVertex2f(399, 399);
		glVertex2f( 266,266);
		glVertex2f(133, 133);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(300, 75);
	glutCreateWindow("Points");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
}