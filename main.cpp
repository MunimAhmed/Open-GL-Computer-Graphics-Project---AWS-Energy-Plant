#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<Windows.h>
#include<Mmsystem.h>
#define PI 3.14159265358979323846
int val;

void circleSolid(float x, float y, float radius){
	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();
}

GLfloat CloudPosition1 = 0.0f;
GLfloat CloudSpeed1 = 0.004f;
GLfloat CloudPosition2 = 0.0f;
GLfloat CloudSpeed2 = 0.003f;

void CircleForCloud(GLfloat a, GLfloat b, GLfloat r)
{
    int i;

    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(245, 245, 245);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void Cloud1()
{
    CircleForCloud(-0.93f, 0.8f, 0.05f);
    CircleForCloud(-0.88f, 0.82f, 0.05f);
    CircleForCloud(-0.83f, 0.85f, 0.06f);
    CircleForCloud(-0.78f, 0.82f, 0.06f);
    CircleForCloud(-0.73f, 0.78f, 0.04f);
    CircleForCloud(-0.75f, 0.75f, 0.05f);
    CircleForCloud(-0.78f, 0.74f, 0.04f);
    CircleForCloud(-0.81f, 0.71f, 0.05f);
    CircleForCloud(-0.84f, 0.78f, 0.04f);
    CircleForCloud(-0.87f, 0.7f, 0.05f);
    CircleForCloud(-0.9f, 0.75f, 0.04f);
}



void Cloud2()
{
    CircleForCloud(0.93f, 0.8f, 0.05f);
    CircleForCloud(0.85f, 0.82f, 0.05f);
    CircleForCloud(0.8f, 0.85f, 0.06f);
    CircleForCloud(0.75f, 0.82f, 0.06f);
    CircleForCloud(0.7f, 0.78f, 0.04f);
    CircleForCloud(0.73f, 0.75f, 0.05f);
    CircleForCloud(0.78f, 0.76f, 0.04f);
    CircleForCloud(0.81f, 0.71f, 0.05f);
    CircleForCloud(0.84f, 0.78f, 0.04f);
    CircleForCloud(0.87f, 0.7f, 0.05f);
    CircleForCloud(0.9f, 0.75f, 0.04f);
}

void CloudAnimation1(int value)
{
    if(CloudPosition1 > 1.8)
        CloudPosition1 = -1.6f;

    CloudPosition1 += CloudSpeed1;

    glutPostRedisplay();

    glutTimerFunc(40, CloudAnimation1, 0);
}



void CloudAnimation2(int value)
{
    if(CloudPosition2 > 1.0)
        CloudPosition2 = -1.0f;

    CloudPosition2 += CloudSpeed2;

    glutPostRedisplay();

    glutTimerFunc(40, CloudAnimation2, 0);
}


//tower
void tower(int val)
{
    //LEFT PILLAR
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.8f,0.4f);
    glEnd();

    glPushMatrix();
    glTranslatef(0.03,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.8f,0.4f);
    glEnd();
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.73f,0.4f);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.03,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.73f,0.4f);
    glEnd();
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.8f,0.4f);
    glVertex2f(-0.73f,0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.7f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.83f,-0.35f);
    glEnd();

    glPushMatrix();
    glTranslatef(0,0.15,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.71f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.82f,-0.35f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.3,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.82f,-0.5f);
    glVertex2f(-0.71f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.82f,-0.5f);
    glVertex2f(-0.715f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.71f,-0.5f);
    glVertex2f(-0.815f,-0.35f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.45,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.81f,-0.5f);
    glVertex2f(-0.72f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.82f,-0.5f);
    glVertex2f(-0.715f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.71f,-0.5f);
    glVertex2f(-0.815f,-0.35f);
    glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.6,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.81f,-0.5f);
    glVertex2f(-0.72f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
   glColor3ub(0, 0, 0);
    glVertex2f(-0.81f,-0.5f);
    glVertex2f(-0.72f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.72f,-0.5f);
    glVertex2f(-0.8f,-0.35f);
    glEnd();
       glPopMatrix();

   glPushMatrix();
    glTranslatef(0,0.75,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.8f,-0.5f);
    glVertex2f(-0.73f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.81f,-0.5f);
    glVertex2f(-0.73f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.72f,-0.5f);
    glVertex2f(-0.8f,-0.35f);
    glEnd();
   glPopMatrix();

    glBegin(GL_QUADS);
   glColor3ub(0, 0, 0);
    glVertex2f(-0.85f,-0.5f);
    glVertex2f(-0.85f,-0.55f);
    glVertex2f(-0.68f,-0.55f);
    glVertex2f(-0.68f,-0.5f);
    glEnd();



    //RIGHT PILLAR
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.83f,-0.5f);
    glVertex2f(0.8f,0.4f);
    glEnd();

     glPushMatrix();
    glTranslatef(-0.03,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.83f,-0.5f);
    glVertex2f(0.8f,0.4f);
    glEnd();
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.73f,0.4f);
    glEnd();

     glPushMatrix();
    glTranslatef(0.03,0,0);
    glBegin(GL_LINES);
   glColor3ub(0, 0, 0);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.73f,0.4f);
    glEnd();
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.8f,0.4f);
    glVertex2f(0.73f,0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.83f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.83f,-0.5f);
    glVertex2f(0.7f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.83f,-0.35f);
    glEnd();

    glPushMatrix();
    glTranslatef(0,0.15,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.83f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.83f,-0.5f);
    glVertex2f(0.71f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.82f,-0.35f);
    glEnd();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0,0.3,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.82f,-0.5f);
    glVertex2f(0.71f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.82f,-0.5f);
    glVertex2f(0.715f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.71f,-0.5f);
    glVertex2f(0.815f,-0.35f);
    glEnd();
      glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.45,0);
    glBegin(GL_LINES);
   glColor3ub(0, 0, 0);
    glVertex2f(0.81f,-0.5f);
    glVertex2f(0.72f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.82f,-0.5f);
    glVertex2f(0.715f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.71f,-0.5f);
    glVertex2f(0.815f,-0.35f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.6,0);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.81f,-0.5f);
    glVertex2f(0.72f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.81f,-0.5f);
    glVertex2f(0.72f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.72f,-0.5f);
    glVertex2f(0.8f,-0.35f);
    glEnd();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(0,0.75,0);
    glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
    glVertex2f(0.8f,-0.5f);
    glVertex2f(0.73f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
glColor3ub(0, 0, 0);
    glVertex2f(0.81f,-0.5f);
    glVertex2f(0.73f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
    glVertex2f(0.72f,-0.5f);
    glVertex2f(0.8f,-0.35f);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
   glColor3ub(0, 0, 0);
    glVertex2f(0.85f,-0.5f);
    glVertex2f(0.85f,-0.55f);
    glVertex2f(0.68f,-0.55f);
    glVertex2f(0.68f,-0.5f);
    glEnd();


    glLineWidth(1);
    //CURVED ROD
    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(-0.73f,0.4f);
    glVertex2f(-0.6f,0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.6f,0.2f);
    glVertex2f(-0.4f,0.05f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(-0.4f,0.05f);
    glVertex2f(-0.15f,-0.05f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(-0.15f,-0.05f);
    glVertex2f(-0.05f,-0.07f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(-0.05f,-0.07f);
    glVertex2f(0.0f,-0.07f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(-0.8f,0.4f);
    glVertex2f(-0.9f,0.2f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(-0.9f,0.2f);
    glVertex2f(-1.0f,0.05f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(0.73f,0.4f);
    glVertex2f(0.6f,0.2f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(0.6f,0.2f);
    glVertex2f(0.4f,0.05f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(0.4f,0.05f);
    glVertex2f(0.15f,-0.05f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(0.15f,-0.05f);
    glVertex2f(0.05f,-0.07f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.05f,-0.07f);
    glVertex2f(0.0f,-0.07f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(0.8f,0.4f);
    glVertex2f(0.9f,0.2f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 0, 0);
    glVertex2f(0.9f,0.2f);
    glVertex2f(1.0f,0.05f);
    glEnd();

}

void star()
{

    glPushMatrix();
    glPushMatrix();
    glTranslatef(0.0,0.8,0.0);                              // star 1

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.37,0.8,0.0);                              // star 2

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.65,0.7,0.0);                      // star 3

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.73,0.9,0.0);                          // star 4

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3,0.76,0.0);                          // star 6

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.81,0.78,0.0);                          // star 7

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.57,0.84,0.0);                              // star 8

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4,0.9,0.0);                              // star 8

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.7,0.83,0.0);                              // star 9

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glLoadIdentity();

    glTranslatef(0.1,0.72,0.0);                              // star 10

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4,0.7,0.0);                              // star 11

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.75,0.75,0.0);                              // star 12

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.1,0.89,0.0);                              // star 13

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6,0.84,0.0);                              // star 14

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2,0.78,0.0);                              // star 15

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2,0.73,0.0);                              // star 16

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.1,0.81,0.0);                              // star 17

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.63,0.77,0.0);                              // star 18

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8,0.7,0.0);                              // star 19

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4,0.7,0.0);                              // star 20

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8,0.84,0.0);                              // star 21

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2,0.88,0.0);                              // star 22

    glScalef(0.1,0.1,0.0);
    glBegin(GL_POLYGON); // start middle part
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 1
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.03f,0.0f);
    glVertex2f(0.0f,0.07f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 2
    glColor3ub(255,255,255);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 3
    glColor3ub(255,255,255);
    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.07f,-0.14f);
    glVertex2f(0.0f,-0.09f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 4
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.09f);
    glVertex2f(0.07f,-0.14f);
    glVertex2f(0.04f,-0.05f);

    glEnd();

    glBegin(GL_TRIANGLES); // star triangle 5
    glColor3ub(255,255,255);
    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glPopMatrix();


    glPopMatrix();
}


void tower2(int val){
    //LEFT PILLAR
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.8f,0.4f);
    glEnd();

    glPushMatrix();
    glTranslatef(0.03,0,0);
    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.8f,0.4f);
    glEnd();
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.73f,0.4f);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.03,0,0);
    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.73f,0.4f);
    glEnd();
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.8f,0.4f);
    glVertex2f(-0.73f,0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.7f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.83f,-0.35f);
    glEnd();

    glPushMatrix();
    glTranslatef(0,0.15,0);
    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.83f,-0.5f);
    glVertex2f(-0.71f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.82f,-0.35f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.3,0);
    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.82f,-0.5f);
    glVertex2f(-0.71f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.82f,-0.5f);
    glVertex2f(-0.715f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.71f,-0.5f);
    glVertex2f(-0.815f,-0.35f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.45,0);
    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.81f,-0.5f);
    glVertex2f(-0.72f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.82f,-0.5f);
    glVertex2f(-0.715f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.71f,-0.5f);
    glVertex2f(-0.815f,-0.35f);
    glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.6,0);
    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.81f,-0.5f);
    glVertex2f(-0.72f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
   glColor3ub(192, 192, 192);
    glVertex2f(-0.81f,-0.5f);
    glVertex2f(-0.72f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.72f,-0.5f);
    glVertex2f(-0.8f,-0.35f);
    glEnd();
       glPopMatrix();

   glPushMatrix();
    glTranslatef(0,0.75,0);
    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.8f,-0.5f);
    glVertex2f(-0.73f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.81f,-0.5f);
    glVertex2f(-0.73f,-0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(192, 192, 192);
    glVertex2f(-0.72f,-0.5f);
    glVertex2f(-0.8f,-0.35f);
    glEnd();
   glPopMatrix();

    glBegin(GL_QUADS);
   glColor3ub(0, 0, 0);
    glVertex2f(-0.85f,-0.5f);
    glVertex2f(-0.85f,-0.55f);
    glVertex2f(-0.68f,-0.55f);
    glVertex2f(-0.68f,-0.5f);
    glEnd();

}


