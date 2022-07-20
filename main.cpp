/*
Project: Simple Aquarium
Course: Computer Grapihcs
Developed By: Adib Mehedi, Rafi Onik
*/

#include <GL/glut.h>
#include <math.h>
#include<stdio.h>


float _fish1Xaxis=4.0f;
float _fish1Yaxis=0.3f;

float _fish2Xaxis=0.7f;
float _fish2Yaxis=0.6f;

float _fish3Xaxis=-0.5f;
float _fish3Yaxis=0.8f;

float _fish4Xaxis=1.4f;
float _fish4Yaxis=0.6f;

float _bubbleYaxis=-4.0;


void update(int value) {
    //UPDATING VALUE FOR BLUE ROUND FISH-1
    if(_fish1Xaxis<-4){ //X-AXIS
        _fish1Xaxis=1.9f;
    }
    _fish1Xaxis-=0.01f;

    _fish1Yaxis=sin(_fish1Xaxis*2)/3+0.8; //y-AXIS
    if(_fish1Xaxis<0){
        _fish1Yaxis*(-1);
    }

    //UPDATING VALUE FOR RED ROUND FISH-2
    if(_fish2Xaxis>2.5){
        _fish2Xaxis=-2;
    }
    _fish2Xaxis+=0.008;
    _fish2Yaxis=sin(_fish2Xaxis+0.5);
    if(_fish2Xaxis<0){
        _fish2Yaxis*=(-1);
    }

    //UPDATING VALUE FOR Yellow FISH-3
    if(_fish3Xaxis<-1){
        _fish3Xaxis=1;
    }
    _fish3Xaxis-=0.003;
    _fish3Yaxis=sin(_fish3Xaxis+0.3)+1.0;

     //UPDATING VALUE FOR Yellow FISH-4
     if(_fish4Xaxis>2){
        _fish4Xaxis=-1;
     }
    _fish4Xaxis+=0.005;

    _fish4Yaxis=sin(_fish4Xaxis)-0.3;

    //UDATING VALUE OF BUBBLE
    if(_bubbleYaxis>3.0){
         _bubbleYaxis=(-4.0);
    }
    _bubbleYaxis+=0.02;


	glutPostRedisplay(); //Tell GLUT that the display has changed
	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(35, update, 0);
}

void BubbleCode(float y){

    glPushMatrix();
    glScalef(1.9f, 1.9f, 0.0f);
    glTranslated(0.4,y,0.0);
    glBegin(GL_POLYGON);
        glColor3f(0.878, 1.000, 1.000);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/50;
            float r=0.009;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
	glPopMatrix();

}

void DrawBubble()
{
    glTranslated(0.0, _bubbleYaxis,0.0);
    for(float f=0.1; f<1; f+=0.09){
            BubbleCode(f);
    }
}

void tree1Code(float x){
    glPushMatrix();
    glScalef(0.3f, 0.3f, 0.0f);
    glTranslated(x,-0.35,0.0);

    glBegin(GL_POLYGON);
    glVertex3f(0.2, 0.0, 0.0);
    glVertex3f(0.3, 0.0, 0.0);

    glVertex3f(0.3, 0.35, 0.0);
    glVertex3f(0.2, 0.35, 0.0);
    glColor3f(0.3, 0.0, 0.0);
    glVertex3f(0.2, 0.0, 0.0);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 0.35, 0.0);
    glVertex3f(0.5, 0.35, 0.0);
    glVertex3f(0.40, 0.55, 0.0);
    glVertex3f(0.10, 0.55, 0.0);
    glVertex3f(0.0, 0.35, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.05, 0.55, 0.0);
    glVertex3f(0.45, 0.55, 0.0);
    glColor3f(1.0,1.0,0.0);
    glVertex3f(0.35, 0.75, 0.0);
    glVertex3f(0.20, 0.75, 0.0);
    glColor3f(1.0,1.0,0.0);
    glVertex3f(0.05, 0.55, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.15, 0.75, 0.0);
    glVertex3f(0.40, 0.75, 0.0);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.25, 0.95, 0.0);
    glVertex3f(0.15, 0.75, 0.0);
    glEnd();
    glPopMatrix();
}


