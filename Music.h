//Rahul Iyer
//getters setters and variables used in main for the music class
//12/4/2022

#include <iostream>
#include "Media.h"

using namespace std;

class Music:public Media{
 public:
  void setArtist(char*);
  void setDuration(int);
  void setPublisher(char*);
  char* getArtist();
  int getDuration();
  char* getPublisher();

  char artist[80];
  int duration;
  char publisher[80];
  void print();
};