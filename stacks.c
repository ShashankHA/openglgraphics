#include<GL/gl.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<iostream>
using namespace std;
static int window;
static int stack_submenu;
static int qsubmenu;
static int count;
static int front=-1;
static int rear=-1;

void topmenu(int num){
  if(num == 0){
    glutDestroyWindow(window);
    exit(0);
  }
}
void drawmenu(int value) {
    if(value == 2)
    {
        if(count==6)
        {
            cout<<"Stack overflow\n";
            glColor3f(1.0,0.0,0.0);
            glPushMatrix();
            glScalef(0.001,0.001,0.001);
            glTranslatef(-900,800, 0);
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'O');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'V');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'R');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'F');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'L');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'O');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'W');
            glPopMatrix();
        }
        if(count==5)
        {
        glColor3f(0.6,0.5,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.3,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        glColor3f(0.0,0.0,1.0);
        glPushMatrix();
        glScalef(0.0003,0.0003,0.0003);
        glTranslated(-2700,-1000, 0);
        glutStrokeCharacter(GLUT_STROKE_ROMAN, '6');
        glPopMatrix();
        count++;
        }
        if(count==4)
        {
        glColor3f(0.6,0.5,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.4,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        glColor3f(0.0,0.0,1.0);
        glPushMatrix();
        glScalef(0.0003,0.0003,0.0003);
        glTranslated(-2700,-1350, 0);
        glutStrokeCharacter(GLUT_STROKE_ROMAN, '5');
        glPopMatrix();
        count++;
        }
        if(count==3)
        {
        glColor3f(0.6,0.5,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.5,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        glColor3f(0.0,0.0,1.0);
        glPushMatrix();
        glScalef(0.0003,0.0003,0.0003);
        glTranslated(-2700,-1700, 0);
        glutStrokeCharacter(GLUT_STROKE_ROMAN, '4');
        glPopMatrix();
        count++;
        }
        if(count==2)
        {
        glColor3f(0.6,0.5,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.6,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        glColor3f(0.0,0.0,1.0);
        glPushMatrix();
        glScalef(0.0003,0.0003,0.0003);
        glTranslated(-2700,-2050, 0);
        glutStrokeCharacter(GLUT_STROKE_ROMAN, '3');
        glPopMatrix();
        count++;
        }
        if(count==1)
        {
        glColor3f(0.6,0.5,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.7,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        glColor3f(0.0,0.0,1.0);
        glPushMatrix();
        glScalef(0.0003,0.0003,0.0003);
        glTranslated(-2700,-2400, 0);
        glutStrokeCharacter(GLUT_STROKE_ROMAN, '2');
        glPopMatrix();
        count++;
        }
        if(count==0)
        {
        glColor3f(0.6,0.5,0.0);
        glPushMatrix();
        //j=(-0.8+count);
        glTranslated(-0.8,-0.8,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        glColor3f(0.0,0.0,1.0);
        glPushMatrix();
        glScalef(0.0003,0.0003,0.0003);
        glTranslated(-2700,-2750, 0);
        glutStrokeCharacter(GLUT_STROKE_ROMAN, '1');
        glPopMatrix();
        count++;
        }
      }

   else if(value == 4){
    glutDestroyWindow(window);
    exit(0);
  }
  else if(value == 3)
  {
        if(count==0)
        {
            cout<<"Stack underflow\n";
            glColor3f(1.0,0.0,0.0);
            glPushMatrix();
            glScalef(0.001,0.001,0.001);
            glTranslatef(-900,800, 0);
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'N');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'D');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'R');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'F');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'L');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'O');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'W');
            glPopMatrix();
        }
        if(count==1)
        {
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.8,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        count--;
        }
        if(count==2)
        {
               glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.7,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        count--;
        }
        if(count==3)
        {
               glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.6,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        count--;
        }

        if(count==4)
        {
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.5,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        count--;
        }

        if(count==5)
        {
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.4,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        count--;
        }

        if(count==6)
        {
        count--;
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslated(-0.8,-0.3,0.0);
        glRotatef(90,1.0,0.0,0.0);
        glutSolidTorus(0.05,0.1,50,50);
        glPopMatrix();
        }
  }
      glFlush();
}
void drawmenu1(int value)
{
    if(value == 8)
    {
        if(rear==4)
         {
            cout<<"Queue Full\n";
            glColor3f(1.0,0.0,0.0);
            glPushMatrix();
            glScalef(0.001,0.001,0.001);
            glTranslatef(100,800, 0);
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'Q');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'F');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'L');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'L');
            glPopMatrix();
          }
          else
          {
                if(front==-1)
                    front=0;
                rear=rear+1;

                if(rear==4)
                {
                    glColor3f(0.6,0.5,0.0);
                    glPushMatrix();
                    glTranslated(0.4,-0.8,0.0);
                    glRotatef(90,0.0,1.0,0.0);
                    glutSolidTorus(0.05,0.1,50,50);
                    glPopMatrix();
                    glColor3f(0.0,0.0,1.0);
                    glPushMatrix();
                    glScalef(0.0003,0.0003,0.0003);
                    glTranslated(1270,-2750, 0);
                    glutStrokeCharacter(GLUT_STROKE_ROMAN, '5');
                    glPopMatrix();
                }
                if(rear==3)
                {
                    glColor3f(0.6,0.5,0.0);
                    glPushMatrix();
                    glTranslated(0.3,-0.8,0.0);
                    glRotatef(90,0.0,1.0,0.0);
                    glutSolidTorus(0.05,0.1,50,50);
                    glPopMatrix();
                    glColor3f(0.0,0.0,1.0);
                    glPushMatrix();
                    glScalef(0.0003,0.0003,0.0003);
                    glTranslated(950,-2750, 0);
                    glutStrokeCharacter(GLUT_STROKE_ROMAN, '4');
                    glPopMatrix();
                }
                if(rear==2)
                {
                    glColor3f(0.6,0.5,0.0);
                    glPushMatrix();
                    glTranslated(0.2,-0.8,0.0);
                    glRotatef(90,0.0,1.0,0.0);
                    glutSolidTorus(0.05,0.1,50,50);
                    glPopMatrix();
                    glColor3f(0.0,0.0,1.0);
                    glPushMatrix();
                    glScalef(0.0003,0.0003,0.0003);
                    glTranslated(610,-2750, 0);
                    glutStrokeCharacter(GLUT_STROKE_ROMAN, '3');
                    glPopMatrix();
                }
                if(rear==1)
                {
                    glColor3f(0.6,0.5,0.0);
                    glPushMatrix();
                    glTranslated(0.1,-0.8,0.0);
                    glRotatef(90,0.0,1.0,0.0);
                    glutSolidTorus(0.05,0.1,50,50);
                    glPopMatrix();
                    glColor3f(0.0,0.0,1.0);
                    glPushMatrix();
                    glScalef(0.0003,0.0003,0.0003);
                    glTranslated(300,-2750, 0);
                    glutStrokeCharacter(GLUT_STROKE_ROMAN, '2');
                    glPopMatrix();
                }
                if(rear==0)
                {
                    glColor3f(0.6,0.5,0.0);
                    glPushMatrix();
                    glTranslated(0.0,-0.8,0.0);
                    glRotatef(90,0.0,1.0,0.0);
                    glutSolidTorus(0.05,0.1,50,50);
                    glPopMatrix();
                    glColor3f(0.0,0.0,1.0);
                    glPushMatrix();
                    glScalef(0.0003,0.0003,0.0003);
                    glTranslated(-10,-2750, 0);
                    glutStrokeCharacter(GLUT_STROKE_ROMAN, '1');
                    glPopMatrix();
                 }
           }
     }
  else if(value == 10)
  {
    glutDestroyWindow(window);
    exit(0);
  }
  else if(value == 9)
  {
        if(front==-1 || front > rear)
        {
            cout<<"Queue Empty\n";
            glColor3f(1.0,0.0,0.0);
            glPushMatrix();
            glScalef(0.001,0.001,0.001);
            glTranslatef(50,800, 0);
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'Q');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'M');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'P');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'T');
            glutStrokeCharacter(GLUT_STROKE_ROMAN, 'Y');
            glPopMatrix();
        }
        if(front==4)
        {
            glColor3f(0.0,0.0,0.0);
            glPushMatrix();
            glTranslated(0.4,-0.8,0.0);
            glRotatef(90,0.0,1.0,0.0);
            glutSolidTorus(0.05,0.1,50,50);
            glPopMatrix();
        }
        if(front==3)
        {
            glColor3f(0.0,0.0,0.0);
            glPushMatrix();
            glTranslated(0.3,-0.8,0.0);
            glRotatef(90,0.0,1.0,0.0);
            glutSolidTorus(0.05,0.1,50,50);
            glPopMatrix();
        }
         if(front==2)
        {
            glColor3f(0.0,0.0,0.0);
            glPushMatrix();
            glTranslated(0.2,-0.8,0.0);
            glRotatef(90,0.0,1.0,0.0);
            glutSolidTorus(0.05,0.1,50,50);
            glPopMatrix();
        }
        if(front==1)
        {
            glColor3f(0.0,0.0,0.0);
            glPushMatrix();
            glTranslated(0.1,-0.8,0.0);
            glRotatef(90,0.0,1.0,0.0);
            glutSolidTorus(0.05,0.1,50,50);
            glPopMatrix();
        }
         if(front==0)
        {
            glColor3f(0.0,0.0,0.0);
            glPushMatrix();
            glTranslated(0.0,-0.8,0.0);
            glRotatef(90,0.0,1.0,0.0);
            glutSolidTorus(0.05,0.1,50,50);
            glPopMatrix();
        }
        if(front==rear)
            front=rear=-1;
        else
            front++;
  }
  glFlush();

}