void tree2Code(float x){
    glPushMatrix();
    glScalef(0.3f, 0.3f, 0.0f);
    glTranslated(x,-0.35,0.0);
    glColor3f(0.3, 0.0, 0.0);

    glBegin(GL_POLYGON);
    glVertex3f(0.2, 0.0, 0.0);
    glVertex3f(0.3, 0.0, 0.0);
    glVertex3f(0.3, 0.35, 0.0);
    glVertex3f(0.2, 0.35, 0.0);
    glVertex3f(0.2, 0.0, 0.0);
    glEnd();

    glColor3f(0.7,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 0.35, 0.0);
    glVertex3f(0.5, 0.35, 0.0);
    glVertex3f(0.40, 0.55, 0.0);
    glVertex3f(0.10, 0.55, 0.0);
    glVertex3f(0.0, 0.35, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.05, 0.55, 0.0);
    glVertex3f(0.45, 0.55, 0.0);
    glColor3f(1.0,1.0,0.0);
    glVertex3f(0.35, 0.75, 0.0);
    glVertex3f(0.20, 0.75, 0.0);
    glColor3f(1.0,1.0,0.0);
    glVertex3f(0.05, 0.55, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.15, 0.75, 0.0);
    glVertex3f(0.40, 0.75, 0.0);
    glColor3f(0.4,1.0,0.0);
    glVertex3f(0.25, 0.95, 0.0);
    glVertex3f(0.15, 0.75, 0.0);
    glEnd();
    glPopMatrix();
}

void DrawTree1(){
    glPushMatrix();
    for(float f=-0.2;f<3;f+=0.5){
        tree1Code(f);
    }
    glPopMatrix();
}

void DrawTree2(){
    glPushMatrix();
    for(float f=-0.01;f<3;f+=0.5){
        tree2Code(f);
    }
    glPopMatrix();
}

void DrawWater() //This function is to draw water
{
    glBegin(GL_POLYGON);
    glColor3f(0.118, 0.565, 1.000);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(0.0, 2.0, 0.0);
    glEnd();
}

void DrawFish4() {
    glScalef(1.3f, 1.0f, 0.0f); //THIS IS TO SCALE THE FISH
    glTranslatef(_fish4Xaxis, _fish4Yaxis, 0.0); //THIS IS TO TRANSLATING THE FISH
    glRotatef(180.0, 0.0, 1.0, 0.0);
    glPushMatrix();

    //fishTail
    glColor3f(0.467, 0.533, 0.600); //yellow fish
    glBegin(GL_POLYGON);
    glVertex2f(0.7, -0.05);
    glVertex2f(0.75, -0.1);
    glVertex2f(0.85, -0.05);
    glVertex2f(0.75, 0.0);
    glEnd();

    glColor3f(0.863, 0.863, 0.863);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.83, -0.05);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(0.9, -0.09);
    glVertex2f(0.9, -0.01);
    glEnd();

    glColor3f(0.863, 0.863, 0.863);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.79, -0.125);
    glVertex2f(0.77, -0.07);
    glVertex2f(0.75, -0.095);
    glEnd();

    glColor3f(0.863, 0.863, 0.863);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.795, 0.035);
    glVertex2f(0.77, -0.02);
    glVertex2f(0.75, -0.007);
    glEnd();

    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.73, -0.035);
    glEnd();
    glPopMatrix();
}

void DrawFish3(){
    glScalef(1.3f, 1.0f, 0.0f); //THIS IS TO SCALE THE FISH
    glTranslatef(_fish3Xaxis,_fish3Yaxis, 0.0); //THIS IS TO TRANSLATING THE FISH
    glPushMatrix();

    glColor3f(1.0,1.0,0.0);//yellow fish
    glBegin(GL_POLYGON);
    glVertex2f(0.7,-0.05);
    glVertex2f(0.75,-0.1);
    glVertex2f(0.85,-0.05);
    glVertex2f(0.75,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.83,-0.05);
    glColor3f(1.8,0.5,0.0);
    glVertex2f(0.9,-0.09);
    glVertex2f(0.9,-0.01);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.79,-0.125);
    glVertex2f(0.77,-0.07);
    glVertex2f(0.75,-0.095);
    glEnd();

    glBegin(GL_TRIANGLES);
	glVertex2f(0.795,0.035);
	glVertex2f(0.77,-0.02);
    glVertex2f(0.75,-0.007);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.73,-0.035);
    glEnd();
    glPopMatrix();
}

