//draw cube.cpp

#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>


void polygon(int a, int b, int c , int d)
{

float vertices[][3] = 
{
		{-0.5,-0.5,-0.5},{0.5,-0.5,-0.5},
		{0.5,0.5,-0.5}, {-0.5,0.5,-0.5}, {-0.5,-0.5,0.5}, 
		{0.5,-0.5,0.5}, {0.5,0.5,0.5}, {-0.5,0.5,0.5}
};

float colors[][3] = {{0.0,0.5,0.5},{1.0,0.0,0.0},
	{1.0,1.0,0.0}, {0.0,1.0,0.0}, {0.0,0.0,1.0}, 
	{1.0,0.0,1.0}, {1.0,1.0,1.0}, {0.0,1.0,1.0}};

	// draw a polygon using colour of first vertex

 	glBegin(GL_POLYGON);
		glColor3fv(colors[a]);
		glVertex3fv(vertices[a]);
		glVertex3fv(vertices[b]);
		glVertex3fv(vertices[c]);
		glVertex3fv(vertices[d]);
	glEnd();
	
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_LINE_LOOP);
		glColor3f(0,0,0);
		glVertex3fv(vertices[a]);
		glVertex3fv(vertices[b]);
		glVertex3fv(vertices[c]);
		glVertex3fv(vertices[d]);
	glEnd();
	glDisable(GL_LINE_SMOOTH);
}

void cube(void) {
	//Draw unit cube centred on the origin
	polygon(0,3,2,1);
	polygon(2,3,7,6);
	polygon(4,7,3,0);
	polygon(1,2,6,5);
	polygon(7,4,5,6);
	polygon(5,4,0,1);
}
