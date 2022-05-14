#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unistd.h>

using namespace std;

class ChooseYourOwnAdventure {
  public:
    float textspeed, ansnum;
    string ans;
  
    void slep(float time) { usleep(time * 1000000); }
  
    void in(string type, string question) {
      cout << question << type;
      getline(cin, ans);
    }
  
    void innum(string type, string question) {
      cout << question << type;
      cin >> ansnum;
    }
  
    void out(string print) { cout << print; }
};