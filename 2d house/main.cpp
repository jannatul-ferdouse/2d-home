#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex3f (0.5, 0, 0.0);
glVertex3f (0.5, 1, 0.0);

glEnd();

glColor3f (1.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex3f (0, 0.5, 0.0);
glVertex3f (1, 0.5, 0.0);

glEnd();


glColor3f (.255,.127,.80);
glBegin(GL_POLYGON); // right star
glVertex3f (0.6, 0.45, 0.0);
glVertex3f (0.7, 0.45, 0.0);
glVertex3f (0.7, 0.55 , 0.0);
glVertex3f (0.6, 0.55, 0.0);
glEnd();
// bottom star
glColor3f (.255,.127,.80);
glBegin(GL_TRIANGLES);
glVertex3f (0.6, 0.45, 0.0);
glVertex3f (0.7, 0.45, 0.0);
glVertex3f (0.65, 0.35, 0.0);

glEnd();
//right star
glColor3f (.255,.127,.80);
glBegin(GL_TRIANGLES);
glVertex3f (0.7, 0.45, 0.0);
glVertex3f (0.7, 0.55 , 0.0);
glVertex3f (0.8, 0.50, 0.0);


glEnd();
//up star
glColor3f (.255,.127,.80);
glBegin(GL_TRIANGLES);
glVertex3f (0.7, 0.55 , 0.0);
glVertex3f (0.6, 0.55, 0.0);
glVertex3f (0.65, 0.65, 0.0);


glEnd();

//up star
glColor3f (.255,.127,.80);
glBegin(GL_TRIANGLES);
glVertex3f (0.60, 0.45, 0.0);
glVertex3f (0.60, 0.55, 0.0);
glVertex3f (0.50, 0.50, 0.0);


glEnd();
//upper
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON); // right star
glVertex3f (0.45, 0.60, 0.0);
glVertex3f (0.55, 0.60, 0.0);
glVertex3f (0.55, 0.70 , 0.0);
glVertex3f (0.45, 0.70, 0.0);
glEnd();
// bottom star
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex3f (0.45, 0.60, 0.0);
glVertex3f (0.55, 0.60, 0.0);
glVertex3f (0.50, 0.50 , 0.0);


glEnd();
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_TRIANGLES); // right star

glVertex3f (0.55, 0.60, 0.0);
glVertex3f (0.55, 0.70 , 0.0);
glVertex3f (0.65, 0.65, 0.0);
glEnd();

glColor3f (1.0, 0.0, 0.0);
glBegin(GL_TRIANGLES); // up star
glVertex3f (0.55, 0.70 , 0.0);
glVertex3f (0.45, 0.70, 0.0);
glVertex3f (0.50, 0.80, 0.0);

glEnd();
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_TRIANGLES); // left star
glVertex3f (0.45, 0.60, 0.0);
glVertex3f (0.45, 0.70, 0.0);
glVertex3f (0.35, 0.65, 0.0);

glEnd();

//left polygon
glColor3f (240,255,240);
glBegin(GL_POLYGON);
glVertex3f (0.30, 0.45, 0.0);
glVertex3f (0.40, 0.45, 0.0);
glVertex3f (0.40, 0.55 , 0.0);
glVertex3f (0.30, 0.55, 0.0);
glEnd();

glColor3f (240,255,240);
glBegin(GL_TRIANGLES); // bottom star
glVertex3f (0.30, 0.45, 0.0);
glVertex3f (0.40, 0.45, 0.0);
glVertex3f (0.35, 0.35, 0.0);

glEnd();
glColor3f (240,255,240);
glBegin(GL_TRIANGLES); // right star
glVertex3f (0.40, 0.45, 0.0);
glVertex3f (0.40, 0.55 , 0.0);
glVertex3f (0.50, 0.50 , 0.0);

glEnd();
glColor3f (240,255,240);
glBegin(GL_TRIANGLES); // up star
glVertex3f (0.40, 0.55 , 0.0);
glVertex3f (0.30, 0.55, 0.0);
glVertex3f (0.35, 0.65, 0.0);

glEnd();
glColor3f (240,255,240);
glBegin(GL_TRIANGLES); // up star
glVertex3f (0.30, 0.45, 0.0);
glVertex3f (0.30, 0.55, 0.0);
glVertex3f (0.20, 0.50, 0.0);


glEnd();



 //left polygoin
 glColor3f (100,.60,80);
 glBegin(GL_POLYGON);
glVertex3f (0.45, 0.40, 0.0);
glVertex3f (0.55, 0.40, 0.0);
glVertex3f (0.55, 0.30 , 0.0);
glVertex3f (0.45, 0.30, 0.0);
glEnd();
glColor3f (100,.60,80);
glBegin(GL_TRIANGLES); // up star
glVertex3f (0.45, 0.40, 0.0);
glVertex3f (0.55, 0.40, 0.0);
glVertex3f (0.50, 0.50, 0.0);


glEnd();

glColor3f (100,.60,80);
glBegin(GL_TRIANGLES); // up star
glVertex3f (0.55, 0.40, 0.0);
glVertex3f (0.55, 0.30 , 0.0);
glVertex3f (0.65, 0.35, 0.0);


glEnd();
glColor3f (100,.60,80);
glBegin(GL_TRIANGLES); // up star
glVertex3f (0.55, 0.30 , 0.0);
glVertex3f (0.45, 0.30, 0.0);
glVertex3f (0.50, 0.20, 0.0);


glEnd();


glColor3f (100,.60,80);
glBegin(GL_TRIANGLES); // up star
glVertex3f (0.45, 0.40, 0.0);

glVertex3f (0.45, 0.30, 0.0);
glVertex3f (0.35, 0.35, 0.0);


glEnd();



/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (.240,.255,.255, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
