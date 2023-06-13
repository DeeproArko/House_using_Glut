#include<windows.h>
#include<GL/glut.h>
#include<iostream>

void plot(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(4.0);

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);

    glVertex2i(-50, -25);
    glVertex2i(50, -25);
    glVertex2i(50, 25);
    glVertex2i(-50, 25);

    glEnd();
      glColor3f(1.0,1.5,1.0);
    glBegin(GL_POLYGON);

    glVertex2i(-50, 25);
    glVertex2i(50, 25);
    glVertex2i(0, 50);
    glEnd();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);

    glVertex2i(-40, -10);
    glVertex2i(-20, -10);
    glVertex2i(-20, 10);
    glVertex2i(-40, 10);
    glEnd();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);

    glVertex2i(20, -10);
    glVertex2i(40, -10);
    glVertex2i(40, 10);
    glVertex2i(20, 10);
    glEnd();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);

    glVertex2i(-10, -25);
    glVertex2i(10, -25);
    glVertex2i(10, 15);
    glVertex2i(-10, 15);
    glEnd();

    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);

    glVertex2i(-15, -25);
    glVertex2i(15, -25);
    glVertex2i(15, -30);
    glVertex2i(-15, -30);
    glEnd();

    glFlush();

}
void init(void)
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100,100,-100,100);

}
int main()
{
    glutCreateWindow("COLORFUL HOME");
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    init();
    glutDisplayFunc(plot);
    glutMainLoop();
    }
