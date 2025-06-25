#include<Gl/glut.h>
#include<stdio.h>
int x1,x2,x3,x4,y1,y2,y3,y4;
void line(int xs,int ys,int xe,int ye)
{
    glColor3f(0.2,0.3,0.2);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2i(xs,ys);
    glVertex2i(xe,ye);
    glEnd();
}
void hourglass()
{
    line(x1,y1,x2,y2);
    line(x3,y3,x4,y4);
    line(x2,y2,x3,y3);
    line(x1,y1,x4,y4);
    glFlush();
}


int main (int argc, char** argv)
{
    printf("Enter x1= ");
    scanf("%d",&x1);
    printf("Enter y1= ");
    scanf("%d",&y1);
    printf("Enter x2= ");
    scanf("%d",&x2);
    printf("Enter y2= ");
    scanf("%d",&y2);
    printf("Enter x3= ");
    scanf("%d",&x3);
    printf("Enter y3= ");
    scanf("%d",&y3);
    printf("Enter x4= ");
    scanf("%d",&x4);
    printf("Enter y4= ");
    scanf("%d",&y4);
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(700,700);
    glutCreateWindow("Hourglass");
    glClearColor(0.4,0.5,0.33,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,690,10,690);
    glutDisplayFunc(hourglass);
    glutMainLoop();
}