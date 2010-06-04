#include "glsurface.h"

GLSurface::GLSurface( QWidget *parent):
    QGLWidget(parent)
{
}

void GLSurface::initializeGL()
{
    qglClearColor( QColor( "white" ) );
    glDisable( GL_LIGHTING );
    glDisable( GL_DITHER );
    glDisable( GL_BLEND );
    glDisable( GL_DEPTH_TEST );
}

void GLSurface::paintGL()
{
    glClear( GL_COLOR_BUFFER_BIT );

    // Draw stuff!!

    glFlush();
}

void GLSurface::resizeGL( int width, int height )
{
    glViewport( 0, 0, width, height );
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glOrtho( 0.0, width, 0.0, height, 0.0, 1.0 );
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glTranslatef( 0.375, 0.375, 0.0 );
}
