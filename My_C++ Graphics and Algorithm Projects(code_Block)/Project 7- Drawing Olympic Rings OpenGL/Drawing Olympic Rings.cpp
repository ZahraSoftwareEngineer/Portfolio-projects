#include<GL/glut.h>
#include<stdio.h>


void midcircle(int xcenter,int ycenter,int radius)
{
    int xtemp,ytemp,pi;
    xtemp=0;
    ytemp=radius;
    pi=1-radius;
    glPointSize(6);
    while(xtemp<=ytemp)
    {
    glBegin(GL_POINTS);
    glVertex2i(xcenter+xtemp,ycenter+ytemp);
    glVertex2i(xcenter-xtemp,ycenter+ytemp);
    glVertex2i(xcenter+xtemp,ycenter-ytemp);
    glVertex2i(xcenter-xtemp,ycenter-ytemp);
    glVertex2i(xcenter+ytemp,ycenter+xtemp);
    glVertex2i(xcenter-ytemp,ycenter+xtemp);
    glVertex2i(xcenter+ytemp,ycenter-xtemp);
    glVertex2i(xcenter-ytemp,ycenter-xtemp);
    glEnd();
    xtemp=xtemp+1;
    if(pi<0)
        pi=pi+(2*xtemp+1);
    else
    {
        ytemp=ytemp-1;
        pi=pi+(2*(xtemp-ytemp)+1);
    }
    }


}
void olymring()
{
    glColor3f(0.0,0.0,85.0);
    midcircle(250,450,75);
    glColor3f(0.0,0.0,0.0);
    midcircle(420,450,75);
    glColor3f(0.8,0.0,0.0);
    midcircle(590,450,75);
    glColor3f(1.0,1.0,0.0);
    midcircle(335,360,75);
    glColor3f(0.0,1.0,0.0);
    midcircle(505,360,75);
    glFlush();


}


int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(250,25);
    glutInitWindowSize(800,600);
    glutCreateWindow("OLYMBIC RING");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,790,10,590);
    glutDisplayFunc(olymring);
    glutMainLoop();
}
#include<GL/glut.h>
#include<stdio.h>


void midcircle(int xcenter,int ycenter,int radius)
{
    int xtemp,ytemp,pi;
    xtemp=0;
    ytemp=radius;
    pi=1-radius;
    glPointSize(6);
    while(xtemp<=ytemp)
    {
    glBegin(GL_POINTS);
    glVertex2i(xcenter+xtemp,ycenter+ytemp);
    glVertex2i(xcenter-xtemp,ycenter+ytemp);
    glVertex2i(xcenter+xtemp,ycenter-ytemp);
    glVertex2i(xcenter-xtemp,ycenter-ytemp);
    glVertex2i(xcenter+ytemp,ycenter+xtemp);
    glVertex2i(xcenter-ytemp,ycenter+xtemp);
    glVertex2i(xcenter+ytemp,ycenter-xtemp);
    glVertex2i(xcenter-ytemp,ycenter-xtemp);
    glEnd();
    xtemp=xtemp+1;
    if(pi<0)
        pi=pi+(2*xtemp+1);
    else
    {
        ytemp=ytemp-1;
        pi=pi+(2*(xtemp-ytemp)+1);
    }
    }


}
void olymring()
{
    glColor3f(0.0,0.0,85.0);
    midcircle(250,450,75);
    glColor3f(0.0,0.0,0.0);
    midcircle(420,450,75);
    glColor3f(0.8,0.0,0.0);
    midcircle(590,450,75);
    glColor3f(1.0,1.0,0.0);
    midcircle(335,360,75);
    glColor3f(0.0,1.0,0.0);
    midcircle(505,360,75);
    glFlush();


}


int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(250,25);
    glutInitWindowSize(800,600);
    glutCreateWindow("OLYMBIC RING");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,790,10,590);
    glutDisplayFunc(olymring);
    glutMainLoop();
}