#include <GL/glut.h>

void drawDot(){
    glPointSize(8);
    glBegin(GL_POINTS);
    glColor3f(1.0,0.0,1.0);
    glVertex2i(250,-25);
    glColor3f(1.0,1.0,0.0);
    glVertex2i(250,30);
    glColor3f(0.0,1.0,1.0);
    glVertex2i(350,30);
    glColor3f(0.0,0.0,1.0);
    glVertex2i(450,30);
    glColor3f(1.0,0.0,0.0);
    glVertex2i(350,-25);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(450,-25);
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
    glutCreateWindow("Tugas Titik");
    glClearColor(0.0,0.0,0.0,0.0);
    gluOrtho2D(0,640.,-240.,240.0);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
