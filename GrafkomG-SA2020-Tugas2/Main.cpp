#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <GL/freeglut.h>

int j = 0;
double space, space_1, space_2, space_3, space_4, space_5, space_6, space_7;
double space_8, space_9, space_10, space_11, space_12, space_13;

void orbit(double r, int vertex) {
	double ng = (double)vertex;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double orb_x = r * cos(2 * M_PI * i / ng);
		double orb_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(orb_x, orb_y);
	}

	glEnd();
}

void earth_orb(double r, int vertex) {
	double ng = (double)vertex;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double erb_x = r * cos(2 * M_PI * i / ng);
		double erb_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(erb_x + space_4, erb_y + space_5);
	}

	glEnd();
}

void mars_orb(double r, int vertex) {
	double ng = (double)vertex;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double mrb_x = r * cos(2 * M_PI * i / ng);
		double mrb_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(mrb_x + space_6, mrb_y + space_7);
	}

	glEnd();
}

void sun(double r, int vertex) {
	double ng = (double) vertex;
	glBegin(GL_POLYGON);
	for(int i = 0; i < vertex; i++) {
		double sun_x = r * cos(2 * M_PI * i / ng);
		double sun_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(sun_x , sun_y);
	}
	
	glEnd();
}

void mercury(double r, int vertex) {
	double ng = (double) vertex;
	glBegin(GL_POLYGON);
	for(int i = 0; i < vertex; i++) {
		double mer_x = r * cos(2 * M_PI * i / ng);
		double mer_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(mer_x + space, mer_y + space_1);
	}

	glEnd();
}

void venus(double r, int vertex) {
	double ng = (double) vertex;
	glBegin(GL_POLYGON);
	for(int i = 0; i < vertex; i++) {
		double ven_x = r * cos(2 * M_PI * i / ng);
		double ven_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(ven_x + space_2, ven_y + space_3);
	}
	
	glEnd();
}

void earth(double r, int vertex) {
	double ng = (double)vertex;
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double ear_x = r * cos(2 * M_PI * i / ng);
		double ear_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(ear_x + space_4, ear_y + space_5);
	}

	glEnd();
}

void moon(double r, int vertex) {
	double ng = (double)vertex;
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double moon_x = r * cos(2 * M_PI * i / ng);
		double moon_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(moon_x + space_4 + space_8 , moon_y + space_5 + space_9);
	}

	glEnd();
}

void mars(double r, int vertex) {
	double ng = (double)vertex;
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double mar_x = r * cos(2 * M_PI * i / ng);
		double mar_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(mar_x + space_6, mar_y + space_7);
	}

	glEnd();
}

void phobos(double r, int vertex) {
	double ng = (double)vertex;
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double pho_x = r * cos(2 * M_PI * i / ng);
		double pho_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(pho_x + space_6 + space_10, pho_y + space_7 + space_11);
	}

	glEnd();
}

void deimos(double r, int vertex) {
	double ng = (double)vertex;
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double dei_x = r * cos(2 * M_PI * i / ng);
		double dei_y = r * sin(2 * M_PI * i / ng);
		glVertex2d(dei_x + space_6 + space_12, dei_y + space_7 + space_13);
	}

	glEnd();
}

void line() {
	glBegin(GL_LINES);
	glColor3ub(105, 105, 105);
	glVertex2f(0.0, 0.0);
	glVertex2f(space, space_1);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3ub(105, 105, 105);
	glVertex2f(0.0, 0.0);
	glVertex2f(space_2, space_3);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3ub(105, 105, 105);
	glVertex2f(0.0, 0.0);
	glVertex2f(space_4, space_5);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3ub(105, 105, 105);
	glVertex2f(0.0, 0.0);
	glVertex2f(space_6, space_7);
	glEnd();
	
	
	glBegin(GL_LINES);
	glColor3ub(105, 105, 105);
	glVertex2f(space_4, space_5);
	glVertex2f(space_4 + space_8, space_5 + space_9);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3ub(105, 105, 105);
	glVertex2f(space_6, space_7);
	glVertex2f(space_6 + space_10, space_7 + space_11);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(105, 105, 105);
	glVertex2f(space_6, space_7);
	glVertex2f(space_6 + space_12, space_7 + space_13);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	line();

	glColor3ub(105, 105, 105);
	orbit(20.0, 50);
	orbit(40.0, 50);
	orbit(60.0, 50);
	orbit(80.0, 50);

	glColor3ub(105, 105, 105);
	earth_orb(10.0, 50);
	
	glColor3ub(105, 105, 105);
	mars_orb(6.0, 50);
	
	glColor3ub(105, 105, 105);
	mars_orb(9.0, 50);

	glColor3ub(255, 255, 0);
	sun(10.0, 50);

	glColor3ub(192, 192, 192);
	mercury(2.0, 50);
	
	glColor3ub(173, 255, 47);
	venus(4.5, 50);
	
	glColor3ub(65, 105, 225);
	earth(5.0, 50);

	glColor3ub(128, 128, 128);
	moon(1.0, 50);
	
	glColor3ub(255, 165, 0);
	mars(3.0, 50);
	
	glColor3ub(128, 128, 128);
	phobos(1.0, 50);
	
	glColor3ub(128, 128, 128);
	deimos(1.0, 50);

	glutSwapBuffers();
}

void revolution_mer(double r, int vertex) {
	
	double rev_x = r * cos(2 * M_PI * j / vertex);
	double rev_y = r * sin(2 * M_PI * j / vertex);
	j++;

	space = rev_x;
	space_1 = rev_y;
}

void revolution_ven(double r, int vertex) {
	
	double rev_x = r * cos(2 * M_PI * j / vertex);
	double rev_y = r * sin(2 * M_PI * j / vertex);
	j++;

	space_2 = rev_x;
	space_3 = rev_y;
}

void revolution_ear(double r, int vertex) {
	
	double rev_x = r * cos(2 * M_PI * j / vertex);
	double rev_y = r * sin(2 * M_PI * j / vertex);
	j++;

	space_4 = rev_x;
	space_5 = rev_y;
}

void revolution_mar(double r, int vertex) {
	
	double rev_x = r * cos(2 * M_PI * j / vertex);
	double rev_y = r * sin(2 * M_PI * j / vertex);
	j++;

	space_6 = rev_x;
	space_7 = rev_y;
}

void revolution_moo(double r, int vertex) {
	
	double rev_x = r * cos(2 * M_PI * j / vertex);
	double rev_y = r * sin(2 * M_PI * j / vertex);
	j++;

	space_8 = rev_x;
	space_9 = rev_y;
}

void revolution_pho(double r, int vertex) {
	
	double rev_x = r * cos(2 * M_PI * j / vertex);
	double rev_y = r * sin(2 * M_PI * j / vertex);
	j++;

	space_10 = rev_x;
	space_11 = rev_y;
}

void revolution_dei(double r, int vertex) {
	
	double rev_x = r * cos(2 * M_PI * j / vertex);
	double rev_y = r * sin(2 * M_PI * j / vertex);
	j++;

	space_12 = rev_x;
	space_13 = rev_y;
}

void timer(int) {
	glutPostRedisplay();
	glutTimerFunc(16, timer, 0);

	revolution_mer(20.0, 1000);
	revolution_ven(40.0, 1500);
	revolution_ear(60.0, 2500);
	revolution_mar(80.0, 3000);
	revolution_moo(10.0, 500);
	revolution_pho(6.0, 400);
	revolution_dei(9.0, 500);
	
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Solar System");
	glutDisplayFunc(display);

	glutTimerFunc(0, timer, 0);

	myinit();
	glutMainLoop();

	return 0;
}