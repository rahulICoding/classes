//Rahul Iyer
//getters setters and variables used in main for the videogame class
//12/4/2022

#include <iostream>
#include "Media.h"

using namespace std;

class Videogames:public Media{
 public:
  void setPublisher(char*);
  void setRating(int);
  char* getPublisher();
  int getRating();

  char publisher[80];
  int rating;
  void print();
};