void lowerroaddivider(int val)
{
    //Lower road divider (upper part)

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-1.0f, -0.67f);
    glVertex2f(-0.95f, -0.67f);
    glVertex2f(-0.95f, -0.66f);
    glVertex2f(-1.0f, -0.66f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.92f, -0.66f);
    glVertex2f(-0.87f, -0.66f);
    glVertex2f(-0.87f, -0.67f);
    glVertex2f(-0.92f, -0.67f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.84f, -0.66f);
    glVertex2f(-0.79f, -0.66f);
    glVertex2f(-0.79f, -0.67f);
    glVertex2f(-0.84f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.76f, -0.66f);
    glVertex2f(-0.71f, -0.66f);
    glVertex2f(-0.71f, -0.67f);
    glVertex2f(-0.76f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.68f, -0.66f);
    glVertex2f(-0.63f, -0.66f);
    glVertex2f(-0.63f, -0.67f);
    glVertex2f(-0.68f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.60f, -0.66f);
    glVertex2f(-0.55f, -0.66f);
    glVertex2f(-0.55f, -0.67f);
    glVertex2f(-0.60f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.52f, -0.66f);
    glVertex2f(-0.47f, -0.66f);
    glVertex2f(-0.47f, -0.67f);
    glVertex2f(-0.52f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.44f, -0.66f);
    glVertex2f(-0.39f, -0.66f);
    glVertex2f(-0.39f, -0.67f);
    glVertex2f(-0.44f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.36f, -0.66f);
    glVertex2f(-0.31f, -0.66f);
    glVertex2f(-0.31f, -0.67f);
    glVertex2f(-0.36f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.28f, -0.66f);
    glVertex2f(-0.23f, -0.66f);
    glVertex2f(-0.23f, -0.67f);
    glVertex2f(-0.28f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.20f, -0.66f);
    glVertex2f(-0.15f, -0.66f);
    glVertex2f(-0.15f, -0.67f);
    glVertex2f(-0.20f, -0.67f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.12f, -0.66f);
    glVertex2f(-0.08f, -0.66f);
    glVertex2f(-0.08f, -0.67f);
    glVertex2f(-0.12f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.04f, -0.66f);
    glVertex2f(-0.00f, -0.66f);
    glVertex2f(-0.00f, -0.67f);
    glVertex2f(-0.04f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.04f, -0.66f);
    glVertex2f(0.08f, -0.66f);
    glVertex2f(0.08f, -0.67f);
    glVertex2f(0.04f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.12f, -0.66f);
    glVertex2f(0.16f, -0.66f);
    glVertex2f(0.16f, -0.67f);
    glVertex2f(0.12f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.20f, -0.66f);
    glVertex2f(0.24f, -0.66f);
    glVertex2f(0.24f, -0.67f);
    glVertex2f(0.20f, -0.67f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.28f, -0.66f);
    glVertex2f(0.32f, -0.66f);
    glVertex2f(0.32f, -0.67f);
    glVertex2f(0.28f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.36f, -0.66f);
    glVertex2f(0.40f, -0.66f);
    glVertex2f(0.40f, -0.67f);
    glVertex2f(0.36f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.44f, -0.66f);
    glVertex2f(0.48f, -0.66f);
    glVertex2f(0.48f, -0.67f);
    glVertex2f(0.44f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.52f, -0.66f);
    glVertex2f(0.56f, -0.66f);
    glVertex2f(0.56f, -0.67f);
    glVertex2f(0.52f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.60f, -0.66f);
    glVertex2f(0.64f, -0.66f);
    glVertex2f(0.64f, -0.67f);
    glVertex2f(0.60f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.68f, -0.66f);
    glVertex2f(0.72f, -0.66f);
    glVertex2f(0.72f, -0.67f);
    glVertex2f(0.68f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.76f, -0.66f);
    glVertex2f(0.80f, -0.66f);
    glVertex2f(0.80f, -0.67f);
    glVertex2f(0.76f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.84f, -0.66f);
    glVertex2f(0.88f, -0.66f);
    glVertex2f(0.88f, -0.67f);
    glVertex2f(0.84f, -0.67f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.92f, -0.66f);
    glVertex2f(0.96f, -0.66f);
    glVertex2f(0.96f, -0.67f);
    glVertex2f(0.92f, -0.67f);

    glEnd();

    //road divider of lower road

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-1.0f, -0.75f);
    glVertex2f(1.0f, -0.75f);
    glVertex2f(1.0f, -0.74f);
    glVertex2f(-1.0f, -0.74f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-1.0f, -0.77f);
    glVertex2f(1.0f, -0.77f);
    glVertex2f(1.0f, -0.76f);
    glVertex2f(-1.0f, -0.76f);

    glEnd();


    //lower roar divider(lower part)


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-1.0f, -0.85f);
    glVertex2f(-0.95f, -0.85f);
    glVertex2f(-0.95f, -0.84f);
    glVertex2f(-1.0f, -0.84f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.92f, -0.84f);
    glVertex2f(-0.87f, -0.84f);
    glVertex2f(-0.87f, -0.85f);
    glVertex2f(-0.92f, -0.85f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.84f, -0.84f);
    glVertex2f(-0.79f, -0.84f);
    glVertex2f(-0.79f, -0.85f);
    glVertex2f(-0.84f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.76f, -0.84f);
    glVertex2f(-0.71f, -0.84f);
    glVertex2f(-0.71f, -0.85f);
    glVertex2f(-0.76f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.68f, -0.84f);
    glVertex2f(-0.63f, -0.84f);
    glVertex2f(-0.63f, -0.85f);
    glVertex2f(-0.68f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.60f, -0.84f);
    glVertex2f(-0.55f, -0.84f);
    glVertex2f(-0.55f, -0.85f);
    glVertex2f(-0.60f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.52f, -0.84f);
    glVertex2f(-0.47f, -0.84f);
    glVertex2f(-0.47f, -0.85f);
    glVertex2f(-0.52f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.44f, -0.84f);
    glVertex2f(-0.39f, -0.84f);
    glVertex2f(-0.39f, -0.85f);
    glVertex2f(-0.44f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.36f, -0.84f);
    glVertex2f(-0.31f, -0.84f);
    glVertex2f(-0.31f, -0.85f);
    glVertex2f(-0.36f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.28f, -0.84f);
    glVertex2f(-0.23f, -0.84f);
    glVertex2f(-0.23f, -0.85f);
    glVertex2f(-0.28f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.20f, -0.84f);
    glVertex2f(-0.15f, -0.84f);
    glVertex2f(-0.15f, -0.85f);
    glVertex2f(-0.20f, -0.85f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.12f, -0.84f);
    glVertex2f(-0.08f, -0.84f);
    glVertex2f(-0.08f, -0.85f);
    glVertex2f(-0.12f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.04f, -0.84f);
    glVertex2f(-0.00f, -0.84f);
    glVertex2f(-0.00f, -0.85f);
    glVertex2f(-0.04f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.04f, -0.84f);
    glVertex2f(0.08f, -0.84f);
    glVertex2f(0.08f, -0.85f);
    glVertex2f(0.04f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.12f, -0.84f);
    glVertex2f(0.16f, -0.84f);
    glVertex2f(0.16f, -0.85f);
    glVertex2f(0.12f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.20f, -0.84f);
    glVertex2f(0.24f, -0.84f);
    glVertex2f(0.24f, -0.85f);
    glVertex2f(0.20f, -0.85f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.28f, -0.84f);
    glVertex2f(0.32f, -0.84f);
    glVertex2f(0.32f, -0.85f);
    glVertex2f(0.28f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.36f, -0.84f);
    glVertex2f(0.40f, -0.84f);
    glVertex2f(0.40f, -0.85f);
    glVertex2f(0.36f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.44f, -0.84f);
    glVertex2f(0.48f, -0.84f);
    glVertex2f(0.48f, -0.85f);
    glVertex2f(0.44f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.52f, -0.84f);
    glVertex2f(0.56f, -0.84f);
    glVertex2f(0.56f, -0.85f);
    glVertex2f(0.52f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.60f, -0.84f);
    glVertex2f(0.64f, -0.84f);
    glVertex2f(0.64f, -0.85f);
    glVertex2f(0.60f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.68f, -0.84f);
    glVertex2f(0.72f, -0.84f);
    glVertex2f(0.72f, -0.85f);
    glVertex2f(0.68f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.76f, -0.84f);
    glVertex2f(0.80f, -0.84f);
    glVertex2f(0.80f, -0.85f);
    glVertex2f(0.76f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.84f, -0.84f);
    glVertex2f(0.88f, -0.84f);
    glVertex2f(0.88f, -0.85f);
    glVertex2f(0.84f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.92f, -0.84f);
    glVertex2f(0.96f, -0.84f);
    glVertex2f(0.96f, -0.85f);
    glVertex2f(0.92f, -0.85f);

    glEnd();
}

