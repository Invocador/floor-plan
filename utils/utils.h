#ifndef UTILS_H
#define UTILS_H

#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#endif


typedef struct
{
    GLfloat x;
    GLfloat y;
} Point;

void draw_square_by_area(double area, Point* p);
void draw_door();

#endif
