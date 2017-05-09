//
//  Fooditem.cpp
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 3/13/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#include "Fooditem.h"


FoodItem :: FoodItem()
{
    this->calories = 999;
    this->foodName = "Ravioli";
    this->cost = 420.69;
    this->delicious = true;
}

FoodItem :: FoodItem(string name)
{
    this->foodName = name;
    this->cost = 69.69;
    this->calories = 21;
    this->delicious = false;
}

int FoodItem :: getCalories()
{
    return calories;
}

double FoodItem :: getCost()
{
    return cost;
}

string FoodItem :: getFoodName()
{
    return foodName;
}

bool FoodItem :: isDelicious()
{
    return delicious;
}

void FoodItem :: setCalories(int calories)
{
    this->calories = calories;
}

void FoodItem :: setCost(double cost)
{
    this->cost = cost;
}

void FoodItem :: setFoodName(string foodName)
{
    this->foodName = foodName;
}

void FoodItem :: setDelicious(bool delicious)
{
    this->delicious = delicious;
}

bool FoodItem :: operator < (FoodItem & otherFood)
{
    if(this->isDelicious() && otherFood.isDelicious())
    {
        if(this->getCalories() > otherFood.getCalories())
        {
            return true;
        }
        return false;
    }
    return false;
}




