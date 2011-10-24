//Create S

#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "3DCurve.h"
#include "drawCube.h"

void drawS(void){

static double theta_stop1 = 300;

glPushMatrix();
	glScalef(0.8,1,1);

	//Draw curve using code in 3DCurve.cpp

	glScalef(0.5,0.5,0.5);

	glPushMatrix();
	//glScalef(0.5,0.5,0.5);

	//Draw curve using code in 3DCurve.cpp

	glTranslatef(0,-1.75,0);
	glRotatef(180,0,1,0);
	draw3Dcurve  (1.0,          //depth  
				  1.5,          //inner radius
				  2.0,          //outer radius
				  90.0,          //start angle
				  theta_stop1,  //stop angle
				  5.0);         //anular increments
  
	glTranslatef(0,3.5,0);
	glRotatef(180,0,0,1);
	draw3Dcurve  (1.0,          //depth  
				  1.5,          //inner radius
				  2.0,          //outer radius
				  90.0,          //start angle
				  theta_stop1,  //stop angle
				  5.0);         //anular increments
				  
	glPopMatrix();	
	glPushMatrix();		  
	glTranslatef(0.8,3,0);
	glRotatef(-25,0,0,1);
	glScalef(0.5,1.2,1);
	cube();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.8,-3,0);
	glRotatef(-25,0,0,1);
	glScalef(0.5,1.2,1);
	cube();
	glPopMatrix();
	
	glutSwapBuffers();
}	
