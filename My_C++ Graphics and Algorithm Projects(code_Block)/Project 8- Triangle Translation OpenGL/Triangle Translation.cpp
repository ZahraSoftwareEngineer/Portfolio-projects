#include<GL/glut.h>
#include<stdio.h>



int xo1,yo1,xo2,yo2,xo3,yo3,tx,ty,xn1,yn1,xn2,yn2,xn3,yn3;
void translate()
{
    glColor3f(0.25,0.54,0.48);
    glLineWidth(8);
    glBegin(GL_POLYGON);
    glVertex2i(xo1,yo1);
    glVertex2i(xo2,yo2);
    glVertex2i(xo3,yo3);
    glEnd();


   xn1=xo1+tx;
    xn2=xo2+tx;
    xn3=xo3+tx;


   yn1=yo1+ty;
    yn2=yo2+ty;
    yn3=yo3+ty;


   glBegin(GL_POLYGON);


   glVertex2i(xn1,yn1);
    glVertex2i(xn2,yn2);
    glVertex2i(xn3,yn3);
    glEnd();
    glFlush();



}
int main(int argc,char** argv)
{
    printf("Enter xo1=");
    scanf("%d",&xo1);
    printf("Enter yo1=");
    scanf("%d",&yo1);


   printf("Enter xo2=");
    scanf("%d",&xo2);
    printf("Enter yo2=");
    scanf("%d",&yo2);


   printf("Enter xo3=");
    scanf("%d",&xo3);
    printf("Enter yo3=");
    scanf("%d",&yo3);




    printf("Enter tx=");
    scanf("%d",&tx);
    printf("Enter ty=");
    scanf("%d",&ty);





   glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(250,25);
    glutInitWindowSize(800,600);
    glutCreateWindow("OLYMBIC RING");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,790,10,590);
    glutDisplayFunc(translate);
    glutMainLoop();
}
#include<GL/glut.h>
#include<stdio.h>

int xo1,yo1,xo2,yo2,xo3,yo3,tx,ty,xn1,yn1,xn2,yn2,xn3,yn3;
void translate()
{
    glColor3f(0.25,0.54,0.48);
    glLineWidth(8);
    glBegin(GL_POLYGON);
    glVertex2i(xo1,yo1);
    glVertex2i(xo2,yo2);
    glVertex2i(xo3,yo3);
    glEnd();
    xn1=xo1+tx;
    xn2=xo2+tx;
    xn3=xo3+tx;
    yn1=yo1+ty;
    yn2=yo2+ty;
    yn3=yo3+ty;
    glBegin(GL_POLYGON);
    glVertex2i(xn1,yn1);
    glVertex2i(xn2,yn2);
    glVertex2i(xn3,yn3);
    glEnd();
    glFlush();
}
int main(int argc,char** argv)
{
    printf("Enter xo1=");
    scanf("%d",&xo1);
    printf("Enter yo1=");
    scanf("%d",&yo1);
    printf("Enter xo2=");
    scanf("%d",&xo2);
    printf("Enter yo2=");
    scanf("%d",&yo2);
    printf("Enter xo3=");
    scanf("%d",&xo3);
    printf("Enter yo3=");
    scanf("%d",&yo3);

    printf("Enter tx=");
    scanf("%d",&tx);
    printf("Enter ty=");
    scanf("%d",&ty);
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(250,25);
    glutInitWindowSize(800,600);
    glutCreateWindow("OLYMBIC RING");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,790,10,590);
    glutDisplayFunc(translate);
    glutMainLoop();
}