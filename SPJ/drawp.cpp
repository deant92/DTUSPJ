//Create P

#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "3DCurve.h"
#include "drawCube.h"


void drawP(void){

static double theta_stop1 = 270;

glPushMatrix();
	glTranslatef(0.26,1.82,0);
	//glRotatef(10,1,1,1);
	glRotatef(180,0,1,0);
	glScalef(0.35,0.35,0.35);	
	draw3Dcurve  (2.1,          //depth  
				 1.0,          //inner radius
				  2.0,          //outer radius
				  90.0,          //start angle
				  theta_stop1,  //stop angle
				  5.0);         //anular increments
				  			  
	glPopMatrix();	
	/*glPushMatrix();		  
	glTranslatef(0,2.76,0);
	glRotatef(-90,0,0,1);
	glScalef(0.5,2,1);
	cube();
	glPopMatrix();*/
	glPushMatrix();
	glTranslatef(0,1.28,0);
	//glRotatef(-25,0,0,1);
	glScalef(0.5,2.5,0.8);
	cube();
	glPopMatrix();
	}
