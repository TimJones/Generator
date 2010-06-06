#ifndef GLSURFACE_H
#define GLSURFACE_H

#include <QGLWidget>
#include "horizon.h"

class GLSurface : public QGLWidget
{
Q_OBJECT
public:
    explicit GLSurface(QWidget *parent = 0);

protected:
    void initializeGL();
    void resizeGL( int width, int height );
    void paintGL();

    Horizon horizon;

signals:

public slots:
    void step();
};

#endif // GLSURFACE_H
