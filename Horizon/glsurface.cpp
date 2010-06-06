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

    GLfloat width = static_cast< GLfloat >( this->width() );
    GLfloat height = static_cast< GLfloat >( this->height() );
    GLfloat middle = height / 2.0;

    const Horizon::LineData line = horizon.getLineData();
    Horizon::LineDataIt it;

    glBegin( GL_LINE_STRIP );
    glColor3b( 0, 0, 0 );
    for( it = line.begin(); it != line.end(); it++ )
    {
        glVertex2f( width * it->x, middle + ( height * it->y ) );
    }
    glEnd();

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

void GLSurface::step()
{
    horizon.Generate();
    glDraw();
}