void lampPost_panelRoad(int val){


//main panel

    glBegin(GL_POLYGON);
    glColor3f(0.42f, 0.39f, 0.47f);

        glVertex2f(-0.025f, 0.2f);
        glVertex2f(0.025f, 0.2f);
        glVertex2f(0.025f, -0.9f);
        glVertex2f(-0.025f, -0.9f);

    glEnd();

    //////////////////////////

//right panel shadow

    glBegin(GL_POLYGON);
    glColor3f(0.27f, 0.25f, 0.30f);

        glVertex2f(0.0f, 0.2f);
        glVertex2f(0.025f, 0.2f);
        glVertex2f(0.025f, -0.9f);
        glVertex2f(0.0f, -0.9f);

    glEnd();

    ////////////////////////////
    ///////////////////////////


//joint

    glBegin(GL_POLYGON);
    glColor3f(0.42f, 0.39f, 0.47f);

        glVertex2f(-0.05f, 0.2f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(-0.05f, 0.3f);
        glVertex2f(-0.1f, 0.3f);

    glEnd();

    /////////////////////

    glBegin(GL_POLYGON);
    glColor3f(0.18f, 0.16f, 0.20f);

        glVertex2f(0.05f, 0.2f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(0.05f, 0.3f);
        glVertex2f(0.1f, 0.3f);

    glEnd();

    /////////////////////////////////////////
    ////////////////////////////////////////

//tube_holder

    glBegin(GL_POLYGON);
    glColor3f(0.42f, 0.39f, 0.47f);

        glVertex2f(-0.05f, 0.25f);
        glVertex2f(-0.05f, 0.3f);
        glVertex2f(-0.55f, 0.3f);
        glVertex2f(-0.55f, 0.25f);

    glEnd();

    ////////////////

    glBegin(GL_POLYGON);
    glColor3f(0.18f, 0.16f, 0.20f);

        glVertex2f(0.05f, 0.25f);
        glVertex2f(0.05f, 0.3f);
        glVertex2f(0.55f, 0.3f);
        glVertex2f(0.55f, 0.25f);

    glEnd();

    //////////////////////////////////
    /////////////////////////////////


//tube

    glBegin(GL_POLYGON);
    glColor3f(0.27f, 0.25f, 0.30f);

        glVertex2f(-0.55f, 0.25f);
        glVertex2f(-0.6f, 0.2f);
        glVertex2f(-0.1f, 0.2f);
        glVertex2f(-0.15f, 0.25f);

    glEnd();

    ///////////////////

    glBegin(GL_POLYGON);
    glColor3f(0.27f, 0.25f, 0.30f);

        glVertex2f(0.55f, 0.25f);
        glVertex2f(0.6f, 0.2f);
        glVertex2f(0.1f, 0.2f);
        glVertex2f(0.15f, 0.25f);

    glEnd();

    /////////////////////////////////
    ////////////////////////////////

    //solar panel


    glBegin(GL_POLYGON);
    glColor3f(0.17f, 0.17f, 0.28f);

        glVertex2f(-0.45f, 0.38f);
        glVertex2f(0.45f, 0.38f);
        glVertex2f(0.55f, 0.63f);
        glVertex2f(-0.35f, 0.63f);

    glEnd();

//inside partition

    glLineWidth(0.5);
    glBegin(GL_LINES);
     glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(-0.27f, 0.38f);
        glVertex2f(-0.17f, 0.63f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(-0.09f, 0.38f);
        glVertex2f(0.01f, 0.63f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(0.09f, 0.38f);
        glVertex2f(0.19f, 0.63f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(0.27f, 0.38f);
        glVertex2f(0.37f, 0.63f);

    glEnd();

    ////////////

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(-0.40f, 0.505f);
        glVertex2f(0.50f, 0.505f);

    glEnd();

    ///////////////////////


//sideBar
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.4f, 0.0f);

        glVertex2f(0.55f, 0.63f);
        glVertex2f(0.60f, 0.58f);
        glVertex2f(0.50f, 0.33f);
        glVertex2f(0.45f, 0.38f);

    glEnd();
//downBar
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.3f, 0.0f);

        glVertex2f(0.45f, 0.38f);
        glVertex2f(0.50f, 0.33f);
        glVertex2f(-0.40f, 0.33f);
        glVertex2f(-0.45f, 0.38f);

    glEnd();

    /////////////////////////////

//holder

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.52f, 0.47f);

        glVertex2f(-0.35f, 0.3f);
        glVertex2f(-0.25f, 0.3f);
        glVertex2f(-0.25f, 0.35f);
        glVertex2f(-0.35f, 0.35f);

    glEnd();

    //////////////////////

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.52f, 0.47f);

        glVertex2f(0.35f, 0.3f);
        glVertex2f(0.25f, 0.3f);
        glVertex2f(0.25f, 0.35f);
        glVertex2f(0.35f, 0.35f);

    glEnd();

    if(val == 9){
        glBegin(GL_POLYGON);
        glColor4f(1.0f, 1.0f, 0.0f, 5.0f);

            glVertex2f(0.6f, 0.2f);
            glVertex2f(0.1f, 0.2f);
            glVertex2f(0.15f, 0.15f);
            glVertex2f(0.55f, 0.15f);

        glEnd();

        glBegin(GL_POLYGON);
        glColor4f(1.0f, 1.0f, 0.0f, 5.0f);

            glVertex2f(-0.6f, 0.2f);
            glVertex2f(-0.1f, 0.2f);
            glVertex2f(-0.15f, 0.15f);
            glVertex2f(-0.55f, 0.15f);

        glEnd();
    }

}

//blue car
GLfloat blueCarPosition = 0.0f;
GLfloat blueCarSpeed = 0.5f;
GLfloat angleBluecar1 = 0.0f;
GLfloat angleBlueCar2= 0.0f;

void updateBlueCar1(int value)
{

    angleBluecar1+=2.0f;
    if(angleBluecar1 > 360.0)
    {
        angleBluecar1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(1, updateBlueCar1, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updatBlueCar2(int value)
{

    angleBlueCar2+=2.0f;
    if(angleBlueCar2> 360.0)
    {
        angleBlueCar2-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(1, updatBlueCar2, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updateBlueCar3(int value)//for ship
{
     blueCarPosition -= 1;
    if( blueCarPosition < -90)

    {
         blueCarPosition = 70;
    }

    glutPostRedisplay();
    glutTimerFunc(50, updateBlueCar3, 0);
}
void blueCar(int val, int color)
{
    //bluecar body

    glPushMatrix();
    glTranslatef(blueCarPosition,0.0,0.0);
    glBegin(GL_POLYGON);              // car
	glColor3ub(25,25,112);
	if(color==0)
    {
        glColor3ub(153,153,0);
    }


    glVertex2f(1.0f, 1.5f);
	glVertex2f(0.5f, 1.0f);
	glVertex2f(20.5f, 1.0f);
	glVertex2f(21.0f, 1.5f);
	glVertex2f(21.0f, 4.25f);
	glVertex2f(20.0f, 4.0f);
	glVertex2f(17.0f, 4.0f);
	glVertex2f(15.0f, 5.75f);
	glVertex2f(15.5f, 6.0f);
	glVertex2f(9.0f, 6.0f);
	glVertex2f(6.0f, 4.0f);
	glVertex2f(1.0f, 3.0f);


    glEnd();




    glBegin(GL_POLYGON);              // head light
	glColor3ub(255,255,255);


    glVertex2f(1.0f, 2.5f);
	glVertex2f(1.65f, 2.5f);
	glVertex2f(2.5f, 2.8f);
	glVertex2f(1.0f, 2.8f);



	    // x, y

    glEnd();

    if(val==9)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(252, 252, 0);
        glVertex2f(1.5f, 2.8f);
        glVertex2f(-6.5f, 3.8f);
        glVertex2f(-6.5f, 1.3f);
        glEnd();
    }

    glBegin(GL_POLYGON);              // back light
	glColor3ub(255,0,0);
    glVertex2f(20.50f, 3.0f);
	glVertex2f(20.50f, 2.0f);
	glVertex2f(21.0f, 2.0f);
	glVertex2f(21.0f, 3.5f);



	    // x, y

    glEnd();

    glBegin(GL_POLYGON);              // 1st door glasss of car
    glColor3ub(153,206,250);
    if(val==9)
    {
       glColor3ub(0,0,0);
    }

    glVertex2f(6.15f, 4.0f);
	glVertex2f(11.55f, 4.0f);
    glColor3ub(100,149,237);
	glVertex2f(11.55f, 5.70f);
	glVertex2f(9.0f, 5.70f);




    glEnd();

    glBegin(GL_POLYGON);              // 2nd door glasss of car
    glColor3ub(153,206,250);
    if(val==9)
    {
       glColor3ub(0,0,0);
    }

    glVertex2f(12.15f, 4.0f);
	glVertex2f(16.65f, 4.0f);
	  glColor3ub(100,149,237);
	glVertex2f(14.65f, 5.70f);
	glVertex2f(12.15f, 5.70f);




    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(12.0f, 1.25f);    // x, y
	glVertex2f(12.0f, 5.75f);    // x, y

	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(6.0f, 2.25f);    // x, y
	glVertex2f(6.0f, 3.75f);    // x, y

	glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(128,128,128); // Red
	glVertex2f(17.0f, 2.25f);    // x, y
	glVertex2f(17.0f, 3.75f);

	glVertex2f(1.0f, 2.0f);
	glVertex2f(2.0f, 2.0f);

	glVertex2f(1.0f, 1.75f);
	glVertex2f(1.80f, 1.75f);

	glVertex2f(1.0f, 1.55f);
	glVertex2f(1.65f, 1.55f);





	    // x, y

	glEnd();

	glBegin(GL_POLYGON);// front tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// front tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6+x,1.5+y );
        }

        glEnd();

    glBegin(GL_POLYGON);// back tire
	for(int i=0;i<200;i++)
        {
            glColor3ub(46, 46, 46);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// back tire wheel
	for(int i=0;i<200;i++)
        {
            glColor3ub(205, 205, 180);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17+x,1.5+y );
        }



	glEnd();

	glBegin(GL_LINES);// back tire LINE
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);

            float pi=3.1416;
            float A=(i*pi)/200;
            float r=1.65;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(17.05+x,1.5+y );
        }



	glEnd();

	glBegin(GL_LINES);// FRONT tire LINE
	for(int i=0;i<200;i++)
        {
            glColor3ub(128,128,128);

            float pi=3.1416;
            float A=(i*pi)/200;
            float r=1.65;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(6.05+x,1.5+y );
        }



	glEnd();

	glBegin(GL_POLYGON);              // looking glass
	glColor3ub(25,25,112);


    glVertex2f(6.0f, 4.0f);
	glVertex2f(7.0f, 4.0f);
	glVertex2f(7.5f, 4.4f);
	glVertex2f(7.0f, 4.4f);

    glEnd();



                    //ROTATING TIRE
        glPushMatrix();
        glTranslatef(6.0,1.5,0.0);
        glRotatef(angleBluecar1, 0.0f, 0.0f,1.0f);

	    glLineWidth(5.5);
        glBegin(GL_LINES);              // Each set of 4 vertices form a quad
        glColor3ub(128,128,128);

         // Red
        glVertex2f(0.0f, 1.0f);    // x, y
        glVertex2f(0.0f, -1.0f);

        glVertex2f(1.0f, 0.0f);    // x, y
        glVertex2f(-1.0f, 0.0f);


        glEnd();
        glPopMatrix();



        glPushMatrix();
        glTranslatef(17.0,1.5,0.0);
        glRotatef(angleBlueCar2, 0.0f, 0.0f,1.0f);

	    glLineWidth(5.5);
        glBegin(GL_LINES);              // Each set of 4 vertices form a quad
        glColor3ub(128,128,128);

         // Red
        glVertex2f(0.0f, 1.00f);    // x, y
        glVertex2f(0.0f, -1.00f);

        glVertex2f(1.0f, 0.0f);    // x, y
        glVertex2f(-1.0f, 0.0f);


        glEnd();

        glPopMatrix();

        glPopMatrix();

}


//truck
GLfloat truckPosition = 0.0f;
GLfloat truckSpeed = 0.04f;
void updateTruck(int value){ //5
    if(truckPosition > 2.00)
    {
        truckPosition = -0.6f;
    }
    truckPosition += truckSpeed;

    glutPostRedisplay();

    glutTimerFunc(100, updateTruck, 0);
}


    void vehicleTruck(int val){//This is the truck
    glPushMatrix();
    glTranslatef(truckPosition,0.0f, 0.0f);

   //body
    glColor3ub(51,51,255);
    glBegin(GL_POLYGON);
    glVertex2f(-0.9f,-0.86f);
    glVertex2f(-0.68f, -0.86f);
    glVertex2f(-0.68f,-0.67f);
    glVertex2f(-0.9f,-0.67f);
    glEnd();

    //base of the truck
     glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(-0.9f,-0.86f);
    glVertex2f(-0.58f, -0.86f);
    glVertex2f(-0.58f,-0.9f);
    glVertex2f(-0.9f,-0.9f);
    glEnd();

    //front
    glColor3ub(255,255,102);
    glBegin(GL_POLYGON);
    glVertex2f(-0.67f,-0.86f);
    glVertex2f(-0.58f, -0.86f);
    glVertex2f(-0.58f,-0.79f);
    glVertex2f(-0.61f,-0.735f);
    glVertex2f(-0.67f,-0.735f);
    glEnd();

    //wheels
     glColor3ub(0,0,0);
    circleSolid(-0.84f,-0.88f,0.034);
    circleSolid(-0.64f,-0.88f,0.034);
    glColor3ub(0,0,0);
    circleSolid(-0.84f,-0.88f,0.02);
    circleSolid(-0.64f,-0.88f,0.02);

    //door
    glColor3ub(0,0,0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(-.59619,-0.815);
    glVertex2f(-0.61,-0.815);
    glEnd();

    //window
    glColor3ub(153,206,250);
        if(val==9)
    {
       glColor3ub(0,0,0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-0.66,-0.797);
    glVertex2f(-0.596,-0.797);
    glVertex2f(-0.596,-0.781);
    glColor3ub(100,149,237);
    glVertex2f(-0.615,-0.747);
    glVertex2f(-0.66,-0.747);
    glEnd();

    if(val == 9){
    glBegin(GL_TRIANGLES); //light
      glColor3f(1.0f,1.f,0.0f);
      glVertex2f(-0.4f, -0.9f);
      glVertex2f(-0.4f,  -0.8f);
      glVertex2f(-0.58f, -0.85f);
    glEnd();
    }


    glPopMatrix();
    }



    //normal car
    GLfloat carPosition = 0.0f;
    GLfloat carSpeed = 0.05f;
    void updateCar(int value){ //car utso
    if(carPosition < - 2.3)
    {
        carPosition = 1.8f;
    }
    carPosition -= carSpeed;

    glutPostRedisplay();

    glutTimerFunc(100, updateCar, 0);
    }


    //car
    void vehicleCar(int val){//This is the car(utso)
    glPushMatrix();
    glTranslatef(carPosition,0.0f, 0.0f);
    //body
    glColor3ub(255, 153, 51);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,-0.94f);
    glVertex2f(0.275f, -0.94f);
    glVertex2f(0.275f,-0.859f);
    glVertex2f(0.22f,-0.842f);
    glVertex2f(0.18f,-0.758f);
    glVertex2f(0.1f, -0.758f);
    glVertex2f(0.08f,-0.842f);
    glVertex2f(0.0f,-0.856f);
    glEnd();
    //wheels
    glColor3ub(0,0,0);
    circleSolid(0.07,-0.938,0.035);
    circleSolid(0.2,-0.938,0.035);
    //
    glColor3ub(0,0,0);
    glLineWidth(1.1);
    glBegin(GL_LINES);
    glVertex2f(0.141f,-0.758f);
    glVertex2f(0.141f,-0.842f);
    glEnd();
    //window
    glColor3ub(153,206,250);
        if(val==9)
    {
       glColor3ub(0,0,0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(0.071,-0.842);
    glVertex2f(0.132,-0.842);
    glColor3ub(100,149,237);
    glVertex2f(0.132,-0.77);
    glVertex2f(0.106,-0.77);
    glEnd();
    glColor3ub(153,206,250);
        if(val==9)
    {
       glColor3ub(0,0,0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(0.148,-0.842);
    glVertex2f(0.206,-0.842);
    glColor3ub(100,149,237);
    glVertex2f(0.173,-0.77);
    glVertex2f(0.148,-0.77);
    glEnd();
    //door
    glColor3ub(0,0,0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.11,-0.863);
    glVertex2f(0.13,-0.863);
    glVertex2f(0.186,-0.863);
    glVertex2f(0.206,-0.863);
    glColor3ub(255,255,255);
    glEnd();


    if(val == 9){
    glBegin(GL_TRIANGLES); //light
      glColor3f(1.0f,1.f,0.0f);
      glVertex2f(-0.15f, -0.84f);
      glVertex2f(-0.15f,  -0.93f);
      glVertex2f(0.018f, -0.90f);
    glEnd();
    }

    glPopMatrix();
}


GLfloat position_car1 = 0.0f, speed_car1 = 0.03f, rotation_car1 = 0.0f;
void animation_car1(int value)
{

    if(position_car1 > 0.6)
    {
        position_car1 = -0.6f;
    }

    position_car1 += speed_car1;

    glutPostRedisplay();


    glutTimerFunc(200, animation_car1, 0);
}



void bus(int val)
{

    glPushMatrix();
    glTranslatef(position_car1,0,0);


    glScalef(0.2,0.2,0);
    glBegin(GL_QUADS); // bus body
    glColor3ub(249,216,216);
    glVertex2f(-0.2f,0.1f);
    glVertex2f(-0.2f,-0.1f);
    glVertex2f(0.25f,-0.1f);
    glVertex2f(0.2f,0.1f);

    glEnd();

    glBegin(GL_QUADS); // design
    glColor3ub(253,174,174);
    glVertex2f(-0.06f,0.1f);
    glVertex2f(0.0f,-0.1f);
    glVertex2f(0.08f,-0.1f);
    glVertex2f(0.02f,0.1f);

    glEnd();


    glColor3ub(0,0,0) ;
    int i_car;

    GLfloat x_car=.15f;
    GLfloat y_car=-0.1f;
    GLfloat radius_car =.05f;
    int triangleAmount_car = 20;

    GLfloat twicePi_car = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN); //wheel 1
    glVertex2f(x_car, y_car);
    for(i_car = 0; i_car <= triangleAmount_car; i_car++)
    {
        glVertex2f(
            x_car + (radius_car * cos(i_car *  twicePi_car / triangleAmount_car)),
            y_car + (radius_car * sin(i_car * twicePi_car / triangleAmount_car))
        );
    }
    glEnd();


    glTranslatef(-0.25,0.0,0.0);
    glColor3ub(0,0,0) ;
    int j_car;

    GLfloat x_car1=.15f;
    GLfloat y_car1=-0.1f;
    GLfloat radius_car1 =.05f;
    int triangleAmount_car1 = 20;

    GLfloat twicePi_car1 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN); //wheel 2
    glVertex2f(x_car, y_car);
    for(j_car = 0; j_car <= triangleAmount_car1; j_car++)
    {
        glVertex2f(
            x_car1 + (radius_car1 * cos(j_car *  twicePi_car1 / triangleAmount_car1)),
            y_car1 + (radius_car1 * sin(j_car * twicePi_car1 / triangleAmount_car1))
        );
    }
    glEnd();

    glLoadIdentity();


    glPopMatrix();



    glPushMatrix();
    glTranslatef(position_car1,0,0);


    glScalef(0.2,0.2,0);
    glBegin(GL_QUADS); // mirror
     glColor3ub(153,206,250);
     if(val==9)
     {
         glColor3ub(0,0,0);
     }
    glVertex2f(-0.195f,0.08f);
    glVertex2f(-0.195f,0.0f);
      glColor3ub(100,149,237);
    glVertex2f(0.219f,0.0f);
    glVertex2f(0.2f,0.08f);

    glEnd();

    glBegin(GL_QUADS); // back light
    glColor3ub(255,69,0);
    glVertex2f(-0.2f,-0.03f);
    glVertex2f(-0.2f,-0.06f);
    glVertex2f(-0.18f,-0.06f);
    glVertex2f(-0.18f,-0.03f);

    glEnd();

    glBegin(GL_QUADS); // head light
    glColor3ub(255,69,0);
    glVertex2f(0.21f,-0.03f);
    glVertex2f(0.21f,-0.06f);
    glVertex2f(0.24f,-0.06f);
    glVertex2f(0.234f,-0.03f);
     glEnd();


   if(val==9)
   { glBegin(GL_TRIANGLES);
    glColor3ub(252,252,0);
    glVertex2f(0.236f,-0.03f);
    glVertex2f(0.334f,0.01f);
    glVertex2f(0.34f,-0.07f);
     glEnd();
    }




    glLineWidth(1);
    glBegin(GL_LINES);// mirror outline 1
    glColor3ub(0,0,0);
    glVertex2f(-0.195f,0.08f);
    glVertex2f(-0.195f,0.0f);

    glEnd();

    glBegin(GL_LINES);// mirror outline 2
    glColor3ub(0,0,0);
    glVertex2f(-0.195f,0.0f);
    glVertex2f(0.219f,0.0f);

    glEnd();

    glBegin(GL_LINES);// mirror outline 3
    glColor3ub(0,0,0);
    glVertex2f(0.219f,0.0f);
    glVertex2f(0.2f,0.08f);

    glEnd();

    glBegin(GL_LINES);// mirror outline 4
    glColor3ub(0,0,0);
    glVertex2f(-0.195f,0.08f);
    glVertex2f(0.2f,0.08f);

    glEnd();

    glBegin(GL_LINES);// mirror border 1
    glColor3ub(0,0,0);
    glVertex2f(-0.04f,0.08f);
    glVertex2f(-0.04f,0.00f);

    glEnd();

    glBegin(GL_LINES);// mirror border 2
    glColor3ub(0,0,0);
    glVertex2f(0.1f,0.08f);
    glVertex2f(0.1f,0.00f);

    glEnd();



    glPushMatrix();
    glTranslatef(-0.1,-0.1,0.0);
    glRotatef(rotation_car1,0.0,0.0,-0.1); // wheel 1 rotation

    glScalef(0.2,0.2,0);
    glLineWidth(5);
    glBegin(GL_LINES);//wheel line
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_LINES);//wheel line
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.03f,0.0f);

    glEnd();

    glBegin(GL_LINES);//wheel line slanted
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.03f,0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line slanted
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f,-0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line slanted
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.03f,-0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line slanted
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f,0.03f);

    glEnd();

    glPopMatrix();
    rotation_car1 += 0.1f;


    glPushMatrix();
    glTranslatef(0.15,-0.1,0.0);
    glRotatef(rotation_car1,0.0,0.0,-0.1); // wheel 2 rotation

    glScalef(0.2,0.2,0);
    glBegin(GL_LINES);//wheel line
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f,0.0f);

    glEnd();

    glBegin(GL_LINES);//wheel line
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.03f,0.0f);

    glEnd();

    glBegin(GL_LINES);//wheel line slanted
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.03f,0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line slanted
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f,-0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line slanted
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.03f,-0.03f);

    glEnd();

    glBegin(GL_LINES);//wheel line slanted
    glColor3ub(249,216,216);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f,0.03f);

    glEnd();

    glPopMatrix();
    rotation_car1 += 0.1f;




    glPopMatrix();

}


void river(int val)
{
    glBegin(GL_QUADS);
    glColor3ub(102, 178, 255);

    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
     glColor3ub(100,149,237);
    glVertex2f(1.0f, 0.1f);
    glVertex2f(-1.0f, 0.1f);

    glEnd();

    if(val==9)
    {
    glBegin(GL_QUADS);
    glColor3ub(102, 178, 255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
     glColor3ub(42,55,95);
    glVertex2f(1.0f, 0.1f);
    glVertex2f(-1.0f, 0.1f);

    glEnd();
    }


    if(val==5)
    {
    glBegin(GL_QUADS);
    glColor3ub(22,108,155);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
     glColor3ub(102, 178, 255);
    glVertex2f(1.0f, 0.1f);
    glVertex2f(-1.0f, 0.1f);

    glEnd();
    }

}
void riverside(int val)
{
    glBegin(GL_QUADS);

     glColor3ub(222,184,135);

    glVertex2f(1.0f, 0.1f);
    glVertex2f(-1.0f, 0.1f);
        glColor3ub(244,164,96);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(1.0f, 0.6f);

    glEnd();

}

//sky
void sky(int val)
{
        //sky bottom
    glBegin(GL_QUADS);
    glColor3ub(250, 245, 217);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(-1.0f, 0.6f);

    //sky top
    glColor3ub(95, 179, 232);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();

        if (val==9)
    {
                //sky bottom
    glBegin(GL_QUADS);
    glColor3ub	(65,105,225);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(-1.0f, 0.6f);

    //sky top
    glColor3ub(22,32,64);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();
    }

    if (val==5)
    {
                //sky bottom
    glBegin(GL_QUADS);
     glColor3ub(0,61,108);
      glColor3ub(95, 179, 232);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-1.0f, 1.0f);
     glColor3ub(109, 116, 130);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 0.6f);
    glEnd();
    }
}

//lowerroad
void lowerroad(int val)
{
    glBegin(GL_QUADS);
    glColor3ub(64, 64, 64);

    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glEnd();
}

void upperroad(int val)
{
    glBegin(GL_QUADS);
    glColor3ub(64, 64, 64);

    glVertex2f(1.0f, 0.35f);
    glVertex2f(-1.0f, 0.35f);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(1.0f, 0.6f);
    glEnd();

     glBegin(GL_QUADS);
     glColor3ub(205,133,63);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(1.0f, 0.67f);
    glVertex2f(-1.0f, 0.67f);
    glEnd();
}

