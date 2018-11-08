#pragma once
#include <ctime>
#include <cstdlib>
#include <utility>

#include "ofMain.h"

namespace af {

class runner : public ofBaseApp {
private:
	ofImage background;

	ofSoundPlayer change_dir_sound;
	ofSoundPlayer music;

	void drawBackground();

	// Resets the game objects to their original state.
	void reset();

public:
	// Function used for one time setup
	void setup();

	// Main event loop functions called on every frame
	void update();
	void draw();
	
	// Event driven functions, called on appropriate user action
	void keyPressed(int key);
	void windowResized(int w, int h);
};
} // namespace af
