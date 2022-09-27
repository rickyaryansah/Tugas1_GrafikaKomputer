#include <GL/glut.h>

void drawLine(){
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-0.8,0.0);
    glVertex2f(0.8,0.0);
    glEnd();
    glFlush();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    drawLine();
    glutSwapBuffers();
}

int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,480);
    glutCreateWindow("Tugas Garis | Muhammad Ricky Aryansah");
    glClearColor(0.0,0.0,0.0,0.0);
    glOrtho(0.0,0.0,0.0,0.0,0.0,0.0);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