void roadborder()
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.4f, 0.0f, 0.0f);
         glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();
     glPopMatrix();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.8f, 0.0f, 0.0f);
         glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.4f, 0.0f, 0.0f);
         glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();
     glPopMatrix();
     glPopMatrix();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(1.2f, 0.0f, 0.0f);
       glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.4f, 0.0f, 0.0f);
         glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();
     glPopMatrix();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.8f, 0.0f, 0.0f);
         glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.4f, 0.0f, 0.0f);
         glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glPopMatrix();
     glPopMatrix();
     glPopMatrix();
     glPopMatrix();
     glPopMatrix();
}
GLfloat position_waves = 0.0f, speed_waves = 0.2f ;

void animation_waves(int value)
{

    if(position_waves > 1.0)
    {
        position_waves = -1.0f;
    }

    position_waves += speed_waves;

    glutPostRedisplay();


    glutTimerFunc(300, animation_waves, 0);
}



void waves()
{
    glLineWidth(0.7);

    glPushMatrix();

    glTranslatef(position_waves,0,0);

    glBegin(GL_LINES);
    glColor3ub(255,255,255);

    glVertex2f(-0.1f,-0.4f);
    glVertex2f(0.0f,-0.4f);

    glVertex2f(-0.2f,-0.7f);
    glVertex2f(-0.1f,-0.7f);

    glVertex2f(0.5f,-0.6f);
    glVertex2f(0.4f,-0.6f);

    glVertex2f(0.6f,-0.45f);
    glVertex2f(0.7f,-0.45f);

    glVertex2f(-0.9f,-0.9f);
    glVertex2f(-0.8f,-0.9f);

    glVertex2f(-0.8f,-0.5f);
    glVertex2f(-0.7f,-0.5f);

    glVertex2f(-1.1f,-0.6f);
    glVertex2f(-1.2f,-0.6f);

    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.3f,-0.3f);

    glVertex2f(-1.45f,-0.7f);
    glVertex2f(-1.35f,-0.7f);

    glVertex2f(0.6f,-0.82f);
    glVertex2f(0.7f,-0.82f);

    glVertex2f(0.6f,-0.82f);
    glVertex2f(0.7f,-0.82f);

    glEnd();

    glPopMatrix();

    glEnd();
}


void Smoke(GLfloat a, GLfloat b, GLfloat r)
{
    int i;

    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub	(211,211,211);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
GLfloat position_ship1 = 0.0f, speed_ship1 = 0.14f ;

void animation_ship1(int value)
{

    if(position_ship1 > 7.0)
    {
        position_ship1 = -7.0f;
    }

    position_ship1 += speed_ship1;

    glutPostRedisplay();


    glutTimerFunc(150, animation_ship1, 0);
}



void ship1(int val)
{
    glPushMatrix();


    glScalef(0.2,0.2,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship1,0,0);



    glPushMatrix();
    glTranslatef(-0.5,-0.05,0);

    Smoke(0.42f, 0.47f, 0.02f);
    Smoke(0.4f, 0.49f, 0.03f);
    Smoke(0.35f, 0.50f, 0.03f);
    Smoke(0.41f, 0.51f, 0.03f);
    Smoke(0.35f, 0.53f, 0.04f);
    Smoke(0.33f, 0.51f, 0.03f);
    Smoke(0.34f, 0.53f, 0.03f);
    Smoke(0.28f, 0.53f, 0.04f);
    Smoke(0.42f, 0.47f, 0.02f);
    //chimney;
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.37f,-0.1f);
    glVertex2f(0.48f,-0.1f);
    glVertex2f(0.46,0.3f);
    glVertex2f(0.39f,0.3f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.39f,0.3f);
    glVertex2f(0.46f,0.3f);
    glVertex2f(0.455,0.38f);
    glVertex2f(0.395f,0.38f);

    glEnd();

    glBegin(GL_QUADS);
  glColor3ub(255,255,255);

    glVertex2f(0.395f,0.38f);
    glVertex2f(0.455f,0.38f);
    glVertex2f(0.453,0.43f);
    glVertex2f(0.398f,0.43f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship1,0,0);
    glPopMatrix();

    //upper
    glBegin(GL_QUADS);
    glColor3ub(252, 252, 0);

    glVertex2f(-0.2f,0.2f);
    glVertex2f(-0.3f,0.1f);
    glVertex2f(0.5f,0.1f);
    glVertex2f(0.4f,0.25f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 8, 31);

    glVertex2f(0.6f,0.2f);
    glVertex2f(-0.4f,0.1f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(96, 127, 129);

    glVertex2f(-0.4f,0.1f);
    glVertex2f(-0.6f,-0.2f);
    glVertex2f(0.8f,-0.15f);
    glVertex2f(0.6f,0.2f);

    glEnd();


    glBegin(GL_POLYGON);//base
    glColor3ub(0, 0, 0);

    glVertex2f(-0.9f,-0.2f);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-0.78f,-0.34f);

    glVertex2f(-0.7f,-0.34f);
    glVertex2f(0.78f,-0.34f);

    glVertex2f(1.0f,0.0f);
    glVertex2f(0.7f,0.0f);
    glVertex2f(0.4f,-0.05f);

    glVertex2f(-0.2f,-0.15f);
    glVertex2f(-0.4f,-0.25f);
    glVertex2f(-0.6f,-0.22f);

    glEnd();

    glBegin(GL_QUADS);//base
    glColor3ub(0, 0, 0);

    glVertex2f(-0.78f,-0.34f);
    glVertex2f(-0.68f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.78f,-0.34f);

    glEnd();

    //window

    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.47f,-0.07f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.48f,-0.06f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPushMatrix();
    glTranslatef(0.16,0.025,0);

    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship1,0,0);
     glPopMatrix();

    glPushMatrix();
    glTranslatef(0.32,0.05,0);


    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship1,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.48,0.075,0);


    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship1,0,0);
       glPopMatrix();

       glPushMatrix();
    glTranslatef(0.64,0.094,0);

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship1,0,0);
    glPopMatrix();

   glPushMatrix();
   glTranslated(0.81,0.115,0);

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();
    glPopMatrix();
}



GLfloat position_ship2 = 0.0f, speed_ship2 = 0.08f ;

void animation_ship2(int value)
{

    if(position_ship2 > 5.0)
    {
        position_ship2 = -5.0f;
    }

    position_ship2 += speed_ship2;

    glutPostRedisplay();


    glutTimerFunc(150, animation_ship2, 0);
}



void ship2(int val)
{
    glPushMatrix();


    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship2,0,0);



    glPushMatrix();
    glTranslatef(-0.5,-0.05,0);

    Smoke(0.42f, 0.47f, 0.02f);
    Smoke(0.4f, 0.49f, 0.03f);
    Smoke(0.35f, 0.50f, 0.03f);
    Smoke(0.41f, 0.51f, 0.03f);
    Smoke(0.35f, 0.53f, 0.04f);
    Smoke(0.33f, 0.51f, 0.03f);
    Smoke(0.34f, 0.53f, 0.03f);
    Smoke(0.28f, 0.53f, 0.04f);
    Smoke(0.42f, 0.47f, 0.02f);
    //chimney;
    glBegin(GL_QUADS);
    glColor3ub(1,1,1);

    glVertex2f(0.37f,-0.1f);
    glVertex2f(0.48f,-0.1f);
    glVertex2f(0.46,0.3f);
    glVertex2f(0.39f,0.3f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(224, 36, 35);

    glVertex2f(0.39f,0.3f);
    glVertex2f(0.46f,0.3f);
    glVertex2f(0.455,0.38f);
    glVertex2f(0.395f,0.38f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(1,1,1);

    glVertex2f(0.395f,0.38f);
    glVertex2f(0.455f,0.38f);
    glVertex2f(0.453,0.43f);
    glVertex2f(0.398f,0.43f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship2,0,0);
    glPopMatrix();

    //upper
    glBegin(GL_QUADS);
    glColor3ub(253, 254, 252);

    glVertex2f(-0.2f,0.2f);
    glVertex2f(-0.3f,0.1f);
    glVertex2f(0.5f,0.1f);
    glVertex2f(0.4f,0.25f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 8, 31);

    glVertex2f(0.6f,0.2f);
    glVertex2f(-0.4f,0.1f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(253, 254, 252);

    glVertex2f(-0.4f,0.1f);
    glVertex2f(-0.6f,-0.2f);
    glVertex2f(0.8f,-0.15f);
    glVertex2f(0.6f,0.2f);

    glEnd();


    glBegin(GL_POLYGON);//base
    glColor3ub(0, 0, 0);

    glVertex2f(-0.9f,-0.2f);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-0.78f,-0.34f);

    glVertex2f(-0.7f,-0.34f);
    glVertex2f(0.78f,-0.34f);

    glVertex2f(1.0f,0.0f);
    glVertex2f(0.7f,0.0f);
    glVertex2f(0.4f,-0.05f);

    glVertex2f(-0.2f,-0.15f);
    glVertex2f(-0.4f,-0.25f);
    glVertex2f(-0.6f,-0.22f);

    glEnd();

    glBegin(GL_QUADS);//base
    glColor3ub(224, 36, 35);

    glVertex2f(-0.78f,-0.34f);
    glVertex2f(-0.68f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.78f,-0.34f);

    glEnd();

    //window

    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.47f,-0.07f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.48f,-0.06f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPushMatrix();
    glTranslatef(0.16,0.025,0);

    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship2,0,0);
     glPopMatrix();

    glPushMatrix();
    glTranslatef(0.32,0.05,0);


    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship2,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.48,0.075,0);


    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship2,0,0);
       glPopMatrix();

       glPushMatrix();
    glTranslatef(0.64,0.094,0);

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glScalef(-0.3,0.5,0);
    glTranslatef(-1.9,-1.2,0);
    glTranslatef(position_ship2,0,0);
    glPopMatrix();

   glPushMatrix();
   glTranslated(0.81,0.115,0);

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glBegin(GL_QUADS);
    glColor3ub(40, 8, 31);

    glVertex2f(-0.4f,0.03f);
    glVertex2f(-0.4f,-0.065f);
    glVertex2f(-0.26f,-0.04f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 162, 213);

    glVertex2f(-0.41f,0.031f);
    glVertex2f(-0.42f,-0.064f);
    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.26f,0.05f);

    glEnd();

    glPopMatrix();
    glPopMatrix();
}


//windmill

int frameNumber = 0; //windmill
void doFrame(int v){ //windmill rotate
    frameNumber++;
    glutPostRedisplay();
    glutTimerFunc(30,doFrame,0);
}


void windmill(int val){ //change
    int i;

    if(val==1 || val==5)
        glColor3f(0.8f, 0.8f, 0.9f);

    if(val==9)
        glColor3f(0.40f, 0.45f, 0.53f);

	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, 0);
	glVertex2f(0.05f, 0);
	glVertex2f(0.05f, 3);
	glVertex2f(-0.05f, 3);
	glEnd();
	glTranslatef(0, 3, 0);
	glRotated(frameNumber * (180.0/46), 0, 0, 1);

	if(val==1 || val==5)
        glColor3ub(255, 255, 255);

    if(val==9)
        glColor3f(0.16f, 0.12f, 0.30f);

	for (i = 0; i < 3; i++)
        {
            glRotated(120, 0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2f(0,0);
            glVertex2f(0.5f, 0.1f);
            glVertex2f(1.5f,0);
            glVertex2f(0.5f, -0.1f);
            glEnd();
        }
}


    //turbine
    void turbine(){

    //Left circle (small) = LcS
    //Left box (small)= Lb
    //Middle circle (big) = McB
    //Middle box (big)= Mb
    //Right circle (big) = Rb
    //Right_back circle (small) = R_bC
    //Right_front circle (small) = R_fC

////////////////////////////////////////////////////////////////////               AXIS            ////////////////////////////////

//1st box

    glBegin(GL_POLYGON);
    glColor3f(0.79f, 0.72f, 0.29f);

    glVertex2f(-0.3f, 0.05f);
    glVertex2f(-0.1f, 0.05f);
    glVertex2f(-0.1f, -0.05f);
    glVertex2f(-0.3f, -0.05f);

    glEnd();

    //////////////////////////////////////////////////////////////////////////////////////

    float LcS_angle;
    float LcS_radius = 0.05;
    float LcS_x,LcS_y, LcS_xx, LcS_yy;

    LcS_x = -0.3f;
    LcS_y = 0.0f;

    glBegin(GL_POLYGON);
    glColor3f(0.79f, 0.72f, 0.29f);

    glVertex2f(LcS_x,LcS_y);

    for(LcS_angle = 0.0f; LcS_angle<360.0f; LcS_angle++){
        LcS_xx = LcS_x+sin(LcS_angle)*LcS_radius;
        LcS_yy = LcS_y+cos(LcS_angle)*LcS_radius;

        glVertex2f(LcS_xx,LcS_yy);
    }

    glEnd();

    //////////////////////////////////////////////////////////////////////////////////////

//2nd box

    glBegin(GL_POLYGON);
    glColor3f(0.42f, 0.50f, 0.49f);

    glVertex2f(-0.1f, 0.15f);
    glVertex2f(0.1f, 0.15f);
    glVertex2f(0.1f, -0.15f);
    glVertex2f(-0.1f, -0.15f);

    glEnd();

    //////////////////////////////////////////////////////////////////////////////////////

    float McB_angle;
    float McB_radius = 0.15;
    float McB_x,McB_y, McB_xx, McB_yy;

    McB_x = -0.1f;
    McB_y = 0.0f;

    glBegin(GL_POLYGON);
    glColor3f(0.42f, 0.50f, 0.49f);

    glVertex2f(McB_x,McB_y);

    for(McB_angle = 0.0f; McB_angle<360.0f; McB_angle++){
        McB_xx = McB_x+sin(McB_angle)*McB_radius;
        McB_yy = McB_y+cos(McB_angle)*McB_radius;

        glVertex2f(McB_xx,McB_yy);
    }

    glEnd();

    //////////////////////////////////////////////////////////////////////////////////

    float RcB_Under_angle;
    float RcB_Under_radius = 0.165;
    float RcB_Under_x,RcB_Under_y, RcB_Under_xx, RcB_Under_yy;

    RcB_Under_x = 0.1f;
    RcB_Under_y = 0.0f;

    glBegin(GL_POLYGON);
    glColor3f(0.28f, 0.33f, 0.32f);

    glVertex2f(RcB_Under_x,RcB_Under_y);

    for(RcB_Under_angle = 0.0f; RcB_Under_angle<360.0f; RcB_Under_angle++){
        RcB_Under_xx = RcB_Under_x+sin(RcB_Under_angle)*RcB_Under_radius;
        RcB_Under_yy = RcB_Under_y+cos(RcB_Under_angle)*RcB_Under_radius;

        glVertex2f(RcB_Under_xx,RcB_Under_yy);
    }

    glEnd();

   //////////////////////////////////////////////////////////////////////////////////
    float RcB_angle;
    float RcB_radius = 0.15;
    float RcB_x,RcB_y, RcB_xx, RcB_yy;

    RcB_x = 0.1f;
    RcB_y = 0.0f;

    glBegin(GL_POLYGON);
    glColor3f(0.42f, 0.50f, 0.49f);

    glVertex2f(RcB_x,RcB_y);

    for(RcB_angle = 0.0f; RcB_angle<360.0f; RcB_angle++){
        RcB_xx = RcB_x+sin(RcB_angle)*RcB_radius;
        RcB_yy = RcB_y+cos(RcB_angle)*RcB_radius;

        glVertex2f(RcB_xx,RcB_yy);
    }

    glEnd();

      //////////////////////////////////////////////////////////////////////////////////

//3rd box

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.45f);

    glVertex2f(0.1f, 0.05f);
    glVertex2f(0.14f, 0.05f);
    glVertex2f(0.14f, -0.05f);
    glVertex2f(0.1f, -0.05f);

    glEnd();
}

