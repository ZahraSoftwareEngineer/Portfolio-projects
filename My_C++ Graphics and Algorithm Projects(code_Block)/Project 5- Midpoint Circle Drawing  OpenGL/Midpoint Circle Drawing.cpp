#include<GL/glut.h>
#include<stdio.h>
int xcenter,ycenter,radius,xtemp,ytemp,pi;




void circlealgorithm()
{
   xtemp=0;
   ytemp=radius;
   pi=1-radius;



  glColor3f(1.0,0.0,0.0);
   glPointSize(6);
   while (xtemp<=ytemp)
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
   glFlush();
}
int main(int argc,char**argv)
{
    printf("Enter xcenter=");
    scanf("%d",&xcenter);
    printf("Enter ycenter=");
    scanf("%d",&ycenter);
    printf("Enter radius=");
    scanf("%d",&radius);



  glutInit(&argc ,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(550,550);
    glutInitWindowPosition(25,25);
    glutCreateWindow("MID POINT");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,540,10,540);
    glutDisplayFunc(circlealgorithm);
    glutMainLoop();
}