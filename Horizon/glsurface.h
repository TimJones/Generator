#ifndef GLSURFACE_H
#define GLSURFACE_H

#include <QGLWidget>

class GLSurface : public QGLWidget
{
Q_OBJECT
public:
    explicit GLSurface(QWidget *parent = 0);

protected:
    void initializeGL();
    void resizeGL( int width, int height );
    void paintGL();

signals:

public slots:

};

#endif // GLSURFACE_H