void blade(){
     //8
      glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.01f, 1.0f);
        glVertex2f(0.12f, 0.0f);
        glVertex2f(0.14f, 0.15f);
        glVertex2f(0.10f, 0.15f);
      glEnd();
      //6
      glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.01f, 1.0f);
        glVertex2f(0.12f, 0.0f);
        glVertex2f(0.25f,0.02f);
        glVertex2f(0.25f, -0.02f);
      glEnd();
      //2
      glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.01f, 1.0f);
        glVertex2f(0.12f, 0.0f);
        glVertex2f(0.10f,-0.15f);
        glVertex2f(0.14f, -0.15f);
      glEnd();
      //4
      glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.01f, 1.0f);
        glVertex2f(0.12f, 0.0f);
        glVertex2f(-0.05f,0.02f);
        glVertex2f(-0.05f, -0.02f);
      glEnd();
}

void center_ball(){
    float R_bCs_angle;
    float R_bCs_radius = 0.05;
    float R_bCs_x,R_bCs_y, R_bCs_xx, R_bCs_yy;

    R_bCs_x = 0.1f;
    R_bCs_y = 0.0f;

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.45f);

    glVertex2f(R_bCs_x,R_bCs_y);

    for(R_bCs_angle = 0.0f; R_bCs_angle<360.0f; R_bCs_angle++){
        R_bCs_xx = R_bCs_x+sin(R_bCs_angle)*R_bCs_radius;
        R_bCs_yy = R_bCs_y+cos(R_bCs_angle)*R_bCs_radius;

        glVertex2f(R_bCs_xx,R_bCs_yy);
    }
    glEnd();
  //////////////////////////////////////////////////////////////////////////////////
    float R_fCs_angle;
    float R_fCs_radius = 0.05;
    float R_fCs_x,R_fCs_y, R_fCs_xx, R_fCs_yy;

    R_fCs_x = 0.13f;
    R_fCs_y = 0.0f;

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 1.0f);

    glVertex2f(R_fCs_x,R_fCs_y);

    for(R_fCs_angle = 0.0f; R_fCs_angle<360.0f; R_fCs_angle++){
        R_fCs_xx = R_fCs_x+sin(R_fCs_angle)*R_fCs_radius;
        R_fCs_yy = R_fCs_y+cos(R_fCs_angle)*R_fCs_radius;

        glVertex2f(R_fCs_xx,R_fCs_yy);
    }
    glEnd();
}


void blade_translation(){
    glPushMatrix();
    glTranslatef(0.033f, -0.079f, 0.0f);
    glRotated(45, 0, 0, 1);
    blade();
    glPopMatrix();
}

void turbineHolder(){
    glBegin(GL_QUADS);
    glColor3ub(255, 255,255);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f, -0.2f);

    //glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.35f, 0.22f);
    glVertex2f(-0.45f, 0.22f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.2f, 0.5f, 0.9f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f,-0.2f);
    glVertex2f(-0.2f,-0.2f);
    glVertex2f(-0.2f, 0.22f);
    glVertex2f(-0.35f, 0.22f);
    glEnd();
}
GLfloat i_turbine = -5.0f;
void Xturbine(){
    turbineHolder();
    turbine();

    glPushMatrix();
    glTranslatef(0.105f, 0.0f, 0.0f);
    glRotatef(i_turbine,0.0,0.0,0.5);
    glTranslatef(-0.105f, -0.0f, 0.0f);
    blade();
    blade_translation();
    glPopMatrix();
    i_turbine+=0.8f;

    center_ball();
}

void transformer()
{
    glBegin(GL_POLYGON);
glColor3ub(128,128,128);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.0f,0.5f);
glVertex2f(0.1f,0.5f);
glVertex2f(0.1f,0.0f);

glEnd();

glBegin(GL_POLYGON);
glColor3ub(169,169,169);
glVertex2f(0.08f, 0.0f);
glVertex2f(0.08f,0.52f);
glColor3ub(192,192,192);
glVertex2f(0.18f,0.52f);
glVertex2f(0.18f,0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(128,128,128);
glVertex2f(0.26f, 0.0f);
glVertex2f(0.26f,0.50f);
glVertex2f(0.36f,0.50f);
glVertex2f(0.36f,0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(192,192,192);
glVertex2f(0.17f, 0.0f);
glVertex2f(0.17f,0.52f);
glVertex2f(0.27f,0.52f);
glVertex2f(0.27f,0.0f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.05f, 0.1f);
glVertex2f(0.31f, 0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.05f, 0.2f);
glVertex2f(0.31f, 0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.05f, 0.3f);
glVertex2f(0.31f, 0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.05f, 0.4f);
glVertex2f(0.31f, 0.4f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
glVertex2f(0.12f, 0.52f);
glVertex2f(0.153f, 0.52f);
glVertex2f(0.153f, 0.57f);
glVertex2f(0.12f, 0.57f);
glEnd();

glPushMatrix();
glTranslatef(0.08,0.0,0.0);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
glVertex2f(0.12f, 0.52f);
glVertex2f(0.153f, 0.52f);
glVertex2f(0.153f, 0.57f);
glVertex2f(0.12f, 0.57f);
glEnd();
glPopMatrix();
}

void trafficLight()
{


    glBegin(GL_POLYGON);              // light stand
	glColor3ub(47 ,79, 79);

	    // x, y
	glVertex2f(-0.50f, 20.0f);
	glVertex2f(-0.50f, 10.0f);
	glVertex2f(0.50f, 10.0f);
	glVertex2f(0.50f, 20.0f);
	glVertex2f(1.50f, 20.0f);
	glVertex2f(1.50f, 27.0f);
	glVertex2f(-1.50f, 27.0f);
	glVertex2f(-1.50f, 20.0f);

	    // x, y

    glEnd();

    glBegin(GL_POLYGON);// red light on
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 0, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,26+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// yellow light off
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,24+y );
        }



	glEnd();

	glBegin(GL_POLYGON);// green light off
	for(int i=0;i<200;i++)
        {
            glColor3ub(0, 255, 0);

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0+x,22+y );
        }

	glEnd();
}

