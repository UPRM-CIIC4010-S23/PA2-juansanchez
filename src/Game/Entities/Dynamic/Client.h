#pragma once
#include "Entity.h"
#include "Burger.h"

class Client: public Entity{
    private:
        Burger* burger;
        int originalPatience;
        int patience=2000;
    public:
        Client(int, int, int, int, ofImage, Burger*);
        virtual ~Client();
        void tick();
        void render();
        int serve(Burger*);
        Burger* getBurger(){return burger;}
        Client* nextClient=nullptr;
        bool isLeaving=false;
        bool isServed = false;
        int patienceDisplay = 0;
        int totalCost = 0;
        int getPatience(){return this->patience;}
};