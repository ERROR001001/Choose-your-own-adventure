#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unistd.h>
#include "chooseyourownadventure.h"

using namespace std;

int main() {
  ChooseYourOwnAdventure s;
  s.innum(": ", "Textspeed:\n1. Slow\n2. Medium\n3. Fast\n4. Instant\nChoice");
  //change this if statement to adjust time
  if (s.ansnum == 1 || s.ansnum == 2 || s.ansnum == 3) {
    s.textspeed = 5 - (s.ansnum * 1.5);
  } else if (s.ansnum == 4) {
    s.textspeed = 0;
  } else {
    cout << "Invalid input";
    exit(1);
  }

  return 0;
}