void Building(int val)
{

    //Building Body
    glBegin(GL_POLYGON);
	glColor3ub(238, 233, 233);


	glVertex2f(50.0f, -30.0f);
	glVertex2f(75.0f, -30.0f);
	glVertex2f(75.0f, 14.0f);
	glVertex2f(74.0f, 14.0f);
	glVertex2f(74.0f, 15.0f);
	glVertex2f(51.0f, 15.0f);
	glVertex2f(51.0f, 14.0f);
	glVertex2f(50.0f, 14.0f);


   glEnd();


//Building Rooftop design


    glBegin(GL_QUADS);
	glColor3ub(238, 233, 233);

    glVertex2f(56.0f, 15.0f);
    glVertex2f(69.0f, 15.0f);
	glVertex2f(69.0f, 18.0f);
	glVertex2f(56.0f, 18.0f);

	glEnd();




    glBegin(GL_QUADS);
	glColor3ub(238, 233, 233);

    glVertex2f(59.0f, 18.0f);
    glVertex2f(66.0f, 18.0f);
    glVertex2f(66.0f, 20.0f);
    glVertex2f(59.0f, 20.0f);

	glEnd();


	//Block Gates Design Left
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(55.0f, -29.0f);
    glVertex2f(62.0f, -29.0f);
    glVertex2f(62.0f, 13.0f);
    glVertex2f(55.0f, 13.0f);

	glEnd();



//Block Gates Design Right
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(63.0f, -29.0f);
    glVertex2f(70.0f, -29.0f);
    glVertex2f(70.0f, 13.0f);
    glVertex2f(63.0f, 13.0f);

	glEnd();


	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(50.0f, 14.0f);    // x, y
	glVertex2f(75.0f, 14.0f);

    glEnd();



	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(51.0f, 15.0f);    // x, y
	glVertex2f(74.0f, 15.0f);

    glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(56.0f, 18.0f);    // x, y
	glVertex2f(69.0f, 18.0f);

    glEnd();


    glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(65, 65, 65);

	glVertex2f(50.0f, -30.50f);    // x, y
	glVertex2f(75.0f, -30.50f);

    glEnd();



    //Building Window L


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
	glVertex2f(50.5f, -21.0f);
    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
    if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(50.5f, -18.0f);
    glVertex2f(50.5f, -13.0f);
    glVertex2f(52.5f, -13.0f);
    glVertex2f(52.5f, -18.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(50.5f, -5.0f);
    glVertex2f(50.5f, -10.0f);
    glVertex2f(52.5f, -10.0f);
    glVertex2f(52.5f, -5.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(50.5f, 3.0f);
    glVertex2f(50.5f, -2.0f);
    glVertex2f(52.5f, -2.0f);
    glVertex2f(52.5f, 3.0f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(50.5f, 11.0f);
    glVertex2f(50.5f, 6.0f);
    glVertex2f(52.5f, 6.0f);
    glVertex2f(52.5f, 11.0f);

    glEnd();


    //Window Divider

     glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -18.0f);    // x, y
	glVertex2f(51.5f, -13.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -5.0f);    // x, y
	glVertex2f(51.5f, -10.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, 3.0f);    // x, y
	glVertex2f(51.5f, -2.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, 11.0f);    // x, y
	glVertex2f(51.5f, 6.0f);

    glEnd();


    //Building Small Window L

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(53.0f, -15.0f);
    glVertex2f(54.5f, -15.0f);
    glVertex2f(54.5f, -12.0f);
    glVertex2f(53.0f, -12.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(53.0f, -7.0f);
    glVertex2f(54.5f, -7.0f);
    glVertex2f(54.5f, -4.0f);
    glVertex2f(53.0f, -4.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(53.0f, 1.0f);
    glVertex2f(54.5f, 1.0f);
    glVertex2f(54.5f, 4.0f);
    glVertex2f(53.0f, 4.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(53.0f, 9.0f);
    glVertex2f(54.5f, 9.0f);
    glVertex2f(54.5f, 12.0f);
    glVertex2f(53.0f, 12.0f);

    glEnd();



    //Building Window Right

 glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(72.5f, -18.0f);
    glVertex2f(74.5f, -18.0f);
    glVertex2f(74.5f, -13.0f);
    glVertex2f(72.5f, -13.0f);

    glEnd();


     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(72.5f, -5.0f);
    glVertex2f(72.5f, -10.0f);
    glVertex2f(74.5f, -10.0f);
    glVertex2f(74.5f, -5.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(72.5f, 3.0f);
    glVertex2f(72.5f, -2.0f);
    glVertex2f(74.5f, -2.0f);
    glVertex2f(74.5f, 3.0f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(72.5f, 11.0f);
    glVertex2f(72.5f, 6.0f);
    glVertex2f(74.5f, 6.0f);
    glVertex2f(74.5f, 11.0f);

    glEnd();




     //Window Divider R

     glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -18.0f);    // x, y
	glVertex2f(73.5f, -13.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -5.0f);    // x, y
	glVertex2f(73.5f, -10.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, 3.0f);    // x, y
	glVertex2f(73.5f, -2.0f);

    glEnd();


    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, 11.0f);    // x, y
	glVertex2f(73.5f, 6.0f);

    glEnd();





    //Building small windows Right


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(70.5f, -15.0f);
    glVertex2f(72.0f, -15.0f);
    glVertex2f(72.0f, -12.0f);
    glVertex2f(70.5f, -12.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(70.5f, -7.0f);
    glVertex2f(72.0f, -7.0f);
    glVertex2f(72.0f, -4.0f);
    glVertex2f(70.5f, -4.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(70.5f, 1.0f);
    glVertex2f(72.0f, 1.0f);
    glVertex2f(72.0f, 4.0f);
    glVertex2f(70.5f, 4.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(70.5f, 9.0f);
    glVertex2f(72.0f, 9.0f);
    glVertex2f(72.0f, 12.0f);
    glVertex2f(70.5f, 12.0f);

    glEnd();



     //Building Door Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(55.7f, -29.0f);
    glVertex2f(61.3f, -29.0f);
    glVertex2f(61.3f, -22.0f);
    glVertex2f(55.7f, -22.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(57.55f, -29.0f);
    glVertex2f(57.55f, -22.2f);

     glEnd();

     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(59.4f, -29.0f);
    glVertex2f(59.4f, -22.2f);

     glEnd();

     //Building Door Right

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(63.7f, -29.0f);
    glVertex2f(69.3f, -29.0f);
    glVertex2f(69.3f, -22.0f);
    glVertex2f(63.7f, -22.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.55f, -29.0f);
    glVertex2f(65.55f, -22.2f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.4f, -29.0f);
    glVertex2f(67.4f, -22.2f);

     glEnd();




   //Building Middle small Window Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);

     glEnd();


     glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(55.7f, -12.0f);
    glVertex2f(57.7f, -12.0f);
    glVertex2f(57.7f, -6.0f);
    glVertex2f(55.7f, -6.0f);

     glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(55.7f, -4.0f);
    glVertex2f(57.7f, -4.0f);
    glVertex2f(57.7f, 2.0f);
    glVertex2f(55.7f, 2.0f);

     glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(55.7f, 4.0f);
    glVertex2f(57.7f, 4.0f);
    glVertex2f(57.7f, 10.0f);
    glVertex2f(55.7f, 10.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -20.0f);
    glVertex2f(56.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -12.0f);
    glVertex2f(56.7f, -6.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, -4.0f);
    glVertex2f(56.7f, 2.0f);

     glEnd();


     glLineWidth(1.0);
     glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(56.7f, 4.0f);
    glVertex2f(56.7f, 10.0f);

     glEnd();



     //Building Middle Big Window

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

      glEnd();


      glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(58.3f, -12.0f);
    glVertex2f(61.3f, -12.0f);
    glVertex2f(61.3f, -6.0f);
    glVertex2f(58.3f, -6.0f);

      glEnd();


       glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(58.3f, -4.0f);
    glVertex2f(61.3f, -4.0f);
    glVertex2f(61.3f, 2.0f);
    glVertex2f(58.3f, 2.0f);

      glEnd();


       glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(58.3f, 4.0f);
    glVertex2f(61.3f, 4.0f);
    glVertex2f(61.3f, 10.0f);
    glVertex2f(58.3f, 10.0f);

      glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -20.0f);
    glVertex2f(59.3f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -20.0f);
    glVertex2f(60.3f, -14.0f);

     glEnd();



     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -12.0f);
    glVertex2f(59.3f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -12.0f);
    glVertex2f(60.3f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, -4.0f);
    glVertex2f(59.3f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, -4.0f);
    glVertex2f(60.3f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(59.3f, 4.0f);
    glVertex2f(59.3f, 10.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(60.3f, 4.0f);
    glVertex2f(60.3f, 10.0f);

     glEnd();




    //Building Middle Big Window R

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(63.7f, -12.0f);
    glVertex2f(66.7f, -12.0f);
    glVertex2f(66.7f, -6.0f);
    glVertex2f(63.7f, -6.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(63.7f, -4.0f);
    glVertex2f(66.7f, -4.0f);
    glVertex2f(66.7f, 2.0f);
    glVertex2f(63.7f, 2.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(63.7f, 4.0f);
    glVertex2f(66.7f, 4.0f);
    glVertex2f(66.7f, 10.0f);
    glVertex2f(63.7f, 10.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -20.0f);
    glVertex2f(64.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -20.0f);
    glVertex2f(65.7f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -12.0f);
    glVertex2f(64.7f, -6.0f);

     glEnd();


      glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -12.0f);
    glVertex2f(65.7f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, -4.0f);
    glVertex2f(64.7f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, -4.0f);
    glVertex2f(65.7f, 2.0f);

     glEnd();



     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.7f, 4.0f);
    glVertex2f(64.7f, 10.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(65.7f, 4.0f);
    glVertex2f(65.7f, 10.0f);

     glEnd();



    //Building Middle small Window R

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(66.9f, -12.0f);
    glVertex2f(68.9f, -12.0f);
    glVertex2f(68.9f, -6.0f);
    glVertex2f(66.9f, -6.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(66.9f, -4.0f);
    glVertex2f(68.9f, -4.0f);
    glVertex2f(68.9f, 2.0f);
    glVertex2f(66.9f, 2.0f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);
	 if (val==9){
        glColor3ub(255, 255, 102);
	 }
    glVertex2f(66.9f, 4.0f);
    glVertex2f(68.9f, 4.0f);
    glVertex2f(68.9f,10.0f);
    glVertex2f(66.9f, 10.0f);

    glEnd();


    glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -20.0f);
    glVertex2f(67.9f, -14.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -12.0f);
    glVertex2f(67.9f, -6.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, -4.0f);
    glVertex2f(67.9f, 2.0f);

     glEnd();


     glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(67.9f, 4.0f);
    glVertex2f(67.9f, 10.0f);

     glEnd();
    glPopMatrix();


}

void troad()
{
    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.3f, -0.1f);

    glEnd();

     glLineWidth(3);
     glBegin(GL_LINES);
     glColor3ub(255, 255, 255);
     glVertex2f(0.22f, 0.48f);
     glVertex2f(0.23f, 0.45f);
     glEnd();

    glPushMatrix();
    glTranslatef(0.038, -0.11, 0.0);
    glBegin(GL_LINES);
     glColor3ub(255, 255, 255);
     glVertex2f(0.22f, 0.48f);
     glVertex2f(0.23f, 0.45f);
     glEnd();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.07, -0.25, 0.0);
    glBegin(GL_LINES);
     glColor3ub(255, 255, 255);
     glVertex2f(0.22f, 0.48f);
     glVertex2f(0.23f, 0.45f);
     glEnd();

    glPushMatrix();
    glTranslatef(0.038, -0.11, 0.0);
    glBegin(GL_LINES);
     glColor3ub(255, 255, 255);
     glVertex2f(0.22f, 0.48f);
     glVertex2f(0.23f, 0.45f);
     glEnd();
     glPopMatrix();
    glPopMatrix();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.3f, -0.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.5f, -0.1f);
    glEnd();
}
void DrawHalfCircle(int a, int b, int c)
 {
     int number = 20; //number of vertices,
     float radius = 0.4f; // radius of the circle
     float twopi = 2.0f*3.14159f;
    glPushMatrix();
    glTranslatef(0.5f, 0.0f, 0.0f); //to move the position of circle towards +ve x axis
glBegin(GL_TRIANGLE_FAN); //drawing circle using triangle fan
    glColor3ub(a, b, c); //blue in color
    glVertex2f(0.0f, 0.0f); //placing at the origin
    for (int i = 0; i <= 21; i++)
           glVertex2f(radius*cosf(i*twopi / number), radius*sinf(i*twopi / number));
     glEnd();
     glPopMatrix();

 }


void sun_moon(int val){

    glPushMatrix();
    glTranslatef(0.6, 0.9, 0.0);
    glScalef(0.2, 0.2, 0.0);
    DrawHalfCircle(255, 255, 0);
    if(val==9)
    {
        DrawHalfCircle(169,169,169);
    }
    glPopMatrix();

}

 void tree1(int val)
{

    //tree1 body

    glPushMatrix();

    glScalef(0.90,0.50,0);
    glTranslatef(43.50,103.0,0.0);


        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -18.0f);
        glVertex2f(0.0f,5.0f);



        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3ub(160,82,45);


        glVertex2f(0.0f, -8.0f);
        glVertex2f(5.0f,5.0f);

        glVertex2f(3.0f, -0.30f);
        glVertex2f(3.0f,5.0f);

        glVertex2f(0.0f, -5.0f);
        glVertex2f(-5.0f,7.0f);

        glVertex2f(-3.0f, 2.30f);
        glVertex2f(-6.0f,2.30f);

        glVertex2f(-2.0f, -0.30f);
        glVertex2f(-2.0f,6.0f);


        glVertex2f(-0.15f, 5.0f);
        glVertex2f(-0.15f,10.0f);

         glVertex2f(0.0f, 5.0f);
        glVertex2f(3.0f,9.0f);

        glVertex2f(-0.15f, 7.0f);
        glVertex2f(-3.0f,9.0f);



        glEnd();


         glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);
            if(val==9)
            {
                glColor3ub(51, 102, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,16.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);
            if(val==9)
            {
                glColor3ub(51, 102, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,11.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
             glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(51, 102, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-1.0+x,14.0+y );
        }
        glEnd();


          glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(0.0+x,13.0+y );
        }
        glEnd();



        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(1.50+x,14.50+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);
            if(val==9)
            {
                glColor3ub(51, 102, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.50+x,12.50+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(2.0+x,10.0+y );
        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-2.0+x,10.0+y );
        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(5.0+x,9.0+y );


        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(4.0+x,7.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(6.0+x,5.0+y );

        }
        glEnd();


        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-3.0+x,8.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-6.0+x,6.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(-8.0+x,4.0+y );
            glVertex2f(-7.0+x,3.0+y );

        }
        glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(173, 255, 47);
            if(val==9)
            {
                glColor3ub(51, 102, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(1.0+x,3.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(-1.0+x,2.0+y );

        }
        glEnd();

        glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(50 ,205, 50);
            if(val==9)
            {
                glColor3ub(0, 51, 0);
            }

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.30;
            float x = r * cos(A);
            float y = r * sin(A);

            glVertex2f(2.0+x,0.0+y );

        }
        glEnd();

    glPopMatrix();

}

void tbrick(){

    //1st Line of Brick
    glBegin(GL_POLYGON);
    glColor3ub(188, 74, 60);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(160,54,35);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.90, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);

    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(188, 74, 60);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(160,54,35);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.90, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);


    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(188, 74, 60);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(160,54,35);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.90, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);

    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(188, 74, 60);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(160,54,35);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.90, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPopMatrix();
     glPopMatrix();

     //2nd Line of Brick
     glPushMatrix();
     glTranslatef(0.0, 0.03, 0.0);
      glBegin(GL_POLYGON);
    glColor3ub (160,54,35);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(188, 74, 60);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.90, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);

    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(160,54,35);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(188, 74, 60);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.90, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);


    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(160,54,35);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(188, 74, 60);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.90, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);

    glEnd();

    glPushMatrix();
    glTranslatef(0.1f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(160,54,35);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(188, 74, 60);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-1.0, -0.7);
    glVertex2f(-1.0, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.95, -0.7);
    glVertex2f(-0.90, -0.7);
    glVertex2f(-0.95, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.67);
    glVertex2f(-0.90, -0.7);
    glEnd();

    glPopMatrix();
     glPopMatrix();
     glPopMatrix();

 }

 void tunnelupper()
 {
    //tunnelupperside

    glPushMatrix();
     glTranslatef(0.54, 0.14, 0.0);
     glScalef(0.46, 0.46, 0.0);
     DrawHalfCircle(33,30,30);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.57, 0.12, 0.0);
     glScalef(0.44, 0.44, 0.0);
     DrawHalfCircle(160,54,35);
     glPopMatrix();


     //tunnelupperside
     glPushMatrix();
     glTranslatef(1.537, 0.66, 0.0);
     glScalef(0.95, 0.8, 0.0);
     tbrick();
     glPopMatrix();

     //tunnelupperside2
     glPushMatrix();
     glTranslatef(1.537, 0.71, 0.0);
     glScalef(0.95, 0.8, 0.0);
     tbrick();
     glPopMatrix();

     glEnd();
 }

 void tunnel()
 {
        //tunnelupperside
     glPushMatrix();
     glTranslatef(1.54, 0.0, 0.0);
     tbrick();
     glPopMatrix();

     //tunnelupperside2
     glPushMatrix();
     glTranslatef(1.54, 0.06, 0.0);
     tbrick();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0.0, 0.12, 0.0);
             //tunnelupperside
     glPushMatrix();
     glTranslatef(1.54, 0.0, 0.0);
     tbrick();
     glPopMatrix();

     //tunnelupperside2
     glPushMatrix();
     glTranslatef(1.54, 0.06, 0.0);
     tbrick();
     glPopMatrix();
     glPopMatrix();

    glPushMatrix();
     glTranslatef(0.52, -0.72, 0.0);
     glScalef(0.44, 0.56, 0.0);
     DrawHalfCircle(33,30,30);
     glPopMatrix();

    glPushMatrix();
     glTranslatef(0.56, -0.72, 0.0);
     glScalef(0.36, 0.46, 0.0);
     DrawHalfCircle(0,0,0);
     glPopMatrix();

      glEnd();


      glPushMatrix();
      glTranslatef(0.5, -0.52, 0.0);
      glScalef(0.5, 0.5, 0.0);
      glBegin(GL_POLYGON);
      glColor3ub(64, 64, 64);
      glVertex2f(0.2f, -0.5f);
      glVertex2f(0.7f, -0.5f);
       glVertex2f(0.55f, -0.1f);
      glVertex2f(0.4f, -0.1f);

       glEnd();

       glLineWidth(2);
       glBegin(GL_LINES);
       glColor3ub(255, 255, 255);
       glVertex2f(0.47f, -0.13f);
       glVertex2f(0.47f, -0.15f);

       glVertex2f(0.47f, -0.2f);
       glVertex2f(0.47f, -0.23f);

        glVertex2f(0.47f, -0.27f);
       glVertex2f(0.47f, -0.32f);


       glEnd();

       glPopMatrix();

 }

 void lowerriverside()
 {
     glBegin(GL_POLYGON);
     glColor3ub(222,184,135);
     glVertex2f(-1.0f, -0.6f);
     glVertex2f(-1.0f, -0.7f);
     glVertex2f(1.0f, -0.7f);
     glVertex2f(1.0f, -0.6f);
        glEnd();
 }

 void StormCloud(GLfloat a, GLfloat b, GLfloat r)
{
    int i;

    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void RainCloud()
{
    glPushMatrix();
	glTranslatef(-0.05,0.95,0.0);//cloud3
    glScalef(0.5,0.6,0.0);
	glColor3ub(129,145,167);
	StormCloud(0.0,0.0,0.1);
	StormCloud(0.0,0.05,0.1);
	StormCloud(0.0,-0.05,0.1);
	StormCloud(-0.15,0.015,0.15);
	StormCloud(0.15,0.015,0.15);
	StormCloud(-0.3,0.025,0.1);
	StormCloud(0.3,0.025,0.1);
	StormCloud(0.0,0.1,0.1);

	glPopMatrix();

    glPushMatrix();
	glTranslatef(-0.3,0.85,0);//cloud2
	glScalef(0.5,0.6,0.0);

	glColor3ub(171,200,218);
	StormCloud(0.0,0.0,0.1);
	StormCloud(0.0,0.05,0.1);
	StormCloud(0.0,-0.05,0.1);
	StormCloud(-0.15,0.015,0.15);
	StormCloud(0.15,0.015,0.15);
	StormCloud(-0.3,0.025,0.1);
	StormCloud(0.3,0.025,0.1);
	StormCloud(0.0,0.1,0.1);

	glPopMatrix();


    glPushMatrix();
	glTranslatef(-0.4,0.95,0);//cloud1
	glScalef(0.5,0.6,0.0);

    glColor3ub(225,241,249);
	StormCloud(0.0,0.0,0.1);
	StormCloud(0.0,0.05,0.1);
	StormCloud(0.0,-0.05,0.1);
	StormCloud(-0.15,0.015,0.15);
	StormCloud(0.15,0.015,0.15);
	StormCloud(-0.3,0.025,0.1);
	StormCloud(0.3,0.025,0.1);
	StormCloud(0.0,0.1,0.1);


	glPopMatrix();

    glPushMatrix();
    glTranslatef(0.7,0.95,0.0);//cloudR2
    glScalef(0.5,0.6,0.0);
	glColor3ub(129,145,167);
	StormCloud(0.0,0.0,0.1);
	StormCloud(0.0,0.05,0.1);
	StormCloud(0.0,-0.05,0.1);
	StormCloud(-0.15,0.015,0.15);
	StormCloud(0.15,0.015,0.15);
	StormCloud(-0.3,0.025,0.1);
	StormCloud(0.3,0.025,0.1);
	StormCloud(0.0,0.1,0.1);

	glPopMatrix();

    glPushMatrix();
    glTranslatef(0.95,0.92,0);//cloudR1
	glScalef(0.5,0.6,0.0);

	glColor3ub(171,200,218);
	StormCloud(0.0,0.0,0.1);
	StormCloud(0.0,0.05,0.1);
	StormCloud(0.0,-0.05,0.1);
	StormCloud(-0.15,0.015,0.15);
	StormCloud(0.15,0.015,0.15);
	StormCloud(-0.3,0.025,0.1);
	StormCloud(0.3,0.025,0.1);
	StormCloud(0.0,0.1,0.1);

	glPopMatrix();
}

GLfloat RainPos = 10.0f;
void RainAnimation(int value)
{

    if(RainPos <0.6)
        RainPos = 1;

    RainPos -= 0.1;

    glutPostRedisplay();


    glutTimerFunc(50, RainAnimation, 0);
}



void Rain(GLfloat a, GLfloat b)
{
	glLineWidth(0.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(a,b);
	glVertex2f(a-0.01,b-0.05);

	glEnd();
}



void RainFall()
{
    float Y = 2.0;

    for(int i=0; i<30; i++)
    {
        float X = -3;

        for(int j=0; j<45; j++)
        {
            X += 0.2 ;

            Rain(X , Y);

        }
        Y -=0.2;

    }
}

 void Thunder1()
{

	glLineWidth(5);
	glBegin(GL_LINES); //thunder 1, root 1
	glColor3ub(65,101,171);
	glVertex2f(0.3f,0.99f);
	glVertex2f(0.29f,0.98f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); //thunder 1 , root 1
	glColor3ub(65,101,171);
	glVertex2f(0.29f,0.98f);
	glVertex2f(0.285f,0.975f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); //thunder 1 , root 1
	glColor3ub(65,101,171);
	glVertex2f(0.285f,0.975f);
	glVertex2f(0.28f,0.97f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); //thunder 1 , root 1
	glColor3ub(65,101,171);
	glVertex2f(0.28f,0.97f);
	glVertex2f(0.22f,0.95f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);  // thunder 1 , root 1 , junction 1
	glColor3ub(65,101,171);
	glVertex2f(0.22f,0.95f);
	glVertex2f(0.24f,0.93f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(65,101,171);
	glVertex2f(0.24f,0.93f);
	glVertex2f(0.21f,0.91f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(65,101,171);
	glVertex2f(0.21f,0.91f);
	glVertex2f(0.15f,0.88f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(65,101,171);
	glVertex2f(0.15f,0.88f);
	glVertex2f(0.155f,0.82f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(65,101,171);
	glVertex2f(0.155f,0.82f);
	glVertex2f(0.12f,0.81f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(65,101,171);
	glVertex2f(0.155f,0.82f);
	glVertex2f(0.16f,0.77f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 2
	glColor3ub(65,101,171);
	glVertex2f(0.24f,0.93f);
	glVertex2f(0.25f,0.92f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 2
	glColor3ub(65,101,171);
	glVertex2f(0.25f,0.92f);
	glVertex2f(0.25f,0.86f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 2 , junction 2
	glColor3ub(65,101,171);
	glVertex2f(0.25f,0.86f);
	glVertex2f(0.3f,0.83f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 3
	glColor3ub(65,101,171);
	glVertex2f(0.3f,0.83f);
	glVertex2f(0.29f,0.82f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 3
	glColor3ub(65,101,171);
	glVertex2f(0.29f,0.82f);
	glVertex2f(0.31f,0.81f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 3
	glColor3ub(65,101,171);
	glVertex2f(0.31f,0.81f);
	glVertex2f(0.3f,0.78f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 3
	glColor3ub(65,101,171);
	glVertex2f(0.3f,0.78f);
	glVertex2f(0.315f,0.76f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 3 , junction 3
	glColor3ub(65,101,171);
	glVertex2f(0.315f,0.76f);
	glVertex2f(0.29f,0.71f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 4
	glColor3ub(65,101,171);
	glVertex2f(0.29f,0.71f);
	glVertex2f(0.26f,0.7f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 4
	glColor3ub(65,101,171);
	glVertex2f(0.26f,0.7f);
	glVertex2f(0.25f,0.67f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(65,101,171);
	glVertex2f(0.29f,0.71f);
	glVertex2f(0.31f,0.68f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(65,101,171);
	glVertex2f(0.31f,0.68f);
	glVertex2f(0.315f,0.675f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(65,101,171);
	glVertex2f(0.315f,0.675f);
	glVertex2f(0.305f,0.67f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(65,101,171);
	glVertex2f(0.305f,0.67f);
	glVertex2f(0.32f,0.65f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(65,101,171);
	glVertex2f(0.32f,0.65f);
	glVertex2f(0.29f,0.63f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(65,101,171);
	glVertex2f(0.29f,0.63f);
	glVertex2f(0.285f,0.6f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 6
	glColor3ub(65,101,171);
	glVertex2f(0.24f,0.93f);
	glVertex2f(0.28f,0.94f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 6
	glColor3ub(65,101,171);
	glVertex2f(0.28f,0.94f);
	glVertex2f(0.33f,0.925f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 6
	glColor3ub(65,101,171);
	glVertex2f(0.33f,0.925f);
	glVertex2f(0.35f,0.9f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 6 , junction 4
	glColor3ub(65,101,171);
	glVertex2f(0.35f,0.9f);
	glVertex2f(0.39f,0.885f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 7
	glColor3ub(65,101,171);
	glVertex2f(0.39f,0.885f);
	glVertex2f(0.37f,0.84f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 8
	glColor3ub(65,101,171);
	glVertex2f(0.39f,0.885f);
	glVertex2f(0.42f,0.87f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 8
	glColor3ub(65,101,171);
	glVertex2f(0.42f,0.87f);
	glVertex2f(0.425f,0.81f);

	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES); // thunder 1 , root 8
	glColor3ub(65,101,171);
	glVertex2f(0.425f,0.81f);
	glVertex2f(0.435f,0.8f);

	glEnd();



	glLineWidth(2);
	glBegin(GL_LINES); //thunder 1, root 1
	glColor3ub(255,255,255);
	glVertex2f(0.3f,0.99f);
	glVertex2f(0.29f,0.98f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); //thunder 1 , root 1
	glColor3ub(255,255,255);
	glVertex2f(0.29f,0.98f);
	glVertex2f(0.285f,0.975f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); //thunder 1 , root 1
	glColor3ub(255,255,255);
	glVertex2f(0.285f,0.975f);
	glVertex2f(0.28f,0.97f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); //thunder 1 , root 1
	glColor3ub(255,255,255);
	glVertex2f(0.28f,0.97f);
	glVertex2f(0.22f,0.95f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);  // thunder 1 , root 1 , junction 1
	glColor3ub(255,255,255);
	glVertex2f(0.22f,0.95f);
	glVertex2f(0.24f,0.93f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(255,255,255);
	glVertex2f(0.24f,0.93f);
	glVertex2f(0.21f,0.91f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(255,255,255);
	glVertex2f(0.21f,0.91f);
	glVertex2f(0.15f,0.88f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(255,255,255);
	glVertex2f(0.15f,0.88f);
	glVertex2f(0.155f,0.82f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(255,255,255);
	glVertex2f(0.155f,0.82f);
	glVertex2f(0.12f,0.81f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 1
	glColor3ub(255,255,255);
	glVertex2f(0.155f,0.82f);
	glVertex2f(0.16f,0.77f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 2
	glColor3ub(255,255,255);
	glVertex2f(0.24f,0.93f);
	glVertex2f(0.25f,0.92f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 2
	glColor3ub(255,255,255);
	glVertex2f(0.25f,0.92f);
	glVertex2f(0.25f,0.86f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 2 , junction 2
	glColor3ub(255,255,255);
	glVertex2f(0.25f,0.86f);
	glVertex2f(0.3f,0.83f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 3
	glColor3ub(255,255,255);
	glVertex2f(0.3f,0.83f);
	glVertex2f(0.29f,0.82f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 3
	glColor3ub(255,255,255);
	glVertex2f(0.29f,0.82f);
	glVertex2f(0.31f,0.81f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 3
	glColor3ub(255,255,255);
	glVertex2f(0.31f,0.81f);
	glVertex2f(0.3f,0.78f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 3
	glColor3ub(255,255,255);
	glVertex2f(0.3f,0.78f);
	glVertex2f(0.315f,0.76f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 3 , junction 3
	glColor3ub(255,255,255);
	glVertex2f(0.315f,0.76f);
	glVertex2f(0.29f,0.71f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 4
	glColor3ub(255,255,255);
	glVertex2f(0.29f,0.71f);
	glVertex2f(0.26f,0.7f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 4
	glColor3ub(255,255,255);
	glVertex2f(0.26f,0.7f);
	glVertex2f(0.25f,0.67f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(255,255,255);
	glVertex2f(0.29f,0.71f);
	glVertex2f(0.31f,0.68f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(255,255,255);
	glVertex2f(0.31f,0.68f);
	glVertex2f(0.315f,0.675f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(255,255,255);
	glVertex2f(0.315f,0.675f);
	glVertex2f(0.305f,0.67f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(255,255,255);
	glVertex2f(0.305f,0.67f);
	glVertex2f(0.32f,0.65f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(255,255,255);
	glVertex2f(0.32f,0.65f);
	glVertex2f(0.29f,0.63f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 5
	glColor3ub(255,255,255);
	glVertex2f(0.29f,0.63f);
	glVertex2f(0.285f,0.6f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 6
	glColor3ub(255,255,255);
	glVertex2f(0.24f,0.93f);
	glVertex2f(0.28f,0.94f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 6
	glColor3ub(255,255,255);
	glVertex2f(0.28f,0.94f);
	glVertex2f(0.33f,0.925f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 6
	glColor3ub(255,255,255);
	glVertex2f(0.33f,0.925f);
	glVertex2f(0.35f,0.9f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 6 , junction 4
	glColor3ub(255,255,255);
	glVertex2f(0.35f,0.9f);
	glVertex2f(0.39f,0.885f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 7
	glColor3ub(255,255,255);
	glVertex2f(0.39f,0.885f);
	glVertex2f(0.37f,0.84f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 8
	glColor3ub(255,255,255);
	glVertex2f(0.39f,0.885f);
	glVertex2f(0.42f,0.87f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 8
	glColor3ub(255,255,255);
	glVertex2f(0.42f,0.87f);
	glVertex2f(0.425f,0.81f);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // thunder 1 , root 8
	glColor3ub(255,255,255);
	glVertex2f(0.425f,0.81f);
	glVertex2f(0.435f,0.8f);

	glEnd();



}


void soundDay(){
    PlaySound("soundday.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void soundRain(){
    PlaySound("soundrain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void soundNull(){
    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}


void init(){
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  };


void displayDay(){

    val = 1;

    riverside(val);

    //turbine
    glPushMatrix();
    glTranslatef(-0.85f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();


    sky(val);

    sun_moon(val);

    glPushMatrix();
    glTranslatef(CloudPosition1,0.45,0);
    glScalef(0.6, 0.6, 0.0);
    Cloud1();
    Cloud2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(CloudPosition2,0.4,0);
    glScalef(0.6, 0.6, 0.0);
    //Copy of cloud1
    glTranslatef(1.0,0,0);
    Cloud1();
    glLoadIdentity();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(CloudPosition2,0,0);
    glScalef(0.6, 0.6, 0.0);
    //Copy of Cloud2
    glTranslatef(-1.1,0,0);
    Cloud2();
    glLoadIdentity();
    glPopMatrix();

    upperroad(val);

    //tower
    glPushMatrix();
    glTranslatef(-0.6f,0.82f,0.0f);
    glScalef(.4, .4, 0);
    tower(val);
    glPopMatrix();

    //lower_roaddivider
    glPushMatrix();
    glTranslatef(-0.4f, 1.0f, 0.0f);
    glScalef(0.7, 0.7, 0.0);
    lowerroaddivider(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.95f, 1.0f, 0.0f);
    glScalef(0.7, 0.7, 0.0);
    lowerroaddivider(val);
    glPopMatrix();


    //upperborder
    glPushMatrix();
    glTranslatef(-0.3, 0.69,0);
     glScalef(0.715,0.5,0);
      roadborder();
      glPopMatrix();

    //windmill
    glPushMatrix();
    glTranslatef(0.4f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.1f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();


        //transformer2
    glPushMatrix();
    glTranslatef(-0.18f,0.625f,0.0f);
    glScaled(0.2,0.4, 0.0);
    transformer();
    glPopMatrix();

    //transformer1
    glPushMatrix();
    glTranslatef(-0.23f,0.62f,0.0f);
    glScaled(0.2,0.4, 0.0);
    transformer();
    glPopMatrix();


    //building
    glPushMatrix();
    glTranslatef(-1.55f, 0.84f, 0.0f);
    glScalef(.015, .0076, 0);
    Building(val);
    glPopMatrix();


    //troad
    glPushMatrix();
    glTranslatef(0.3f, 0.145f, 0.0);
    glScalef(1.3f, 0.425f, 0.0f);
    troad();
    glPopMatrix();


    //vehicles road
    glPushMatrix();
    glTranslatef(0.0f,0.84f,0.0f);
    glScalef(.5, .3, 0);
    vehicleCar(val);
    glPopMatrix();

      //bus
    glPushMatrix();
    glTranslatef(0.0f,0.55f,0.0f);
    glScalef(-2.5, 2, 0);
    bus(val);
    glPopMatrix();

    //lamppost_upperside
    glPushMatrix();
    glTranslatef(-0.8f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.0f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();


        //truck
    glPushMatrix();
    glTranslatef(0.0f,0.88f,0.0f);
    glScaled(0.7,0.5,0.0);
    vehicleTruck(val);
    glPopMatrix();



    //traficlight upper side
    glPushMatrix();
    glTranslatef(0.59f, 0.26f, 0.0f);
    glScalef(.007, .009, 0);
    trafficLight();
    glPopMatrix();

    //tower2
    glPushMatrix();
    glTranslatef(-0.4f,0.42f,0.0f);
    glScalef(.4, .4, 0);
    tower2(val);
    glPopMatrix();

        //tree1
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    //tree2
    glPushMatrix();
    glTranslatef(0.08f, -0.12f, 0.0f);
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();
    glPopMatrix();

    //tree 3 and 4
    glPushMatrix();
    glTranslatef(-0.4f, -0.05f, 0.0f);

    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    //tree_riverside
    glPushMatrix();
    glTranslatef(0.0f, -0.35f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, -0.35f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.08f, -0.12f, 0.0f);
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    //tunnelupper
    tunnelupper();


     //transformer2
    glPushMatrix();
    glTranslatef(-0.98f,0.16f,0.0f);
    glScaled(0.4,0.2, 0.0);
    transformer();
    glPopMatrix();

    //turbine
    glPushMatrix();
    glTranslatef(-0.75f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();



    //river
    river(val);

    glPushMatrix();
    glTranslatef(0.0f, 0.3f, 0.0f);
    waves();
    glPopMatrix();

   //ship1
    glPushMatrix();
    glScalef(0.7,0.7,0);
    glTranslatef(0, 0.25,0);
    ship1(val);
    glPopMatrix();


    //ship2
    glPushMatrix();
    glScalef(0.7,0.7,0);
    glTranslatef(0, 0.25,0);
    ship2(val);
    glPopMatrix();

     lowerriverside();

     roadborder();

     //lamppost
    glPushMatrix();
    glTranslatef(-0.8f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();



    //tunnel
    glPushMatrix();
    glTranslatef(0.01, 0.48, 0.0);
    glScalef(1.0, 1.7, 0.0);
    tunnel();
    glPopMatrix();

    //lowerroad
    lowerroad(val);

        //divider
    glPushMatrix();
    glTranslatef(0.0f,-0.1f,0.0f);
    lowerroaddivider(val);
    glPopMatrix();

         //yellowcar
    glPushMatrix();
    glTranslatef(0.0f,-0.81f,0.0f);
    glScalef(-0.012, .02, 0);
    blueCar(val, 0);
    glPopMatrix();


            //traficlight
    glPushMatrix();
    glTranslatef(0.70f, -0.98f, 0.0f);
    glScalef(.011, .013, 0);
    trafficLight();
    glPopMatrix();

        //bluecar
    glPushMatrix();
    glTranslatef(0.0f,-0.91f,0.0f);
    glScalef(.015, .018, 0);
    blueCar(val, 1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5, 0.3, 0.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.4, 0.65);
    glVertex2f(-0.2, 0.28);
    glVertex2f(-0.4, -0.033);
    glVertex2f(-0.35, -0.013);
    glVertex2f(-0.35, -0.013);
    glVertex2f(-0.30, 0.033);
    glVertex2f(-0.30, 0.033);
    glVertex2f(-0.25, 0.153);
    glVertex2f(-0.25, 0.153);
    glVertex2f(-0.2, 0.28);
    glEnd();
    glPopMatrix();

    glFlush();

};

void displayRain(){

    val = 5;



    riverside(val);

    //turbine
    glPushMatrix();
    glTranslatef(-0.85f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();


    sky(val);

    RainCloud();

    glPushMatrix();
    glTranslatef(0.3, 0.3, 0.0);
    glScalef(-0.7, 0.7, 0.0);
    Thunder1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3, 0.3, 0.0);
    glScalef(-0.3, 0.7, 0.0);
    Thunder1();
    glPopMatrix();



    upperroad(val);

    //tower
    glPushMatrix();
    glTranslatef(-0.6f,0.82f,0.0f);
    glScalef(.4, .4, 0);
    tower(val);
    glPopMatrix();

    //lower_roaddivider
    glPushMatrix();
    glTranslatef(-0.4f, 1.0f, 0.0f);
    glScalef(0.7, 0.7, 0.0);
    lowerroaddivider(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.95f, 1.0f, 0.0f);
    glScalef(0.7, 0.7, 0.0);
    lowerroaddivider(val);
    glPopMatrix();


    //upperborder
    glPushMatrix();
    glTranslatef(-0.3, 0.69,0);
     glScalef(0.715,0.5,0);
      roadborder();
      glPopMatrix();

    //windmill
    glPushMatrix();
    glTranslatef(0.4f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.1f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();


        //transformer2
    glPushMatrix();
    glTranslatef(-0.18f,0.625f,0.0f);
    glScaled(0.2,0.4, 0.0);
    transformer();
    glPopMatrix();

    //transformer1
    glPushMatrix();
    glTranslatef(-0.23f,0.62f,0.0f);
    glScaled(0.2,0.4, 0.0);
    transformer();
    glPopMatrix();


    //building
    glPushMatrix();
    glTranslatef(-1.55f, 0.84f, 0.0f);
    glScalef(.015, .0076, 0);
    Building(val);
    glPopMatrix();


    //troad
    glPushMatrix();
    glTranslatef(0.3f, 0.145f, 0.0);
    glScalef(1.3f, 0.425f, 0.0f);
    troad();
    glPopMatrix();


    //vehicles road
    glPushMatrix();
    glTranslatef(0.0f,0.84f,0.0f);
    glScalef(.5, .3, 0);
    vehicleCar(val);
    glPopMatrix();

      //bus
    glPushMatrix();
    glTranslatef(0.0f,0.55f,0.0f);
    glScalef(-2.5, 2, 0);
    bus(val);
    glPopMatrix();

    //lamppost_upperside
    glPushMatrix();
    glTranslatef(-0.8f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.0f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();


        //truck
    glPushMatrix();
    glTranslatef(0.0f,0.88f,0.0f);
    glScaled(0.7,0.5,0.0);
    vehicleTruck(val);
    glPopMatrix();



    //traficlight upper side
    glPushMatrix();
    glTranslatef(0.59f, 0.26f, 0.0f);
    glScalef(.007, .009, 0);
    trafficLight();
    glPopMatrix();

    //tower2
    glPushMatrix();
    glTranslatef(-0.4f,0.42f,0.0f);
    glScalef(.4, .4, 0);
    tower2(val);
    glPopMatrix();

        //tree1
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    //tree2
    glPushMatrix();
    glTranslatef(0.08f, -0.12f, 0.0f);
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();
    glPopMatrix();

    //tree 3 and 4
    glPushMatrix();
    glTranslatef(-0.4f, -0.05f, 0.0f);

    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    //tree_riverside
    glPushMatrix();
    glTranslatef(0.0f, -0.35f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, -0.35f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.08f, -0.12f, 0.0f);
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    //tunnelupper
    tunnelupper();


     //transformer2
    glPushMatrix();
    glTranslatef(-0.98f,0.16f,0.0f);
    glScaled(0.4,0.2, 0.0);
    transformer();
    glPopMatrix();

    //turbine
    glPushMatrix();
    glTranslatef(-0.75f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();



    //river
    river(val);

    glPushMatrix();
    glTranslatef(0.0f, 0.3f, 0.0f);
    waves();
    glPopMatrix();

    //ship1
    glPushMatrix();
    glScalef(0.7,0.7,0);
    glTranslatef(0, 0.25,0);
    ship1(val);
    glPopMatrix();

    //ship2
    glPushMatrix();
    glScalef(0.7,0.7,0);
    glTranslatef(0, 0.25,0);
    ship2(val);
    glPopMatrix();

     lowerriverside();

     roadborder();

     //lamppost
    glPushMatrix();
    glTranslatef(-0.8f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();



    //tunnel
    glPushMatrix();
    glTranslatef(0.01, 0.48, 0.0);
    glScalef(1.0, 1.7, 0.0);
    tunnel();
    glPopMatrix();

    //lowerroad
    lowerroad(val);

        //divider
    glPushMatrix();
    glTranslatef(0.0f,-0.1f,0.0f);
    lowerroaddivider(val);
    glPopMatrix();

         //yellowcar
    glPushMatrix();
    glTranslatef(0.0f,-0.81f,0.0f);
    glScalef(-0.012, .02, 0);
    blueCar(val, 0);
    glPopMatrix();


            //traficlight
    glPushMatrix();
    glTranslatef(0.70f, -0.98f, 0.0f);
    glScalef(.011, .013, 0);
    trafficLight();
    glPopMatrix();

        //bluecar
    glPushMatrix();
    glTranslatef(0.0f,-0.91f,0.0f);
    glScalef(.015, .018, 0);
    blueCar(val, 1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5, 0.3, 0.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.4, 0.65);
    glVertex2f(-0.2, 0.28);
    glVertex2f(-0.4, -0.033);
    glVertex2f(-0.35, -0.013);
    glVertex2f(-0.35, -0.013);
    glVertex2f(-0.30, 0.033);
    glVertex2f(-0.30, 0.033);
    glVertex2f(-0.25, 0.153);
    glVertex2f(-0.25, 0.153);
    glVertex2f(-0.2, 0.28);
    glEnd();
    glPopMatrix();

    //rain
    glPushMatrix();
    glScalef(0.55,0.55,0);
    glTranslatef(RainPos-4.5f,RainPos,0);
    RainFall();
    glPopMatrix();



    glFlush();
}

void displayNight(){

    val = 9;


    riverside(val);

    //turbine
    glPushMatrix();
    glTranslatef(-0.85f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();


    sky(val);

    glPushMatrix();
    glTranslatef(-0.1, 0.1, 0.0);
    star();
    glPopMatrix();

    sun_moon(val);


    upperroad(val);

    //tower
    glPushMatrix();
    glTranslatef(-0.6f,0.82f,0.0f);
    glScalef(.4, .4, 0);
    tower(val);
    glPopMatrix();

    //lower_roaddivider
    glPushMatrix();
    glTranslatef(-0.4f, 1.0f, 0.0f);
    glScalef(0.7, 0.7, 0.0);
    lowerroaddivider(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.95f, 1.0f, 0.0f);
    glScalef(0.7, 0.7, 0.0);
    lowerroaddivider(val);
    glPopMatrix();


    //upperborder
    glPushMatrix();
    glTranslatef(-0.3, 0.69,0);
     glScalef(0.715,0.5,0);
      roadborder();
      glPopMatrix();

    //windmill
    glPushMatrix();
    glTranslatef(0.4f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.1f,0.63f,0.0f);
    glScalef(.072, .072, 0);
    windmill(val);
    glPopMatrix();


        //transformer2
    glPushMatrix();
    glTranslatef(-0.18f,0.625f,0.0f);
    glScaled(0.2,0.4, 0.0);
    transformer();
    glPopMatrix();

    //transformer1
    glPushMatrix();
    glTranslatef(-0.23f,0.62f,0.0f);
    glScaled(0.2,0.4, 0.0);
    transformer();
    glPopMatrix();


    //building
    glPushMatrix();
    glTranslatef(-1.55f, 0.84f, 0.0f);
    glScalef(.015, .0076, 0);
    Building(val);
    glPopMatrix();


    //troad
    glPushMatrix();
    glTranslatef(0.3f, 0.145f, 0.0);
    glScalef(1.3f, 0.425f, 0.0f);
    troad();
    glPopMatrix();


    //vehicles road
    glPushMatrix();
    glTranslatef(0.0f,0.84f,0.0f);
    glScalef(.5, .3, 0);
    vehicleCar(val);
    glPopMatrix();

      //bus
    glPushMatrix();
    glTranslatef(0.0f,0.55f,0.0f);
    glScalef(-2.5, 2, 0);
    bus(val);
    glPopMatrix();

    //lamppost_upperside
    glPushMatrix();
    glTranslatef(-0.8f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.0f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8f, 0.55f, 0.0f);
    glScalef(0.08,0.08,0);
    lampPost_panelRoad(val);
    glPopMatrix();


        //truck
    glPushMatrix();
    glTranslatef(0.0f,0.88f,0.0f);
    glScaled(0.7,0.5,0.0);
    vehicleTruck(val);
    glPopMatrix();



    //traficlight upper side
    glPushMatrix();
    glTranslatef(0.59f, 0.26f, 0.0f);
    glScalef(.007, .009, 0);
    trafficLight();
    glPopMatrix();

    //tower2
    glPushMatrix();
    glTranslatef(-0.4f,0.42f,0.0f);
    glScalef(.4, .4, 0);
    tower2(val);
    glPopMatrix();

        //tree1
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    //tree2
    glPushMatrix();
    glTranslatef(0.08f, -0.12f, 0.0f);
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();
    glPopMatrix();

    //tree 3 and 4
    glPushMatrix();
    glTranslatef(-0.4f, -0.05f, 0.0f);

    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    //tree_riverside
    glPushMatrix();
    glTranslatef(0.0f, -0.35f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, -0.35f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.08f, -0.12f, 0.0f);
    glPushMatrix();
    glTranslatef(0.3f, -0.3f, 0.0f);
    glScalef(.014, .014, 0);
    tree1(val);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    //tunnelupper
    tunnelupper();


     //transformer2
    glPushMatrix();
    glTranslatef(-0.98f,0.16f,0.0f);
    glScaled(0.4,0.2, 0.0);
    transformer();
    glPopMatrix();

    //turbine
    glPushMatrix();
    glTranslatef(-0.75f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85f,0.13f,0.0f);
    glScaled(0.3,0.3, 0.0);
    Xturbine();
    glPopMatrix();



    //river
    river(val);

    glPushMatrix();
    glTranslatef(0.0f, 0.3f, 0.0f);
    waves();
    glPopMatrix();

 //ship1
    glPushMatrix();
    glScalef(0.7,0.7,0);
    glTranslatef(0, 0.25,0);
    ship1(val);
    glPopMatrix();

    //ship2
    glPushMatrix();
    glScalef(0.7,0.7,0);
    glTranslatef(0, 0.25,0);
    ship2(val);
    glPopMatrix();


     lowerriverside();

     roadborder();

     //lamppost
    glPushMatrix();
    glTranslatef(-0.8f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4f, -0.60f, 0.0f);
    glScalef(0.12,0.12,0);
    lampPost_panelRoad(val);
    glPopMatrix();



    //tunnel
    glPushMatrix();
    glTranslatef(0.01, 0.48, 0.0);
    glScalef(1.0, 1.7, 0.0);
    tunnel();
    glPopMatrix();

    //lowerroad
    lowerroad(val);

        //divider
    glPushMatrix();
    glTranslatef(0.0f,-0.1f,0.0f);
    lowerroaddivider(val);
    glPopMatrix();

         //yellowcar
    glPushMatrix();
    glTranslatef(0.0f,-0.81f,0.0f);
    glScalef(-0.012, .02, 0);
    blueCar(val, 0);
    glPopMatrix();


            //traficlight
    glPushMatrix();
    glTranslatef(0.70f, -0.98f, 0.0f);
    glScalef(.011, .013, 0);
    trafficLight();
    glPopMatrix();

        //bluecar
    glPushMatrix();
    glTranslatef(0.0f,-0.91f,0.0f);
    glScalef(.015, .018, 0);
    blueCar(val, 1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5, 0.3, 0.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.4, 0.65);
    glVertex2f(-0.2, 0.28);
    glVertex2f(-0.4, -0.033);
    glVertex2f(-0.35, -0.013);
    glVertex2f(-0.35, -0.013);
    glVertex2f(-0.30, 0.033);
    glVertex2f(-0.30, 0.033);
    glVertex2f(-0.25, 0.153);
    glVertex2f(-0.25, 0.153);
    glVertex2f(-0.2, 0.28);
    glEnd();
    glPopMatrix();

    glFlush();

};

void info(){
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POLYGON);
    glColor3ub(153,153,255);
    glVertex2f(-2.0f, 2.0f);
    glColor3ub(0,255,255);
    glVertex2f(2.0f, 2.0f);
    glColor3ub(0,102,204);
    glVertex2f(2.0f, -2.0f);
    glColor3ub(102,0,204);
    glVertex2f(-2.0f, -2.0f);
    glEnd();

    glColor3ub(255,255,255);
    char *C="Computer Graphics[A]";
    glRasterPos2f( -0.2 , 0.9 );
    for(int i = 0; C[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, C[i]);


glColor3ub(255,255,255);
    char *D="AWS ENERGY PLANT";
    glRasterPos2f( -0.2 , 0.7 );
    for(int i = 0; D[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, D[i]);



glColor3ub(255,255,255);
    char *F="Submitted by  ";
    glRasterPos2f( -0.7 , 0.2 );
    for(int i = 0; F[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, F[i]);


glColor3ub(255,255,255);
    char *G="ID:20-43303-1      MUNIM AHMED";
    glRasterPos2f( -0.7 , 0.05 );
    for(int i = 0; G[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, G[i]);


glColor3ub(255,255,255);
    char *H="ID:20-43314-1      Mirza Asif Mahmud";
    glRasterPos2f( -0.7, -0.1 );
    for(int i = 0; H[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, H[i]);


glColor3ub(255,255,255);
    char *I="ID:20-43607-1      Arafat Al Khair Fuad";
    glRasterPos2f( -0.7 , -0.25 );
    for(int i = 0; I[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, I[i]);


glColor3ub(255,255,255);
    char *J="ID:20-42268-1      Nabila Chowdhury Joya";
    glRasterPos2f( -0.7 , -0.4 );
    for(int i = 0; J[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, J[i]);

    glColor3ub(255,255,255);
    char *N="ID: 20-42936-1      Umme Ruman Rifat";
    glRasterPos2f( -0.7 , -0.55 );
    for(int i = 0; N[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, N[i]);

    glColor3ub(255,255,255);
    char *K="Press 'D' for Day View";
    glRasterPos2f( 0.3, 0.0 );
    for(int i = 0; K[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,K[i]);

    glColor3ub(255,255,255);
    char *L="Press 'N' for Night View";
    glRasterPos2f( 0.3, -0.1 );
    for(int i = 0; L[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, L[i]);

    glColor3ub(255,255,255);
    char *M="Press 'R' for Rain View";
    glRasterPos2f( 0.3, -0.2 );
    for(int i = 0; M[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, M[i]);

        glColor3ub(255,255,255);
    char *P="Sound ON = Click Mouse Left-Button";
    glRasterPos2f( 0.3, -0.3 );
    for(int i = 0; P[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, P[i]);

            glColor3ub(255,255,255);
    char *O="Sound OFF = Click Mouse Right-Button";
    glRasterPos2f( 0.3, -0.4 );
    for(int i = 0; O[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, O[i]);


glFlush();

}

void handleKeypress(unsigned char key, int x, int y){
	switch (key)
	{

        case 'D':
        case 'd':
            glutDisplayFunc(displayDay);
            	soundNull();
            break;

        case 'N':
        case 'n':
            glutDisplayFunc(displayNight);
            	soundNull();
            break;

        case 'R':
        case 'r':
            glutDisplayFunc(displayRain);
            	soundNull();
            break;
	}

}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
	   if(val==5)
       {
           soundRain();
       }
	    else if(val==1 || val==9)
        {
            soundDay();
        }
	}
	if (button == GLUT_RIGHT_BUTTON)
	{
			soundNull();
	}

	glutPostRedisplay();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1920, 1080);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("AWS Energy Plant");
    glutDisplayFunc(info);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(100, updateTruck, 0);
   glutTimerFunc(100, updateCar, 0);
   glutTimerFunc(100, updateBlueCar1, 0);
   glutTimerFunc(100, updatBlueCar2, 0);
   glutTimerFunc(100, updateBlueCar3, 0);
   glutTimerFunc(300, animation_waves, 0);
   glutTimerFunc(200,animation_ship1,0);
   glutTimerFunc(200,animation_ship2,0);
   glutTimerFunc(100, animation_car1,0);
   glutTimerFunc(100, CloudAnimation1, 0);
   glutTimerFunc(100, CloudAnimation2, 0);
   glutTimerFunc(200, doFrame,0);
    glutTimerFunc(100, RainAnimation, 0);



   init();
   glutMainLoop();
   return 0;
}
