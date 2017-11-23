#ifndef EVENT_H
#define EVENT_H

typedef struct event {
  long ID;
  double time;
  char type[20];

} Event;

int compareEvent(Event* e1, Event *e2);

void printEvent(Event*e);

#endif