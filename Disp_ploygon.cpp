#include <GL/glut.h>
#include<iostream>

using namespace std;

GLubyte fillPattern[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0x80, 0x01, 0xC0, 0x06, 0xC0, 0x03, 0x60,
	0x04, 0x60, 0x06, 0x20, 0x04, 0x30, 0x0C, 0x20,
	0x04, 0x18, 0x18, 0x20, 0x04, 0x0C, 0x30, 0x20,
	0x04, 0x06, 0x60, 0x20, 0x44, 0x03, 0xC0, 0x22,
	0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
	0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
	0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
	0x66, 0x01, 0x80, 0x66, 0x33, 0x01, 0x80, 0xCC,
	0x19, 0x81, 0x81, 0x98, 0x0C, 0xC1, 0x83, 0x30,
	0x07, 0xe1, 0x87, 0xe0, 0x03, 0x3f, 0xfc, 0xc0,
	0x03, 0x31, 0x8c, 0xc0, 0x03, 0x33, 0xcc, 0xc0,
	0x06, 0x64, 0x26, 0x60, 0x0c, 0xcc, 0x33, 0x30,
	0x18, 0xcc, 0x33, 0x18, 0x10, 0xc4, 0x23, 0x08,
	0x10, 0x63, 0xC6, 0x08, 0x10, 0x30, 0x0c, 0x08,
	0x10, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x08
};

void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(0.0, 300, 0.0, 300);
	glViewport(200, 300, 300, 300);
}

void display1(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glShadeModel(GL_FLAT);
	glBegin(GL_POLYGON);

	glVertex2f(150.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(100.0, 150.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150.0, 150.0);
	glColor3f(0.70, 0.20, 0.50);
	glVertex2f(200.0, 50.0);
	glColor3f(0.50, 0.80, 0.20);
	glVertex2f(150.0, 0.0);
	glColor3f(0.20, 0.10, 0.60);
	glVertex2f(150.0, 10.0);


	glEnd();
	glFlush();
}
void display2(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
	glBegin(GL_TRIANGLE_STRIP);

	glVertex2f(150.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(20.0, 200.0);
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
void display4(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPolygonStipple(fillPattern);
	glEnable(GL_POLYGON_STIPPLE);
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
	glDisable(GL_POLYGON_STIPPLE);
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
	glShadeModel(GL_FLAT);
	glBegin(GL_QUAD_STRIP);
	glVertex2f(50.0, 50.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(100.0, 20.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(150.0, 50.0);
	glColor3f(0.70, 0.20, 0.50);
	glVertex2f(100.0, 150.0);
	glColor3f(0.50, 0.80, 0.20);
	glVertex2f(150.0, 80.0);
	glColor3f(0.20, 0.10, 0.60);
	glVertex2f(120.0, 200.0);


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
	cout << "1. GL_Polygon \n2.GL_Triangle_Strip\n3.GL_Triangle_Fan\n4. GL_Traingles\n5.GL_Quads\n6.GL_Quad_Strip" << endl;
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
	default:cout << "Invalid" << endl;
		break;

	}
	glutMainLoop();
}