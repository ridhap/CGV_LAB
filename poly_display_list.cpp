#include<stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
GLuint listName;
static void init(void)
{
	listName = glGenLists(1);
	glNewList(listName, GL_COMPILE);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(0.0, 1.0);
	glEnd();
	glTranslatef(1.5, 0.0, 0.0);
	glEndList();
	glShadeModel(GL_FLAT);
}
static void drawLine(void)
{
	glBegin(GL_LINES);
	glVertex2f(0.0, 0.5);
	glVertex2f(15.0, 0.5);
	glEnd();
}
void display(void)
{
	GLuint i;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);
	for (i = 0; i < 10; i++)
		glCallList(listName);
	drawLine();
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		gluOrtho2D(0.0, 2.0, 0.5 * (GLfloat)h / (GLfloat)w, 1.5 * (GLfloat)h / (GLfloat)w);
	else
		gluOrtho2D(0.0, 2.0 * (GLfloat)w / (GLfloat)h, 0.5, 1.5);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void keyboard(unsigned char key, int x, int y)
{
	switch (key) {
	case 'q':
		exit(0);
	}
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(650, 50);
	glutCreateWindow("Display List");
	init();
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(display);
	glutMainLoop();
}