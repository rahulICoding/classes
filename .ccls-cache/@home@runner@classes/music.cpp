/*
 * Author: Armaan Hajar
 * Description: Setters and getter for Music
 * Date: 11/22/2022
 */

#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

void Music::setArtist(char* artistTemp) { //setting a temp variable to copy to artist
  strncpy(artist, artistTemp, 79);
}

void Music::setDuration(int durationTemp) { //setting a temp variable to copy to duration
  duration = durationTemp;
}

void Music::setPublisher(char* publisherTemp) { //setting a temp variable to copy to publisher
  strncpy(publisher, publisherTemp, 79);
}

//returning the values
char* Music::getArtist() {
  return artist;
}

int Music::getDuration() {
  return duration;
}

char* Music::getPublisher() {
  return publisher;
}

void Music::print() { // prints out the inputs for music when called
  cout << "Title is " << title << endl;
  cout << "Artist is " << artist << endl;
  cout << "In the year " << year << endl;
  cout << "Duration is " << duration << " seconds" << endl;
  cout << "Publisher is " << publisher << endl;

}
