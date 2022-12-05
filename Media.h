//Rahul Iyer
//define the set, get and varaibles for the media class which are variables that are similar throughout all the media types
//12/4/2022

#ifndef MEDIA
#define MEDIA
#include <iostream>

using namespace std;

class Media{
 public:
  void setTitle(char*);
  void setYear(int);
  char* getTitle();
  int getYear();
  virtual void print();

  char title[80];
  int year;
};

#endif