#include <GL/glut.h>

void drawPolygon(){
    glBegin(GL_POLYGON);

    glColor3f(0.5,1.0,1.0);
    glVertex2f(0.5, 0.2);
    glVertex2f(0.2, 0.5);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.5, 0.2);
    glVertex2f(-0.5, -0.2);
    glVertex2f(-0.2, -0.5);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.5,-0.2);
    glEnd();
    glFlush();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    drawPolygon();
    glutSwapBuffers();
}

int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,480);
    glutCreateWindow("Tugas Polygon | Muhammad Ricky Aryansah");
    glClearColor(0.0,0.0,0.0,0.0);
    glOrtho(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


