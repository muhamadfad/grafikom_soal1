/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#include <GL/glut.h>

void polygon() {

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0,1.0,1.0,1.0);

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,1.0);



    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);

    glColor3f(0.0,1.0,0.0); //garis 1
    glVertex2f(0.3,0.8);
    glVertex2f(-0.3,-0.3);

    glColor3f(1.0,0.0,0.0); //garis 2
    glVertex2f(0.3,0.8);
    glVertex2f(0.3,-0.3);

    glColor3f(1.0,0.1,1.0); //garis 3
    glVertex2f(0.3,-0.3);
    glVertex2f(-0.3,-0.3);



    glEnd();
    glFlush();
}

int main (int argc, char **argv) {
    glutInit(&argc,argv);
    glutInitWindowSize(500,500);
    glutCreateWindow("Gambar Poligon");
    glutDisplayFunc(polygon);
    glutMainLoop();
    return 0;
}
