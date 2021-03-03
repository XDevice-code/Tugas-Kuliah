#include <GL/glut.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <windows.h>

void Nggambar(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2f(2, 1);
    glVertex2f(3, 6);
    glVertex2f(5, 4);
    glVertex2f(8, 8);
    glVertex2f(10, 4);
    glVertex2f(12, 2);
    glVertex2f(2, 1);
    glEnd();
    glFlush();
}
int main(int argc, char** argv){
glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(300, 300);
 glutInitWindowPosition(200, 200);
 glutCreateWindow("Poligon");
 gluOrtho2D(-15., 15., -15., 15.);
 glutDisplayFunc(Nggambar);
 glutMainLoop();
 return 0;
}