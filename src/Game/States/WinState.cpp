#include "WinState.h"

WinState::WinState() {
	startButton = new Button(ofGetWidth()/2, ofGetHeight()/2, 64, 50, "Retry");
}
void WinState::tick() {
	startButton->tick();
	if(startButton->wasPressed()){
		setNextState("Game");
		setFinished(true);

	}
}
void WinState::render() {
	ofSetBackgroundColor(230, 230, 250);
	startButton->render();
	ofDrawBitmapString("You win! You gained $100!",10,(ofGetHeight()/2)+10);
}

void WinState::keyPressed(int key){
}

void WinState::mousePressed(int x, int y, int button){
	startButton->mousePressed(x, y);
}

void WinState::reset(){
	setFinished(false);
	setNextState("");
	startButton->reset();
}