void createMenu(void)
{
    stack_submenu = glutCreateMenu(drawmenu);
    glutAddMenuEntry("Push", 2);
    glutAddMenuEntry("Pop", 3);
    glutAddMenuEntry("Exit", 4);;
    qsubmenu = glutCreateMenu(drawmenu1);
    glutAddMenuEntry("add", 8);
    glutAddMenuEntry("remove", 9);
    glutAddMenuEntry("Exit", 10);
    glutCreateMenu(topmenu);
    glutAddSubMenu("Stack", stack_submenu);
    glutAddSubMenu("Queue", qsubmenu);
    glutAddMenuEntry("Quit", 0);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
void display(void)
{

   glFlush();
}
void mouse(int button,int status,int x,int y )

{
    if(button==GLUT_MIDDLE_BUTTON && status==GLUT_DOWN)

    {
        cout<<"middle button pressed\n";
         glColor3f(0.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex3f(-1.0,.6,0);
            glVertex3f(-1.0,1.0,0);
            glVertex3f(0.0,1.0,0);
            glVertex3f(0.0,0.6,0);
            glEnd();
            glBegin(GL_POLYGON);
            glVertex3f(0.0,.6,0);
            glVertex3f(0.0,1.0,0);
            glVertex3f(1.0,1.0,0);
            glVertex3f(1.0,0.6,0);
            glEnd();
    }
    glFlush();
}

void init()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glEnable(GL_DEPTH_TEST);
  glColor3f(0.0,1.0,0.0);
  glPushMatrix();
  glScalef(0.0009,0.0009,0.0009);
  glTranslatef(-1000,800.0, 0);
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'C');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'O');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'M');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'P');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'T');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'R');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'G');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'R');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'A');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'P');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'H');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'I');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'C');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'S');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'O');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'P');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'N');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
  glPopMatrix();
  glColor3f(0.0,1.0,0.0);
  glPushMatrix();
  glScalef(0.0009,0.0009,0.0009);
  glTranslatef(-700,600.0, 0);
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'N');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'D');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'D');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'X');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'P');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'R');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'I');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'M');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'N');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'T');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
  glPopMatrix();
  glColor3f(1.0,0.0,1.0);
  glPushMatrix();
  glScalef(0.0009,0.0009,0.0009);
  glTranslatef(-800,300.0, 0);
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'S');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'T');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'A');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'C');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'K');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'S');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ' );
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'A');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'N');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'D');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ' );
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'Q');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'U');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'S');
  glPopMatrix();
  glColor3f(0.0,1.0,1.0);
  glPushMatrix();
  glScalef(0.0009,0.0009,0.0009);
  glTranslatef(100,-800.0, 0);
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'P');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'R');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'S');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'S');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E' );
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'N');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'T');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'E');
  glutStrokeCharacter(GLUT_STROKE_ROMAN, 'R' );
  glutStrokeCharacter(GLUT_STROKE_ROMAN, ' ');
  glPopMatrix();
  glutSwapBuffers();
}

void key(unsigned char s,int x,int y)
{
    if(s==13)
    {
      glClear(GL_COLOR_BUFFER_BIT);
      createMenu();
    }
    glFlush();
}
int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    window = glutCreateWindow("Stacks and queues");
    glClearColor(0.0,0.0,0.0,0.0);
    glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutMouseFunc(mouse);
    glutMainLoop();
    return EXIT_SUCCESS;
}
