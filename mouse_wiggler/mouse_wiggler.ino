#include "Mouse.h"
bool direction = false;

void setup() {
  Mouse.begin();
}

void loop() {
  direction = !direction;

  int directionMult = -1;

  if (direction) {
    directionMult = 1;
  }

  for (int i = 0; i < 10; i++) {
    Mouse.move(10 * directionMult, 10 * directionMult);
    delay(1000);
  }
}
