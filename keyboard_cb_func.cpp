#include<stdio.h>
#include<stdlib.h>
#include<gl/glut.h>
int w = 600, h = 500;
int sizef = 0;
void init()
{
	glMatrixMode(GL_PROJECTION_MATRIX);
	glLoadIdentity();
	gluOrtho2D(0, w, 0, h);
	glMatrixMode(GL_MODELVIEW);
}
void disp()
{
	glClearColor(0,0 , 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1.06,0);
	glBegin(GL_POLYGON);
	glVertex2f(250 - sizef, 250 - sizef);
	glVertex2f(350 + sizef, 250 - sizef);
	glVertex2f(350 + sizef, 350 + sizef);
	glVertex2f(250 - sizef, 350 + sizef);
	glEnd();
	glFlush();
}
void keyboard(unsigned char key, int x, int y)
{
	if (key == 'i')
		sizef += 50;
	else if (key == 'd')
		sizef -= 50;
	else if (key == 'q')
		exit(0);
	glutPostRedisplay();

}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(w, h);
	glutInitWindowPosition(300, 70);
	glutCreateWindow("KeyBoard_CB_Func");
	init();
	glutDisplayFunc(disp);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
}