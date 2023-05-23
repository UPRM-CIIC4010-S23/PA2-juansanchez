//
// Created by joshu on 11/4/2020.
//
#pragma once

#include "Entity.h"
#include "Item.h"

class Burger {
  private:
    int x, y, width, height;
    
    stack<Item*> temp;
    stack<Item*> compare1;
    stack<Item*> compare2;
    int topbun = 0;
    int bottombun = 0;
    int lettuce = 0;
    int tomato = 0;
    int burger = 0;
    int cheese = 0;
    int index;

  public:
    Burger(int, int, int, int);
    void RemoveLastIngredient();
    void addIngredient(Item *item);
    void resetIngredients();
    void render();
    void clear();
    void setY(int y) {
        this->y = y;
    }
    int price; 
    stack<Item *> ingredients;
    bool equals(Burger* );
};