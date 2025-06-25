#include <GL/glut.h>
#include <stdio.h>




void line1(){




    glColor3f(0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(50,50);
    glVertex2i(100,50);
    glVertex2i(100,100);
    glVertex2i(50,100);
    glEnd();
}


void line2()
{



   glColor3f(1.0,1.0,1.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(100,50);
    glVertex2i(150,50);
    glVertex2i(150,100);
    glVertex2i(100,100);
    glEnd();



}
void line3()
{



   glColor3f(0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(150,50);
    glVertex2i(200,50);
    glVertex2i(200,100);
    glVertex2i(150,100);
    glEnd();




}


void line4()
{



   glColor3f(1.0,1.0,1.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(50,100);
    glVertex2i(100,100);
    glVertex2i(100,150);
    glVertex2i(50,150);
    glEnd();




}


void line5()
{



   glColor3f(0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(100,100);
    glVertex2i(150,100);
    glVertex2i(150,150);
    glVertex2i(100,150);
    glEnd();




}
void line6()
{



   glColor3f(1.0,1.0,1.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(150,100);
    glVertex2i(200,100);
    glVertex2i(200,150);
    glVertex2i(150,150);
    glEnd();




}
void line7(){




    glColor3f(0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(50,150);
    glVertex2i(100,150);
    glVertex2i(100,200);
    glVertex2i(50,200);
    glEnd();
}


void line8()
{



   glColor3f(1.0,1.0,1.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(100,150);
    glVertex2i(150,150);
    glVertex2i(150,200);
    glVertex2i(100,200);
    glEnd();



}
void line9()
{



   glColor3f(0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(150,150);
    glVertex2i(200,150);
    glVertex2i(200,200);
    glVertex2i(150,200);
    glEnd();




}


void drawalphabit()
{


   line1();
    line2();
    line3();
    line4();
    line5();
    line6();
    line7();
    line8();
    line9();


    glFlush();



}



int main(int argc,char**argv)
{


   glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(400,50);
    glutInitWindowSize(500,550);
    glutCreateWindow("Display Alphabet");
    glClearColor(1.0,1.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,490,10,540);
    glutDisplayFunc(drawalphabit);
    glutMainLoop();
}