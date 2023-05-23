#pragma once

#include "State.h"
#include "Button.h"

class LoseState: public State{
    private:
        ofImage img1;
        Button *startButton;
    public:
        LoseState();
        void tick();
        void render();
        void keyPressed(int key);
        void mousePressed(int x, int y, int button);
        void reset();
};