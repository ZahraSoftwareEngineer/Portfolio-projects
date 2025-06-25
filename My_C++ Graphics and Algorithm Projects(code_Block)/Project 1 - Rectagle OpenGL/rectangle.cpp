#include <GL/glut.h>
#include <stdio.h>




void line(int xs ,int ys ,int xe ,int ye)
{
    glColor3f(0.5,0.5,1);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2i(xs , ys);
    glVertex2i(xe , ye);
    glEnd();
}


void displayRectagle()
{
   line(200,400,400,400);
   line(200,400,200,200);
   line(200,200,400,200);
   line(400,200,400,400);
   glFlush();


}
int main (int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(650,600);
    glutCreateWindow("Rectangle");
    glClearColor(0.2,0.5,0.7,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,640,10,590);
    glutDisplayFunc(displayRectagle);
    glutMainLoop();




}