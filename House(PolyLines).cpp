#include<iostream>
#include<GL/glut.h>
void myinit()
{
    glClearColor(1, 1, 1, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800, 0.0, 600);
}
void home()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //Roof
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 500);
    glVertex2i(600, 500);
    glVertex2i(700, 350);
    glVertex2i(300, 350);
    glEnd();
   
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 500);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glEnd();
    // Front Wall
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glVertex2i(300, 100);
    glVertex2i(100, 100);
    glEnd();
    // Front Door
    glColor3f(1, 0, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2i(150, 250);
    glVertex2i(250, 250);
    glVertex2i(250, 100);
    glVertex2i(150, 100);
    glEnd();

    //side Wall
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(300, 350);
    glVertex2i(700, 350);
    glVertex2i(700, 100);
    glVertex2i(300, 100);
    glEnd();
    glFlush();
}   
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(300, 75);
    glutCreateWindow("House(Polyline)");
    myinit();
    glutDisplayFunc(home);
    glutMainLoop();
}