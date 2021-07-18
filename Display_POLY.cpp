#include <GL/glut.h>
#include<iostream>
using namespace std;
void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void display1(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);

	glVertex2f(150.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(100.0, 150.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150.0, 150.0);

	glColor3f(0.20, 0.10, 0.60);
	glVertex2f(150.0, 10.0);


	glEnd();
	glFlush();
}

void display4(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_TRIANGLES);

	glVertex2f(150.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(100.0, 150.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150.0, 150.0);

	glVertex2f(200.0, 50.0);
	glVertex2f(150.0, 0.0);
	glVertex2f(100.0, 0.0);

	glEnd();
	glFlush();
}
void display2(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_TRIANGLE_STRIP);

	glVertex2f(150.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(100.0, 150.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150.0, 150.0);
	glColor3f(0.50, 0.80, 0.20);
	glVertex2f(200.0, 50.0);
	glColor3f(0.20, 0.10, 0.60);
	glVertex2f(150.0, 0.0);
	glColor3f(0.70, 0.20, 0.50);
	glVertex2f(100.0, 0.0);

	glEnd();
	glFlush();
}
void display3(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_TRIANGLE_FAN);

	glVertex2f(150.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);

	glVertex2f(150.0, 150.0);
	glColor3f(0.50, 0.80, 0.20);
	glVertex2f(200.0, 50.0);
	glColor3f(0.20, 0.10, 0.60);
	glVertex2f(150.0, 0.0);
	glColor3f(0.70, 0.20, 0.50);
	glVertex2f(100.0, 0.0);

	glEnd();
	glFlush();
}
void display5(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_QUADS);

	glVertex2f(150.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(100.0, 150.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150.0, 150.0);
	glColor3f(0.50, 0.80, 0.20);
	glVertex2f(200.0, 50.0);


	glEnd();
	glFlush();
}

void display6(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_QUAD_STRIP);

	glVertex2f(150.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(100.0, 150.0);

	glColor3f(0.50, 0.80, 0.20);
	glVertex2f(200.0, 50.0); \
		glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150.0, 150.0);


	glEnd();
	glFlush();
}
void display7(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	glEnd();
	glFlush();
}
void display8(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	
	glEnd();
	glFlush();
}
void display9(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);

	glEnd();
	glFlush();
}
void main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Polygons");
	glViewport(300, 300, 100, 100);
	init();
	int ch;
	//while (1) {
		cout << "1. GL_Polygon \n2.GL_Triangle_Strip\n3.GL_Triangle_Fan\n4. GL_Traingles\n5.GL_Quads\n6.GL_Quad_Strip\n7.GL_LINE_LOOP\n8.GL_LINE_STRIP\n9.GL_LINES\n" << endl;
		cin >> ch;

		switch (ch)
		{

		case 1:glutDisplayFunc(display1);
			break;
		case 2:glutDisplayFunc(display2);
			break;
		case 3:glutDisplayFunc(display3);
			break;
		case 4:glutDisplayFunc(display4);
			break;
		case 5:glutDisplayFunc(display5);
			break;
		case 6:glutDisplayFunc(display6);
			break;
		case 7:glutDisplayFunc(display7);
			break;
		case 8:glutDisplayFunc(display8);
			break;
		case 9:glutDisplayFunc(display9);
			break;
		default:cout << "Invalid" << endl;
			break;

	//	}
	}
	glutMainLoop();
}