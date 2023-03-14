#include <windows.h>

#include <GL/gl.h>

#include <GL/glut.h>

#include <math.h>

#include <GL/glu.h>

#include <GL/glaux.h>

#include <stdio.h>

#include <stdlib.h>

void SpY(){
		
	glColor3f(1.0f, 0.0f, 1.0f);
	
	glBegin(GL_POLYGON);
	
	glVertex2f(-0.3, 0.4);
	
	glVertex2f(-0.55, 0.1);
	
	glVertex2f(-0.9, 0.88);
	
	glEnd();
	
	glFlush();
		
}

int main(int argc, char **argv){

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowSize(1000,1000);

	glutInitWindowPosition(200,200);

	glutCreateWindow("SpY");

	glutDisplayFunc(SpY);

	glutMainLoop();

	return 0;

}