void DrawFish2(){

    glScalef(0.6f, 0.6f, 0.0f); //THIS IS TO SCALE THE FISH
    glTranslatef(_fish2Xaxis, _fish2Yaxis, 0.0);//THIS IS TO TRANSLATING THE FISH
    glRotatef(180.0, 0.0, 1.0, 0.0);
    glPushMatrix();
    glColor3f(0.980, 0.502, 0.447);
    //fishTail
    glBegin(GL_POLYGON);
    glVertex3f(0.428, 0.127, 0.0);
    glVertex3f(0.517, 0.057, 0.0);
    glVertex3f(0.499, 0.108, 0.0);
    glVertex3f(0.488, 0.162, 0.0);
    glVertex3f(0.486, 0.148, 0.0);
    glVertex3f(0.497, 0.233, 0.0);
    glVertex3f(0.514, 0.282, 0.0);
    glVertex3f(0.528, 0.318, 0.0);
    glVertex3f(0.429, 0.245, 0.0);
    glEnd();

    //fishWingTOP
    glColor3f(0.980, 0.502, 0.447);
    glBegin(GL_POLYGON);
    glVertex3f(0.160, 0.304, 0.0);
    glVertex3f(0.177, 0.326, 0.0);
    glVertex3f(0.193, 0.334, 0.0);
    glVertex3f(0.221, 0.346, 0.0);
    glVertex3f(0.224, 0.348, 0.0);
    glVertex3f(0.244, 0.348, 0.0);
    glVertex3f(0.265, 0.345, 0.0);
    glVertex3f(0.303, 0.333, 0.0);
    glVertex3f(0.276, 0.304, 0.0);
    glEnd();


    //fishBody
    glColor3f(1.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex3f(0.429, 0.243, 0.0);
    glVertex3f(0.306, 0.276, 0.0);
    glVertex3f(0.292, 0.301, 0.0);
    glVertex3f(0.226, 0.316, 0.0);
    glVertex3f(0.200, 0.319, 0.0);
    glVertex3f(0.164, 0.309, 0.0);
    glVertex3f(0.117, 0.288, 0.0);
    glVertex3f(0.077, 0.256, 0.0);
    glVertex3f(0.052, 0.222, 0.0);
    glVertex3f(0.038, 0.187, 0.0);
    glVertex3f(0.041, 0.144, 0.0);
    glVertex3f(0.061, 0.119, 0.0);
    glVertex3f(0.108, 0.083, 0.0);
    glVertex3f(0.168, 0.060, 0.0);
    glVertex3f(0.204, 0.053, 0.0);
    glVertex3f(0.231, 0.054, 0.0);
    glVertex3f(0.288, 0.067, 0.0);
    glVertex3f(0.340, 0.087, 0.0);
    glVertex3f(0.403, 0.115, 0.0);
    glVertex3f(0.428, 0.127, 0.0);
    glEnd();

//fishEye
    glPushMatrix();
    glTranslatef(.1, 0.22, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1., 1.);

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50;
		float r=0.018;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	//inner ball
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50;
		float r=0.005;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    //FishMouth
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glVertex3f(0.048, 0.135, 0.0);
    glVertex3f(0.077, 0.137, 0.0);

    glVertex3f(0.077, 0.137, 0.0);
    glVertex3f(0.091, 0.141, 0.0);
    glEnd();

    //FihBelowWing
    glColor3f(0.980, 0.502, 0.447);
    glBegin(GL_POLYGON);
    glVertex3f(0.165, 0.118, 0.0);
    glVertex3f(0.169, 0.098, 0.0);
    glVertex3f(0.182, 0.086, 0.0);
    glVertex3f(0.213, 0.076, 0.0);
    glVertex3f(0.253, 0.075, 0.0);
    glVertex3f(0.281, 0.082, 0.0);
    glVertex3f(0.286, 0.094, 0.0);
    glVertex3f(0.281, 0.102, 0.0);
    glVertex3f(0.267, 0.113, 0.0);
    glEnd();
    glPopMatrix();
}

void DrawFish1(){

    glScalef(0.6f, 0.6f, 0.0f); //THIS IS TO SCALE THE FISH
    glTranslatef(_fish1Xaxis,_fish1Yaxis, 0.0); //THIS IS TO TRANSLATING THE FISH
    glPushMatrix();
    glColor3f(0.000, 0.749, 1.000);
    //fishTail
        glBegin(GL_POLYGON);
        glVertex3f(0.428, 0.127, 0.0);
        glVertex3f(0.517, 0.057, 0.0);
        glVertex3f(0.499, 0.108, 0.0);
        glVertex3f(0.488, 0.162, 0.0);
        glVertex3f(0.486, 0.148, 0.0);
        glVertex3f(0.497, 0.233, 0.0);
        glVertex3f(0.514, 0.282, 0.0);
        glVertex3f(0.528, 0.318, 0.0);
        glVertex3f(0.429, 0.245, 0.0);
        glEnd();

    //fishWingTOP
        glColor3f(0.000, 0.749, 1.000);
        glBegin(GL_POLYGON);
        glVertex3f(0.160, 0.304, 0.0);
        glVertex3f(0.177, 0.326, 0.0);
        glVertex3f(0.193, 0.334, 0.0);
        glVertex3f(0.221, 0.346, 0.0);
        glVertex3f(0.224, 0.348, 0.0);
        glVertex3f(0.244, 0.348, 0.0);
        glVertex3f(0.265, 0.345, 0.0);
        glVertex3f(0.303, 0.333, 0.0);
        glVertex3f(0.276, 0.304, 0.0);
        glEnd();

    //fishBody
    glColor3f(0.3,0.3,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.429, 0.243, 0.0);
    glVertex3f(0.306, 0.276, 0.0);
    glVertex3f(0.292, 0.301, 0.0);
    glVertex3f(0.226, 0.316, 0.0);
    glVertex3f(0.200, 0.319, 0.0);
    glVertex3f(0.164, 0.309, 0.0);
    glVertex3f(0.117, 0.288, 0.0);
    glVertex3f(0.077, 0.256, 0.0);
    glVertex3f(0.052, 0.222, 0.0);
    glVertex3f(0.038, 0.187, 0.0);
    glVertex3f(0.041, 0.144, 0.0);
    glVertex3f(0.061, 0.119, 0.0);
    glVertex3f(0.108, 0.083, 0.0);
    glVertex3f(0.168, 0.060, 0.0);
    glVertex3f(0.204, 0.053, 0.0);
    glVertex3f(0.231, 0.054, 0.0);
    glVertex3f(0.288, 0.067, 0.0);
    glVertex3f(0.340, 0.087, 0.0);
    glVertex3f(0.403, 0.115, 0.0);
    glVertex3f(0.428, 0.127, 0.0);
    glEnd();

//fishEye
    glPushMatrix();
    glTranslatef(.1, 0.22, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1., 1.);

    for(int i=0;i<200;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=0.018;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    //inner ball
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    for(int i=0;i<200;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=0.005;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
    //FishMouth
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glVertex3f(0.048, 0.135, 0.0);
    glVertex3f(0.077, 0.137, 0.0);

    glVertex3f(0.077, 0.137, 0.0);
    glVertex3f(0.091, 0.141, 0.0);
    glEnd();

    //FihBelowWing
    glColor3f(0.000, 0.749, 1.000);
    glBegin(GL_POLYGON);
    glVertex3f(0.165, 0.118, 0.0);
    glVertex3f(0.169, 0.098, 0.0);
    glVertex3f(0.182, 0.086, 0.0);
    glVertex3f(0.213, 0.076, 0.0);
    glVertex3f(0.253, 0.075, 0.0);
    glVertex3f(0.281, 0.082, 0.0);
    glVertex3f(0.286, 0.094, 0.0);
    glVertex3f(0.281, 0.102, 0.0);
    glVertex3f(0.267, 0.113, 0.0);
    glEnd();
    glPopMatrix();

}

void DrawStone1(float x) {
    glPushMatrix();
    glScalef(0.05f, 0.05f, 0.0f);
    glTranslated(x, -0.4, 0.0);
    glBegin(GL_POLYGON);

    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(0.2, 0.3, 0.0);
    glVertex3f(0.5, 0.2, 0.0);
    glVertex3f(0.7, 0.5, 0.0);
    glVertex3f(0.7, 0.8, 0.0);
    glVertex3f(0.35, 0.9, 0.0);
    glVertex3f(0.2, 0.5, 0.0);
    glEnd();
    glPopMatrix();
}

void DrawStone2(float x) {
    glPushMatrix();
    glScalef(0.1f, 0.15f, 0.0f);
    glTranslated(x, -0.07, 0.0);
    glBegin(GL_POLYGON);

    glColor3f(0.824, 0.706, 0.549);
    glVertex3f(0.3, 0.1, 0.0);
    glVertex3f(0.55, 0.2, 0.0);
    glVertex3f(0.5, 0.05, 0.0);
    glVertex3f(0.8, 0.1, 0.0);
    glVertex3f(0.7, 0.4, 0.0);

    glEnd();
    glPopMatrix();
}

void DrawStone() {

    glPushMatrix();
    for (float f = -0.35; f < 20; f += 0.55) {
        DrawStone2(f);
    }
    glPopMatrix();

    glPushMatrix();
    for (float f = -0.2; f < 20; f += 0.55) {
        DrawStone1(f);
    }
    glPopMatrix();


}


void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    //positionIng
    glPushMatrix(); //DRAW WATER
    DrawWater();
    glPopMatrix();

    glPushMatrix(); //DRAW Background TRee
    DrawTree1();
    glPopMatrix();

    glPushMatrix(); //DRAW FISH
    DrawFish1();
    glPopMatrix();

    glPushMatrix();
    DrawFish2();
    glPopMatrix();

    glPushMatrix();
    DrawFish3();
    glPopMatrix();

    glPushMatrix();
    DrawFish4();
    glPopMatrix();

    glPushMatrix();
        DrawBubble();
    glPopMatrix();

     glPushMatrix();
    DrawTree2();
    glPopMatrix();

    glPushMatrix();
    DrawStone();
    glPopMatrix();

    glFlush();
}

void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("Computer Graphics Project");
    init();
    glutDisplayFunc(display);
        glutTimerFunc(35, update, 0); //THIS IS THE UPDATE FUNCTOIN
    glutMainLoop();
    return 0;
}
