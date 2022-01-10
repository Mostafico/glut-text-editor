ce#include <stdio.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include <GL/glut.h>

void display_b(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0,0.0,-6.0);

    glBegin(GL_LINES);

    glVertex3f(-1,0,0);
    glVertex3f(1,0,0);

    glVertex3f(-1,0,0);
    glVertex3f(-1,-2,0);

    glVertex3f(-1,-2,0);
    glVertex3f(1,-2,0);

    glVertex3f(1,-2,0);
    glVertex3f(1,0,0);

    glEnd();

    glLoadIdentity();
    glTranslatef(0.0,2.0,-6.0);

    glBegin(GL_LINES);

    glVertex3f(-1,0,0);
    glVertex3f(1,0,0);

    glVertex3f(-1,0,0);
    glVertex3f(-1,-2,0);

    glVertex3f(-1,-2,0);
    glVertex3f(1,-2,0);

    glVertex3f(1,-2,0);
    glVertex3f(1,0,0);

    glEnd();

    glFlush();
}

void graph(void){
    glClear( GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0,0.0,-5.0);

    glPointSize(20.0);

    glBegin(GL_POINTS);

    glVertex3f(-1,0,0);
    glVertex3f(1,0,0);

    glEnd();


    glLoadIdentity();

    glTranslatef(0.0,0.0,-5.0);
    
    glBegin(GL_LINES);

    glVertex3f(-1,0,0);
    glVertex3f(1,0,0);

    glEnd();

    glFlush();

}

void chart(void){
    glClear( GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0,0,-20.0);

    glBegin(GL_QUADS);
        glVertex3f(-1,0,0);
        glVertex3f(-1,5,0);
        glVertex3f(1,5,0);
        glVertex3f(1,0,0);
    glEnd();

    glLoadIdentity();
    glTranslatef(2,0,-20.0);

    glBegin(GL_QUADS);
        glVertex3f(-1,0,0);
        glVertex3f(-1,3,0);
        glVertex3f(1,3,0);
        glVertex3f(1,0,0);
    glEnd();

    glLoadIdentity();
    glTranslatef(4,0,-20.0);

    glBegin(GL_QUADS);
        glVertex3f(-1,0,0);
        glVertex3f(-1,2,0);
        glVertex3f(1,2,0);
        glVertex3f(1,0,0);
    glEnd();

    glFlush();
}

void display_c_3d(void){
    glClear( GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0,0,-5.0);

    glBegin(GL_LINES);

    glVertex3f(-1,-2,0);
    glVertex3f(1,-2,0);

    glVertex3f(-1,-2,0);
    glVertex3f(-1,2,0);

    glVertex3f(-1,2,0);
    glVertex3f(1,2,0);

    glEnd();

    glLoadIdentity();
    glTranslatef(0,0,-8.0);

    glBegin(GL_LINES);

    glVertex3f(-1,-2,0);
    glVertex3f(1,-2,0);

    glVertex3f(-1,-2,0);
    glVertex3f(-1,2,0);

    glVertex3f(-1,2,0);
    glVertex3f(1,2,0);

    glEnd();


    glLoadIdentity();
    glTranslatef(0,0,-5.0);

    glBegin(GL_LINES);

        glVertex3f(-1,-2,0);
        glVertex3f(-1, -2, -3);

        glVertex3f(-1,2,0);
        glVertex3f(-1, 2, -3);

        glVertex3f(1,2,0);
        glVertex3f(1, 2, -3);

        glVertex3f(1,-2,0);
        glVertex3f(1, -2, -3);

    glEnd();
    glFlush();
}

void display_a(void){
    glClear( GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0,0.0,-5.0);

    glBegin(GL_LINES);
    glVertex3f(-1.0,0.0,0.0);
    glVertex3f(0.0,2.0,0.0);
    glVertex3f(0.0,2.0,0.0);
    glVertex3f(1.0,0.0,0.0);

    glVertex3f(-0.5,1.0,0.0);
    glVertex3f(0.5,1.0,0.0);


    glEnd();
    glFlush();
}

void display_v(){
    glClear( GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslated(0, 0, -5);
    glBegin(GL_LINE_STRIP);
    glVertex3d(-2, 2, 0);
    glVertex3d(0, -2, 0);
    glVertex3d(2, 2, 0);
    glEnd();

    glTranslated(0, 0, -3);
    glBegin(GL_LINE_STRIP);
    glVertex3d(-2, 2, 0);
    glVertex3d(0, -2, 0);
    glVertex3d(2, 2, 0);
    glEnd();

    glLoadIdentity();
    glTranslated(0, 0, -5);
    glBegin(GL_LINES);
   

    glVertex3d(-2, 2, 0);
    glVertex3d(-2, 2, -3);

    glVertex3d(2, 2, 0);
    glVertex3d(2, 2, -3);

    glEnd();

    glFlush();
}

int deg = 0;

void display_v_rotated(int deg){
    glClear( GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslated(0, 0, -5);
    glRotatef(deg, 0, 0, 1);

    glBegin(GL_LINE_STRIP);
    glVertex3d(-2, 2, 0);
    glVertex3d(0, -2, 0);
    glVertex3d(2, 2, 0);
    glEnd();

    glTranslated(0, 0, -3);
    glBegin(GL_LINE_STRIP);
    glVertex3d(-2, 2, 0);
    glVertex3d(0, -2, 0);
    glVertex3d(2, 2, 0);
    glEnd();

    glLoadIdentity();
    glTranslated(0, 0, -5);
    glRotatef(deg, 0, 0, 1);

    glBegin(GL_LINES);
   
    glVertex3d(-2, 2, 0);
    glVertex3d(-2, 2, -3);

    glVertex3d(2, 2, 0);
    glVertex3d(2, 2, -3);

    glEnd();

    glFlush();
}

void reshape(int w, int h){
    glViewport(0, 0, w, h);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);//only switch when changing projection
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW); //default

}

void init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
        /* code */
        display_a();
        break;
    case 'b':
        /* code */
        display_b();
        break;
    case 'c':
        /* code */
        display_c_3d();
        break;
    case 'g':
        /* code */
        graph();
        break;
    case 'x':
        /* code */
        chart();
        break;
    case 'v':
        /* code */
        display_v();
        break;
    case 'l':
        /* code */
        display_v_rotated(deg++);
        break;
    default:
        break;
    }
}

int main(int argc, char **argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_RGB);

 glutInitWindowPosition(200,100);
 glutInitWindowSize(500,500);
 glutCreateWindow ("square");
 
 init();

 glViewport(0, 0, 500, 500);
 glMatrixMode(GL_PROJECTION);//only switch when changing projection
 glLoadIdentity();
 gluPerspective(60, 1, 2.0, 50);
 glMatrixMode(GL_MODELVIEW); //default

 glutDisplayFunc(display_a);
 glutKeyboardFunc(keyboard);
 //glutReshapeFunc(reshape);
 glutMainLoop();

 return 0;
}