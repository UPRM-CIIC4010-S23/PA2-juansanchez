#pragma once
#include "Client.h"
#include "Burger.h"

class Inspector: public Client{
    private:
        Burger* burger;
        int originalPatience;
        int patience = 2000;
    public:
        Inspector(int, int, int, int, ofImage, Burger*);
};