//Rahul Iyer
//setters and getters for media class
//12/4/2022

#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

void Media::setTitle(char* temp) { //setting a temp variable to copy to title
  strncpy(title, temp, 79);
}

void Media::setYear(int temp) { //setting a temp variable to copy to year
  year = temp;
}

//returning the values
char* Media::getTitle() { 
  return title;
}

int Media::getYear() {
  return year;
}

void Media::print() { // prints out the inputs when called in the media types
  }