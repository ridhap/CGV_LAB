#include<stdio.h>
#include<string.h>
#include<gl/glut.h>

void myinit()
{
	glMatrixMode(GL_PROJECTION_MATRIX);
	glLoadIdentity();
	gluOrtho2D(-500, 500, -500, 500);
	glMatrixMode(GL_MODELVIEW);
}


void display()
{
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1, 0);
	//Title
	char message[] = "Suhas S Rao";
	char number[] = "0123456789 ";
	glRasterPos2i(-100, 300);
	for (int i = 0; i < strlen(message); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message[i]);
	}
	glRasterPos2i(-100, 100);
	for (int i = 0; i < strlen(number); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, number[i]);
	}
	glFlush();
}

void reshape(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluOrtho2D(-500, 500, -500, 500);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	myinit();
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Text");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
}