#include <GL/glew.h>
#include <GL/glut.h>
#include <iostream>

// Define the position and size of objects
GLfloat palmTreeHeight = 4.0f;
GLfloat palmTreeTrunkRadius = 0.2f;
GLfloat palmTreeLeavesRadius = 2.0f;
GLfloat beachBallRadius = 0.5f;

void drawPalmTree() {
    // Draw palm tree trunk
    glColor3f(0.5f, 0.35f, 0.05f);
    GLUquadric* quadric = gluNewQuadric();
    gluCylinder(quadric, palmTreeTrunkRadius, palmTreeTrunkRadius, palmTreeHeight / 2, 20, 20);
    gluDeleteQuadric(quadric);

    // Draw palm tree leaves (a simple cone)
    glColor3f(0.0f, 0.8f, 0.0f);
    glTranslatef(0.0f, 0.0f, palmTreeHeight / 2);
    glutSolidCone(palmTreeLeavesRadius, palmTreeHeight / 2, 20, 20);
}

void drawBeachBall() {
    // Draw a colorful beach ball
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glutSolidSphere(beachBallRadius, 20, 20);
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set the viewpoint
    gluLookAt(5.0f, 5.0f, 5.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

    // Draw the beach scene
    drawPalmTree();
    glTranslatef(2.0f, 0.0f, 0.0f); // Move the beach ball to the right
    drawBeachBall();

    glutSwapBuffers();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (float)width / (float)height, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Beach Scene");

    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(drawScene);
    glutReshapeFunc(reshape);

    glutMainLoop();

    return 0;
}
