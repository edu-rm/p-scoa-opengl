#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.1415926535898
#define window_height 400
#define window_width 600

void display(void);
void tela(GLsizei w, GLsizei h);

int main(int argc, char** argv)
{
    glutInit(&argc, argv); //Suporte a janelas
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //padrao de cores

    glutInitWindowSize(window_width, window_height); //Tamanho janela
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Push and Pop");

    //glutFullScreen();
    glutReshapeFunc(tela);//configurar tela
    glutDisplayFunc(display);
    glutMainLoop(); //redesenhar

    return(0);
}

void desenhar() {
    glPushMatrix(); //Empilhar e armazenar matriz
    glPushMatrix();
    GLfloat circ_pnt = 100;
    GLfloat ang, raioX = 30.0f, raioY = 30.0f;
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < circ_pnt; i++) {
        ang = (2 * PI * i) / circ_pnt;
        glVertex2f(cos(ang) * raioX, sin(ang) * raioY);
        printf("%f %f\n", cos(ang) * raioX, sin(ang) * raioY);
    }
    glEnd();
    
    glTranslatef(0, -30, 0); //Deslocar matriz
    circ_pnt = 100;
    ang = 0, raioX = 30.0f, raioY = 30.0f;
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < circ_pnt; i++) {
        ang = (2 * PI * i) / circ_pnt;
        glVertex2f(cos(ang) * raioX, sin(ang) * raioY);
        printf("%f %f\n", cos(ang) * raioX, sin(ang) * raioY);
    }
    glEnd();

    glTranslatef(-20, -50, 0); //Deslocar matriz

    glColor3f(255, 255.0, 0);
    glBegin(GL_TRIANGLES);
        glVertex3f(20.0, -50, 0.0);
        glVertex3f(0, 30.0, 0.0);
        glVertex3f(40.0, 30.0, 0.0);
    glEnd();
    
    glPopMatrix(); //Empilhar e armazenar matriz
    //glTranslatef(0, 0, 0); //Deslocar matriz
    
    glTranslatef(-100, 0, 0); //Deslocar matriz

    circ_pnt = 100;
    ang, raioX = 30.0f, raioY = 30.0f;
    glColor3f(1.0, 0.7, 0.3);
    glBegin(GL_POLYGON);
    for (int i = 0; i < circ_pnt; i++) {
        ang = (2 * PI * i) / circ_pnt;
        glVertex2f(cos(ang) * raioX, sin(ang) * raioY);
        printf("%f %f\n", cos(ang) * raioX, sin(ang) * raioY);
    }
    glEnd();

    glTranslatef(0, -30, 0); //Deslocar matriz

    circ_pnt = 100;
    ang = 0, raioX = 30.0f, raioY = 30.0f;
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < circ_pnt; i++) {
        ang = (2 * PI * i) / circ_pnt;
        glVertex2f(cos(ang) * raioX, sin(ang) * raioY);
        printf("%f %f\n", cos(ang) * raioX, sin(ang) * raioY);
    }
    glEnd();

    glTranslatef(-20, -50, 0); //Deslocar matriz

    glColor3f(255, 255.0, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(20.0, -50, 0.0);
    glVertex3f(0, 30.0, 0.0);
    glVertex3f(40.0, 30.0, 0.0);
    glEnd();
    
    glPopMatrix();
    glTranslatef(140, 0, 0); //Deslocar matriz

    circ_pnt = 100;
    ang = 0, raioX = 40.0f, raioY = 60.0f;
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < circ_pnt; i++) {
        ang = (2 * PI * i) / circ_pnt;
        glVertex2f(cos(ang) * raioX, sin(ang) * raioY);
        printf("%f %f\n", cos(ang) * raioX, sin(ang) * raioY);
    }
    glEnd();

    circ_pnt = 100;
    ang = 0, raioX = 40.0f, raioY = 60.0f;
    glColor3f(1.0, 0.3, 0.4);
    glBegin(GL_POLYGON);
    for (int i = 0; i < circ_pnt / 2; i++) {
        ang = (2 * PI * i) / circ_pnt;
        glVertex2f(cos(ang) * raioX, sin(ang) * raioY);
        printf("%f %f\n", cos(ang) * raioX, sin(ang) * raioY);
    }
    glEnd();
    glTranslatef(0, 120, 0); //Deslocar matriz

    circ_pnt = 100;
    ang = 0, raioX = 60.0f, raioY = 60.0f;
    glColor3f(0.7, 0.2, 0.2);
    glBegin(GL_POLYGON);
  
    for (int i = 50; i < circ_pnt; i++) {
        ang = (2 * PI * i) / circ_pnt;
        glVertex2f(cos(ang) * raioX, sin(ang) * raioY);
        printf("%f %f\n", cos(ang) * raioX, sin(ang) * raioY);
    }
    glEnd();
    //glColor3f(0, 1.0, 0);
    //glBegin(GL_QUADS);
    //glVertex3f(40.0, 40.0, 0.0);
    //glVertex3f(-40.0, 40.0, 0.0);
    //glVertex3f(-40.0, -40.0, 0.0);
    //glVertex3f(40.0, -40.0, 0.0);
    //glEnd();

    //glPopMatrix(); //Restaurar matriz da pilha

    //glColor3f(255, 255.0, 0);
    //glBegin(GL_QUADS);
    //glVertex3f(20.0, 20.0, 0.0);
    //glVertex3f(-20.0, 20.0, 0.0);
    //glVertex3f(-20.0, -20.0, 0.0);
    //glVertex3f(20.0, -20.0, 0.0);
    //glEnd();
    
}


void display()
{
    glMatrixMode(GL_MODELVIEW); //coordenadas de desenho
    glLoadIdentity();

    glClearColor(0, 0, 1, 1); //cor de fundo
    glClear(GL_COLOR_BUFFER_BIT); //Executa limpeza

    //Especificar onde o desenho ocorre
    glTranslatef(window_width / 2, window_height / 2, 0);

    glViewport(0, 0, window_width, window_height);
    desenhar();

    glFlush(); //Executa o desenho
}

void tela(GLsizei w, GLsizei h)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //cria janela (esq,direita,em baixo,em cima)
    gluOrtho2D(0, window_width, 0, window_height);

    glMatrixMode(GL_MODELVIEW);
}
