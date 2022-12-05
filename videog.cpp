//Rahul Iyer
//setters and getters for videogame media type
//12/4/2022

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
char* Videogames::getPublisher() {
  return publisher;
}

int Videogames::getRating() {
  return rating;
}

void Videogames::print() { // prints out vg variables
  cout << "Title is " << title << endl;
  cout << "Publisher is " << publisher << endl;
  cout << "In the year " << year << endl;
  cout << "Rated " << rating << " out of 10" << endl;
}