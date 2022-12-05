/*
 * Author: Armaan Hajar
 * Description: Setters and getters for Videogames
 * Date: 11/22/2022
 */

#include <iostream>
#include <cstring>
#include "Videogames.h"

using namespace std;

void Videogames::setPublisher(char* temp) { //setting a temp variable for copying into publisher
  strncpy(publisher, temp, 79);
}

void Videogames::setRating(int temp) {//setting a temp variable for copying into rating
  rating = temp;
}

//returning the values
char* Videogames::gePublisher() {
  return publisher;
}

int Videogames::getRating() {
  return rating;
}

void Videogames::print() { // prints out inputs for video game when called
  cout << "Title is " << title << endl;
  cout << "Publisher is " << publisher << endl;
  cout << "In the year " << year << endl;
  cout << "Rated " << rating << " out of 10" << endl;
}