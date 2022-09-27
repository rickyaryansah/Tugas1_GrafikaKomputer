#include <GL/glut.h>

void drawDot(){
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.2,0.2,0.0);
    glVertex3f(0.6,0.1,0.0);
    glVertex3f(0.8,0.3,0.0);
    glVertex3f(0.7,0.6,0.0);
    glVertex3f(0.4,0.8,0.0);
    glEnd();
    glFlush();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    drawDot();
    glutSwapBuffers();
}

int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,480);
    glutCreateWindow("Tugas Polygon | Muhammad Ricky Aryansah");
    glClearColor(0.0,0.0,0.0,0.0);
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

