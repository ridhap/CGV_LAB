#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
using namespace std;
int Xc, Yc, r;

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void plot(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(x + Xc, y + Yc);
	glEnd();
}

void CircleAlgo()
{
	int x = 0;
	int y = r;
	float decision = 5 / 4 - r;
	plot(x, y);
	while (y > x)
	{
		if (decision < 0)
		{
			x++;
			decision += 2 * x + 1;
		}
		else
		{
			y--;
			x++;
			decision += 2 * (x - y) + 1;
		}
		plot(x, y);
		plot(x, -y);
		plot(-x, y);
		plot(-x, -y);
		plot(y, x);
		plot(-y, x);
		plot(y, -x);
		plot(-y, -x);
	}
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(1.0);
	CircleAlgo();
	glFlush();
}

void main(int argc, char** argv)
{
	cout << "Enter the coordinates of the center:\n" << endl;
	cout << "X-coordinate   : "; cin >> Xc;
	cout << "\nY-coordinate : "; cin >> Yc;
	cout << "\nEnter radius : "; cin >> r;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Line Drawing Alogrithms");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();

}