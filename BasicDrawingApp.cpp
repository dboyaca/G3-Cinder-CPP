#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class BasicDrawingApp : public AppNative {
public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void BasicDrawingApp::setup()
{
}

void BasicDrawingApp::mouseDown( MouseEvent event )
{
}

void BasicDrawingApp::update()
{
}

void BasicDrawingApp::draw()
{

	// --------------------Scotland flag -----------------------------------
	
	//const Color blue ( 0, 0, 1 );
	//const Color white ( 1, 1, 1 );

	//// clear out the window with the flag's blue of Scotland
	//gl::clear( blue ); 

	////Changing paintbrush color to white
	//gl::color( white );

	////Drawing the diagonal lines
	//gl::lineWidth( 35 );
	//gl::drawLine( Vec2d(0,0)				, Vec2d( getWindowWidth(),getWindowHeight() ) );
	//gl::drawLine( Vec2d(getWindowWidth(),0) , Vec2d( 0,getWindowHeight() ) );


	//------------------Japan Flag--------------------------//


	const Color white ( 1, 1, 1 );
	const Color red	  ( 1, 0, 0 );

	gl::clear( white ); 

	//Changing paintbrush color to red

	gl::color( red );
	//Drawing a filled circle  

	gl::drawSolidCircle(Vec2d(getWindowCenter()),getWindowWidth()/7.0f);

	//Drawing polygons
	//gl::drawSolidCircle(Vec2d(getWindowCenter()),getWindowWidth()/7.0f);


	//Drawing an ellipse
	//gl::drawSolidEllipse(Vec2f(getWindowCenter()), getWindowWidth()/4.0f, getWindowWidth()/7.0f);

	//---------------------Colombian flag-----------------------//

	//const Color yellow (1, 1, 0);
	//const Color blue (0, 0, 1);
	//const Color red (1, 0, 0);

	//const float width  = float(getWindowWidth());
	//const float height = float(getWindowHeight());

	//gl::clear(red);

	//gl::color(yellow);
	//gl::drawSolidRect(Rectf(0, 0, width, height/3.0f));

	//gl::color(blue);
	//gl::drawSolidRect(Rectf( 0, height / 3.0f , width, (2.0f * height)/3.0f ));

	////gl::color(red);
	////gl::drawSolidRect(Rectf( 2.0f * height/ 3.0f, 0, width, height));

}

CINDER_APP_NATIVE( BasicDrawingApp, RendererGl )
