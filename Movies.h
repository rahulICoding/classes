//Rahul Iyer
//getters setters and variables used in main for the movie class
//12/4/2022

#include <iostream>
#include "Media.h"

using namespace std;

class Movies:public Media{
public:
  void setDirector(char*);
  void setDuration(int);
  void setRating(int);
  char* getDirector();
  int getDuration();
  int getRating();

  char director[80];
  int duration;
  int rating;
  void print();
};