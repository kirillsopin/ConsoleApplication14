#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ingredient {
public:
    string name;
    int cookTime; // seconds

    Ingredient() : name(""), cookTime(0) {}
    Ingredient(const string& n, int t) : name(n), cookTime(t) {}
    bool operator<(const Ingredient& other) const {
        return cookTime > other.cookTime;   
    }
};

