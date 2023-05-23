//
// Created by joshu on 11/4/2020.
//

#include "Burger.h"

Burger::Burger(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

void Burger::addIngredient(Item *item) {
    ingredients.push(item);
}

void Burger::render(){
  int counter = 1;
    while(!ingredients.empty()){
        ingredients.top()->sprite.draw(x-5,y-(counter * 10)+55,width*0.70,height*0.70);
        temp.push(ingredients.top());
        ingredients.pop();
        counter++;
    }
        while(!temp.empty()){
        ingredients.push(temp.top());
        temp.pop();
    }
}
void Burger::RemoveLastIngredient()
{
    if (!ingredients.empty())
    {
        Item *item;
        item = ingredients.top();
        ingredients.pop();

        if (item->name == "cheese")
            this->cheese--;
        if (item->name == "lettuce")
            this->lettuce--;
        if (item->name == "tomato")
            this->tomato--;
        if (item->name == "patty")
            this->burger--;
        if (item->name == "bottomBun")
            this->bottombun--;
        if (item->name == "topBun")
            this->topbun--;
    }
}

void Burger::clear(){
    ingredients.empty();
}

void Burger::resetIngredients(){
    for (int i=0;i<5;i++){
        ingredients.pop();
    }
}

    //Phase 2 Part_1
    //Create the Burger equals() method which checks that the target Burger has the same
    //ingredients and quantities as the parameter Burger and returns a boolean indicating if
    //they are the same
bool Burger::equals(Burger* burger){
    if (ingredients.size() != burger->ingredients.size())
        return false;

    return ( this->burger == burger->burger && cheese == burger->cheese 
    && topbun == burger->topbun && bottombun == burger->bottombun 
    && lettuce == burger->lettuce && tomato == burger->tomato);
        
}