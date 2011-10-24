//Create J

#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "3DCurve.h"
#include "drawCube.h"

void drawJ(void){

static double theta_stop1 = 270;

glPushMatrix();
	glTranslatef(-0.76,0.5,0);
	//glRotatef(10,1,1,1);
	glRotatef(90,0,0,1);
	glScalef(0.5,0.5,0.5);	
	draw3Dcurve  (2.1,          //depth  
				 1.0,          //inner radius
				  2.0,          //outer radius
				  90.0,          //start angle
				  theta_stop1,  //stop angle
				  5.0);         //anular increments
				  			  
	glPopMatrix();	
	glPushMatrix();		  
	glTranslatef(0,2.76,0);
	glRotatef(-90,0,0,1);
	glScalef(0.5,2,1);
	cube();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,1.5,0);
	//glRotatef(-25,0,0,1);
	glScalef(0.5,2,1);
	cube();
	glPopMatrix();
	}
