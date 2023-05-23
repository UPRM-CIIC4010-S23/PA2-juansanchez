#include "LoseState.h"

LoseState::LoseState(){
    string text = "Retry";
    startButton = new Button(ofGetWidth()/2 - text.length()*8, ofGetHeight()/2 - text.length()*11, 64, 50, "Retry");
}
void LoseState::tick(){
    startButton->tick();
    if(startButton->wasPressed()){
		setNextState("Game");
		setFinished(true);
	}
}
void LoseState::render(){
    ofSetBackgroundColor(230, 230, 250);
	startButton->render();
    ofDrawBitmapString("You lost! Too many clients left.",10,(ofGetHeight()/2)+10);
}

void LoseState::keyPressed(int key){

}

void LoseState::mousePressed(int x, int y, int button){
    startButton->mousePressed(x,y);
}

void LoseState::reset(){
    setFinished(false);
    setNextState("");
    startButton->reset();
}