//Rahul Iyer
//This is a program that allows you to input media(videogames, music, and movies) and delete those media and search for those media
//Thank you Armaan Hajar for helping with my header guard files and the cpp files for each media type.

#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"
#include "Music.h"
#include "Movies.h"
#include "Videogames.h"

using namespace std;

void add(vector<Media*> &media);
void search(vector<Media*> &media);
void deletemedia(vector<Media*> &media);

int main() {
  vector<Media*> media;
  char input[80];
  bool temp = true;

  while (temp == true) {
    cout << "What command do you want to do(add, search, delete, or quit) all lowercase" << endl;
    cin.get(input, 80);
    cin.get();
    cout << " " << endl;

    if (input[0] == 'a') { 
      add(media);
    }
    else if (input[0] == 's') { 
      search(media);
    }
    else if (input[0] == 'd') { 
      deletemedia(media);
    }
    else if (input[0] == 'q') { 
      cout << "thank you for using the program" << endl;
      temp = false;
    }
    else { 
      cout << "please re-enter what you want to do" << endl;
    }
  }  
  return 0;
}

void add(vector<Media*> &media) { 
  char mediaElement[80];
  cout << "What media type do you want to add? (music, videogame, or movie) all lowercase" << endl;
  cin.get(mediaElement, 80);
  cin.get();
  cout << " " << endl;
  if (mediaElement[0] == 'm' && mediaElement[1] == 'u') { // adds music
    Music* music = new Music();

    char title[80];
    int year;
    char artist[80];
    int duration;
    char publisher[80];
    
    // adds title
    cout << "Music title: " << endl;
    cin.get(title, 80);
    cin.get();
    music->setTitle(title);
    // adds year
    cout << "Year:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    music->setYear(year);
    // adds artist
    cout << "Artist:" << endl;
    cin.get(artist, 80);
    cin.get();
    music->setArtist(artist);
    // adds duration
    cout << "Duration:" << endl;
    cin >> duration;
    cin.ignore(1, '\n');
    music->setDuration(duration);
    // adds publisher
    cout << "Publisher:" << endl;
    cin.get(publisher, 80);
    cin.ignore(1, '\n');
    music->setPublisher(publisher);

    media.push_back(music);
  }
  else if (mediaElement[0] == 'm' && mediaElement[1] == 'o') { // adds movie
    Movies* movie = new Movies();

    char title[80];
    int year;
    char director[80];
    int duration;
    int rating;

    // adds title
    cout << "Movie Title:" << endl;
    cin.get(title, 80);
    cin.get();
    movie->setTitle(title);
    // adds year
    cout << "Year:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    movie->setYear(year);
    // adds director
    cout << "Director:" << endl;
    cin.get(director, 80);
    cin.get();
    movie->setDirector(director);
    // adds duration
    cout << "Movie" << endl;
    cin >> duration;
    cin.ignore(1, '\n');
    movie->setDuration(duration);
    // adds rating
    cout << "Rating(1-10):" << endl;
    cin >> rating;
    cin.ignore(1, '\n');
    movie->setRating(rating);
    
    media.push_back(movie);
  }
  else if (mediaElement[1] == 'i') { // adds video game
    Videogames* vg = new Videogames();

    char title[80];
    int year;
    char publisher[80];
    int rating;

    // adds title
    cout << "Videogame Title:" << endl;
    cin.get(title, 80);
    cin.get();
    vg->setTitle(title);
    // adds year
    cout << "Year:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    vg->setYear(year);
    // adds publisher
    cout << "Publisher:" << endl;
    cin.get(publisher, 80);
    cin.get();
    vg->setPublisher(publisher);
    // adds rating
    cout << "Rating(1-10):" << endl;
    cin >> rating;
    cin.ignore(1, '\n');
    if ((rating >= 0) && (rating <= 10)) {
      vg->setRating(rating);
    }
    
    media.push_back(vg);
  }
  else {
    cout << "unsure what you are trying to input" << endl;
  }
}

