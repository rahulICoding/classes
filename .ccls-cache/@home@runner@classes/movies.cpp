/*
 * Author: Armaan Hajar
 * Description: Setters and getter for Movies
 * Date: 11/22/2022
 */

#include <iostream>
#include <cstring>
#include "Movies.h"

using namespace std;

void Movies::setDirector(char* temp) { //setting a temp variable to copy to director
  strncpy(director, temp, 79);
}

void Movies::setDuration(int temp) { //setting a temp variable to copy to duration
  duration = temp;
}

void Movies::setRating(int temp) { //setting a temp variable to copy to rating
  rating = temp;
}

//returning the values
char* Movies::getDirector() {
  return director;
}

int Movies::getDuration() {
  return duration;
}

int Movies::getRating() {
  return rating;
}

void Movies::print() { // prints out inputs for movie when called
  cout << "Title is" << title << endl;
  cout << "Director is" << director << endl;
  cout << "In the year " << year << endl;
  cout << "Duration is " << duration << "seconds" << endl;
  cout << "Rated " << rating << " out of 10" << endl;
}