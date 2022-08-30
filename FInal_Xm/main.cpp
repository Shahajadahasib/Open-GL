#include <GLUT/glut.h>

#include <stdlib.h>

#include <math.h>




void timer(int);
void imer(int);
void init(void)
{ //glClearColor(R,G,B,A);


    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);


      gluOrtho2D(0,100,0,100);



//  gluOrtho2D(0.0,500,0.0,500);
}

void circle(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)//radius_x,radius_y,certre_position_x,centre_position_y
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=0;i<361;i++)
    {
        angle = i * (PI/180); //conversion from degree to radian
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}


void Head(){
    
    
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
    circle(2.5, 2, 23, 79);
    circle(2.7, 2, 28, 79);
    circle(2.6, 2, 35, 79);
    circle(2.5, 2, 40, 79);
    circle(2.3, 2, 48, 79);
    circle(2.8, 2, 55, 79);
    glBegin(GL_QUADS);
    glVertex2i(20, 80);
    glVertex2i(60, 80);
    glVertex2i(56, 40);
    glVertex2i(24, 40);
    glEnd();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    circle(5, 5, 30, 70);
    circle(5, 5, 50, 70);
    glColor3f(1.0f, 0.0f, 1.0f);//Purple
    circle(2.2, 2.2, 30, 70);
    circle(2.2, 2.2, 50, 70);
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    circle(1, 1, 30, 70);
    circle(1, 1, 50, 70);
    
    
    glBegin(GL_QUADS);
    glVertex2f(28, 74.5);
    glVertex2f(27, 78);
    glVertex2f(28, 78);
    glVertex2i(29, 75);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2f(29.5, 75);
    glVertex2f(29.5, 78);
    glVertex2f(30.5, 78);
    glVertex2f(30.5, 75);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2f(31, 75);
    glVertex2f(32, 78);
    glVertex2f(33, 78);
    glVertex2f(32, 74.5);
    glEnd();
    
    
    
    glBegin(GL_QUADS);
    glVertex2f(48, 74.5);
    glVertex2f(47, 78);
    glVertex2f(48, 78);
    glVertex2i(49, 75);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2f(49.5, 75);
    glVertex2f(49.5, 78);
    glVertex2f(50.5, 78);
    glVertex2f(50.5, 75);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2f(51, 75);
    glVertex2f(52, 78);
    glVertex2f(53, 78);
    glVertex2f(52, 74.5);
    glEnd();
    
    
    circle(1, 1, 40, 65);
    glBegin(GL_QUADS);
    glVertex2f(39, 62.5);
    glVertex2f(39, 65);
    glVertex2f(41, 65);
    glVertex2f(41, 62.5);
    glEnd();
    
    
    
    
    //moouth
    
    circle(5, 4, 40, 50);
    glBegin(GL_TRIANGLES);
    glVertex2f(33, 55);
    glVertex2f(39, 53);
    glVertex2f(35.5, 48);
   
    glEnd();
    
    glBegin(GL_TRIANGLES);
    glVertex2f(43, 53);
    glVertex2f(47, 55);
    glVertex2f(44.5, 48);
   
    glEnd();
    //glColor3f(0.0f, 1.0f, 0.0f);//Green
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    circle(2, 2, 37, 52);
//    glColor3f(0.0f, 1.0f, 0.0f);
    circle(2, 2, 43.5, 52);
    
    
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2i(37, 54);
    glVertex2i(39, 54);
    glVertex2i(39, 51);
    glVertex2i(37, 51);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(43, 54);
    glVertex2i(41, 54);
    glVertex2i(41, 51);
    glVertex2i(43, 51);
    glEnd();
    
    
    
    
    
    glBegin(GL_QUADS);
    glVertex2i(25, 40);
    glVertex2i(55, 40);
    glVertex2i(55, 37);
    glVertex2i(25, 37);
    glEnd();
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);//purple
    glBegin(GL_QUADS);
  
    glVertex2i(25, 37);
    glVertex2i(55, 37);
    glVertex2i(55, 32);
    glVertex2i(25, 32);
    glEnd();
    
    glColor3f(0.1f, 0.1f, 0.0f);//Bronze
    
    glBegin(GL_QUADS);
  
    glVertex2i(26, 36);
    glVertex2i(29, 36);
    glVertex2i(29, 34);
    glVertex2i(26, 34);
    glEnd();
    
    glBegin(GL_QUADS);
  
    glVertex2i(31, 36);
    glVertex2i(34, 36);
    glVertex2i(34, 34);
    glVertex2i(31, 34);
    glEnd();
    
    glBegin(GL_QUADS);
  
    glVertex2i(36, 36);
    glVertex2i(39, 36);
    glVertex2i(39, 34);
    glVertex2i(36, 34);
    glEnd();
    
    glBegin(GL_QUADS);
  
    glVertex2i(41, 36);
    glVertex2i(44, 36);
    glVertex2i(44, 34);
    glVertex2i(41, 34);
    glEnd();
    
    glBegin(GL_QUADS);
  
    glVertex2i(46, 36);
    glVertex2i(49, 36);
    glVertex2i(49, 34);
    glVertex2i(46, 34);
    glEnd();
    
    
    glBegin(GL_QUADS);
  
    glVertex2i(51, 36);
    glVertex2i(54, 36);
    glVertex2i(54, 34);
    glVertex2i(51, 34);
    glEnd();
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glBegin(GL_QUADS);
    glVertex2i(47, 32);
    glVertex2i(53, 32);
    glVertex2i(53, 27);
    glVertex2i(47, 27);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(27, 32);
    glVertex2i(33, 32);
    glVertex2i(33, 27);
    glVertex2i(27, 27);
    glEnd();
    
    
    
    
    
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2i(29, 27);
    glVertex2i(31, 27);
    glVertex2i(31, 20);
    glVertex2i(29, 20);
    glEnd();
    
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2i(49, 27);
    glVertex2i(51, 27);
    glVertex2i(51, 20);
    glVertex2i(49, 20);
    glEnd();
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(27, 20);
    glVertex2f(33, 20);
    glVertex2f(33, 16);
    glVertex2f(27, 16);
    
    glEnd();
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(47, 20);
    glVertex2f(53, 20);
    glVertex2f(53, 16);
    glVertex2f(47, 16);
    
    glEnd();
    
    //circle
    
    circle(2, 2, 23, 74);
    circle(1, 1, 57, 74);
    circle(1.5, 1.5, 25, 60);
    circle(2, 2, 27, 44);
    circle(1.1, 1.1, 47, 44);
    circle(2, 2, 51, 54);
    
    
    //hand
    
    glBegin(GL_QUADS);
    glVertex2f(25, 22);
    glVertex2f(25, 32);
    glVertex2f(26, 32);
    glVertex2f(26, 22);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2f(25, 22);
    glVertex2f(25, 25);
    glVertex2f(24, 25);
    glVertex2f(24, 22);
    glEnd();
    
    
    glBegin(GL_QUADS);
    glVertex2f(54, 22);
    glVertex2f(54, 32);
    glVertex2f(55, 32);
    glVertex2f(55, 22);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2f(56, 22);
    glVertex2f(56, 25);
    glVertex2f(54, 25);
    glVertex2f(54, 22);
    glEnd();
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glBegin(GL_TRIANGLES);
    glVertex2f(40, 40);
    glVertex2f(42, 37);
    glVertex2f(38, 37);
    
    glEnd();
    
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yell
    circle(1, 1, 26, 40);
    circle(4, 1, 34, 40);
    circle(4, 1, 44, 40);
}


void MainWindow(){
    Head();
    glFlush();
    glutSwapBuffers();
    
}







//void timer(int)
//{
//    glutPostRedisplay();
//    glutTimerFunc(1000/200, timer, 0);
//    if (x_position<50) {
//        x_position +=.80;
//
//    }
//
//
//}



int main(int argc,char **argv){





    glutInit(&argc,argv);

    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );

    glutInitWindowPosition(200,200);

    glutInitWindowSize(800,800);

    glutCreateWindow("Graphics");


    init();
//    glutTimerFunc(0, imer,0);
//    glutTimerFunc(0, timer,0);
    glutDisplayFunc(MainWindow);

    glutMainLoop();


    return 0;

}

