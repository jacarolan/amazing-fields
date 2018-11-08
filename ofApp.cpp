#include "ofApp.h"
#include <iostream>

using namespace af;

// Setup method
void runner::setup(){
	ofSetWindowTitle("Amazing Fields");

    ofEnableAlphaBlending();

    background.load("Background.png");
    background.update();

    music.load("Entity.wav");
    music.setLoop(true);
    music.play();

	srand(static_cast<unsigned>(time(0))); // Seed random with current time
}

void runner::update() {

}

void runner::draw(){
    drawBackground();
}

void runner::keyPressed(int key){
	if (key == OF_KEY_F5) {
		ofToggleFullscreen();
		return;
	}

	int upper_key = toupper(key); // Standardize on upper case	}
}

void runner::reset() {

}

void runner::windowResized(int w, int h){
    background.resize(w, h);
}

void runner::drawBackground() {
    ofSetColor(255, 255, 255, 255);
    background.draw(0, 0);
}