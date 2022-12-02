#include "cinder/app/AppNative.h"
#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class BasicAnimations2App : public AppNative {
  public:
	void prepareSettings (Settings *settings);
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
  
  private:
	  Vec2f mPosition;
};

void BasicAnimations2App::prepareSettings( Settings *settings){
	settings->setWindowSize( 800, 600 ) ;
	settings->setFrameRate( 60 ) ;
}
void BasicAnimations2App::setup()
{
	mPosition = getWindowCenter();
}

void BasicAnimations2App::mouseDown( MouseEvent event )
{
}

void BasicAnimations2App::update()
{
	const float RAD = 50;
	const float W	= getWindowWidth();
	const float H	= getWindowHeight();

	if( mPosition.y < (H - RAD)){
		mPosition.y = mPosition.y - 1;
	}
	else if( mPosition.y <  RAD){
		gl::translate(0,1);
	}
	else {
		gl::translate(0,-1);
	}

	if( mPosition.y <  RAD){
		gl::translate(0,2);
	}

	if( mPosition.x <  RAD){
		gl::translate(2,0);
	}

	if( mPosition.x < (W - RAD)){
		mPosition.x = mPosition.x - 1;
	}
	else {
		gl::translate(-1,0);
	}
}

void BasicAnimations2App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) );

	const float RAD = 50;

	gl::color( Color( 1, 1, 0 ));
	gl::drawSolidCircle(mPosition, RAD);

}

CINDER_APP_NATIVE( BasicAnimations2App, RendererGl )