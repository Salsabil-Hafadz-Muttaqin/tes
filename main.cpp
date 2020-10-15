#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3b(247, 105, 105);
    glVertex2f(8.5, 9.49);         //TITIK A
    glVertex2f(8, 8.4);         //TITIK B
    glVertex2f(7.6, 7.4);         //TITIK C
    glVertex2f(7, 6);         //TITIK D
    glVertex2f(8.4, 3);         //TITIK P1
    glVertex2f(10, 6);         //TITIK V
    glVertex2f(9.4, 7.4);         //TITIK U
    glVertex2f(9, 8.4);         //TITIK T
    glEnd();


    glBegin(GL_POLYGON);
    glColor3b(247, 105, 105);
    glVertex2f(7, 6);         //TITIK D
    glVertex2f(5.98, 6.5);         //TITIK E
    glVertex2f(5, 7);         //TITIK F
    glVertex2f(4, 7.52);         //TITIK G
    glVertex2f(4.34, 7.02);         //TITIK H
    glVertex2f(4.96, 6.36);         //TITIK I
    glVertex2f(5.5, 6);         //TITIK J
    glVertex2f(5.96, 5.52);         //TITIK K
    glVertex2f(6.6, 5);         //TITIK L
    glVertex2f(6, 4);         //TITIK M
    glVertex2f(5.42, 3.02);         //TITIK N
    glVertex2f(5, 2);         //TITIK O
    glVertex2f(4.34, 1.02);         //TITIK P
    glVertex2f(4.98, 1.36);         //TITIK Q
    glVertex2f(5.92, 1.84);         //TITIK R
    glVertex2f(6.54, 2.28);         //TITIK S
    glVertex2f(7.2, 3);         //TITIK Q1
    glVertex2f(8.4, 3);         //TITIK P1
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(247, 105, 105);
    glVertex2f(10, 6);         //TITIK V
    glVertex2f(9.6, 2.99);         //TITIK O1
    glVertex2f(10.32, 2.35);         //TITIK N1
    glVertex2f(10.95, 1.8);         //TITIK M1
    glVertex2f(11.96, 1.33);         //TITIK L1
    glVertex2f(12.6, 1.02);         //TITIK K1
    glVertex2f(12, 2);         //TITIK J1
    glVertex2f(11.52, 3.04);         //TITIK I1
    glVertex2f(11, 4);         //TITIK H1
    glVertex2f(10.4, 5);         //TITIK G1
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(247, 105, 105);
    glVertex2f(10.4, 5);         //TITIK G1
    glVertex2f(11.01, 5.53);         //TITIK F1
    glVertex2f(11.55, 5.84);         //TITIK E1
    glVertex2f(12.06, 6.24);         //TITIK D1
    glVertex2f(12.4, 6.57);         //TITIK C1
    glVertex2f(12.74, 6.98);         //TITIK B1
    glVertex2f(13, 7.5);         //TITIK A1
    glVertex2f(12, 7);         //TITIK Z
    glVertex2f(11,6.51 );         //TITIK W
    glVertex2f(10, 6);         //TITIK V
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(247, 105, 105);
    glVertex2f(8.4, 3);         //TITIK P1
    glVertex2f(9.6, 2.99);         //TITIK O1
    glVertex2f(10, 6);         //TITIK V
    glEnd();
	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(1368, 728);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 18, 0, 12);
	glutMainLoop();
	return 0;
}
