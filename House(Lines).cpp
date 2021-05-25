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

	glPointSize(6);
	glBegin(GL_LINES);
	glVertex2f(100, 150);
	glVertex2f(200, 150);

	glVertex2f(100, 300);
	glVertex2f(200, 300);

	glVertex2f(100, 150);
	glVertex2f(100, 300);

	glVertex2f(200, 150);
	glVertex2f(200, 300);


	//Roof
	glVertex2f(100, 300);
	glVertex2f(150, 400);

	glVertex2f(200, 300);
	glVertex2f(150, 400);

	//Door
	glVertex2f(125, 150);
	glVertex2f(125, 250);

	glVertex2f(175, 150);
	glVertex2f(175, 250);

	glVertex2f(125, 250);
	glVertex2f(175, 250);

	//BackSide
	glVertex2f(150, 400);
	glVertex2f(350, 400);

	glVertex2f(200, 300);
	glVertex2f(400, 300);

	glVertex2f(350, 400);
	glVertex2f(400, 300);

	glVertex2f(400, 300);
	glVertex2f(400, 150);

	glVertex2f(400, 150);
	glVertex2f(200, 150);

	glEnd();
	glBegin(GL_POINTS);
	glPointSize(10);
		glVertex2f(163, 200);
	glEnd();
	glFlush();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(450, 450);
	glutInitWindowPosition(450, 150);
	glutCreateWindow("House");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
}