#include "Client.h"

Client::Client(int x, int y, int width, int height, ofImage sprite, Burger* burger): Entity(x, y, width, height, sprite){
    this->burger = burger;
}
Client::~Client(){
    delete burger;
}
void Client::render(){
    ofSetColor(255,255,255);
    patienceDisplay = floor((2000 - patience) / 7.84);
    ofSetColor (255,255-patienceDisplay,255-patienceDisplay);
    sprite.draw(x, y, width, height);
    burger->render();
    if(nextClient != nullptr){
        nextClient->render();
    }
}

void Client::tick(){
    patience-=1;
    burger->setY(y);
    if(patience == 0){
        isLeaving = true;
    }
    if(nextClient != nullptr){
        nextClient->tick();
    }
}

int Client::serve(Burger* burger){
    if(nextClient != nullptr){
        if(this->burger->equals(burger))
            {   
            isLeaving = true;
            return 10;
            }
        else {
            return nextClient->serve(burger);
            }
    } else {
        if(this->burger->equals(burger))
        {
            isLeaving = true;
            return 10;
        }
        else {
            return -5;
        }
}
}
    
