#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderApp : public AppNative {
public:
	void prepareSettings( Settings* settings);
	void setup();
	void mouseDown ( MouseEvent event);
	void update();
	void draw(); //Insert code to draw stuff 2D and 3D
};

void CinderApp::setup(){
	
}

void CinderApp::mouseDown(<#MouseEvent event#>){
	
}

void CinderApp::update(){
	
}

void CinderApp::draw(){
	gl::clear( Color(0,0,0)); //Clear out the window with black, (Red, Green, Blue)
	//Draw a Line with initial and final point
	gl::drawLine(Vec2f(0,0), Vec2f(20,60));
	//Draw a line with the final point in the corner of the screen
	//Change the color of the line
	gl::color(1, 1, 0);
	gl::lineWidth(5); // Size of the line
	const int w= getWindowWidth();
	const int h = getWindowHeight();
	gl::drawLine(Vec2f(0,0), Vec2f(w,h) );
	//Blue line in the opposite diagonal
	gl::color(0,0,1);
	gl::drawLine(Vec2f(w,0), Vec2f(0,h));
	//Draw a red circle int the center of the window
	const Color red (1, 0, 0);
	const Color white (1,1,1);
	//White background
	gl::clear(white);
	gl::color( red);
	gl::drawSolidCircle(getWindowCenter(), getWindowWidth()/6);//(Center, radius)
	
}

CINDER_APP_NATIVE(CinderApp, RendererGl)