void deletemedia(vector<Media*> &media) {
  char mediaElement[80];
  char mediaName[80];

  cout << "What media do you want to delete (music, movie, or videogame)" << endl;
  
  cin.get(mediaElement, 80);
  cin.get();
  
  if (mediaElement[0] == 'm' && mediaElement[1] == 'u') { // deletes music
    cout << "title of song you want to delete" << endl;

    cin.get(mediaName, 80);
    cin.get();

    // iterate  through the vector to find  the song
    for (int i = 0; i < media.size(); i++) {
      if (strcmp((media.at(i)->title), mediaName) == 0) { 
        delete &(media.at(i));
	media.pop_back(); //delete the most recent media (not completely sure how this works still)
        cout << mediaName << " is deleted" << endl;
      }
      else { 
	      cout << "song not there, you can input it using add" << endl;
      }
    }  
  }
  
  else if (mediaElement[0] == 'm' && mediaElement[1] == 'o') { // deletes movie
    cout << "title of movie you want to delete" << endl;

    cin.get(mediaName, 80);
    cin.get();

    // iterate through the vector to find movie
    for (int i = 0; i < media.size(); i++) {
      if (strcmp((media.at(i)->title), mediaName) == 0) { 
        delete &(media.at(i));
	media.pop_back(); 
        cout << mediaName << " is deletedd" << endl;
      }
      else { 
	      cout << "movie not there, you can input it using add" << endl;
      }
    }
  }

  else if (mediaElement[1] == 'i') { // deletes video game
    cout << "title of videogame you want to delete" << endl;

    cin.get(mediaName, 80);
    cin.get();

    // iterate  through the vector to find vg
    for (int i = 0; i < media.size(); i++) {
      if (strcmp((media.at(i)->title), mediaName) == 0) { 
	delete &(media.at(i));
	media.pop_back();
        cout << mediaName << " is deleted" << endl;
      }
      else { 
	      cout << "videogame not there, you can input it using add" << endl;
      }
    }
  }
}

void search(vector<Media*> &media) {
  char mediaElement[80];
  char mediaName[80];

  cout << "what media do you want to search through (movie, music, or vidddeogame) all lowercase" << endl;
  
  cin.get(mediaElement, 80);
  cin.get();
  
  if (mediaElement[0] == 'm' && mediaElement[1] == 'u') { // search for music
    cout << "title of song you want to find: " << endl;

    cin.get(mediaName, 80);
    cin.get();

    // iterate through the vector to find the music name and all the information
    for (int i = 0; i < media.size(); i++) {
      if (strcmp((media.at(i)->title), mediaName) == 0) { 
	      cout << " " << endl;  
        media.at(i)->print();
      }
      else if (strcmp((media.at(i)->title), mediaName) != 0) {
	cout << "song was not inputted" << endl;
      }
    }  
  }
  
  else if (mediaElement[0] == 'm' && mediaElement[1] == 'o') { // search for movies
    cout << "title of movie you want to find: " << endl;

    cin.get(mediaName, 80);
    cin.get();

    // iterate through the vector to find the movie name and all the information
    for (int i = 0; i < media.size(); i++) {
      if (strcmp((media.at(i)->title), mediaName) == 0) { 
      	cout << " " << endl;
        media.at(i)->print();
      }
      else if (strcmp((media.at(i)->title), mediaName) != 0) { 
      	cout << "movie was not inputted" << endl;
      }
    }
  }

  else if (mediaElement[1] == 'i') { // search for vg
    cout << "title of videogame you want to find" << endl;

    cin.get(mediaName, 80);
    cin.get();
    
    // iterate through the vector to find the vg name and all the information
    for (int i = 0; i < media.size(); i++) {
      if (strcmp((media.at(i)->title), mediaName) == 0) { 
        cout << " " << endl;
      	media.at(i)->print();
      }
      else if (strcmp((media.at(i)->title), mediaName) != 0) { 
	      cout << "videogame was not inputted" << endl;
      }
    }
  }
}