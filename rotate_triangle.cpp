#include<stdlib.h>
#include<iostream>
#include<GL/glut.h>
#include<math.h>
using namespace std;
double point[3][2] = { {20,20},{50,50},{80,30} };
double xp, yp, theta, rtheta;
void myinit() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
	glMatrixMode(GL_MODELVIEW);
}
void triangle() {
	
	glBegin(GL_TRIANGLES);
	glVertex2dv(point[0]);
	glVertex2dv(point[1]);
	glVertex2dv(point[2]);
	glEnd();
}
void disp1() {
	double x, y;
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);
	triangle();
	rtheta = (theta * 3.142) / 180;
	for (int i = 0; i < 3; i++) {
		x = point[i][0];
		y = point[i][1];
		point[i][0] = xp + (x - xp) * cos(rtheta) - (y - yp) * sin(rtheta);
		point[i][1] = yp + (x - xp) * sin(rtheta) + (y - yp) * cos(rtheta);
	}
	glColor3f(0, 1, 0);
	triangle();
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(300, 70);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Rotation");
	cout<<"Enter Reference Point x-coordinate\n";
	cin>>xp;
	printf("Enter Reference Point y-coordinate\n");
	cin>>yp;
	printf("Enter Rotation Angle\n");
	cin>>theta;
	myinit();
	glutDisplayFunc(disp1);
	glutMainLoop();
}