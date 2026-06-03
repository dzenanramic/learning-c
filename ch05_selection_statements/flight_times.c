#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int hours;
  int minutes;
} Time;

int main(void) {

  int time, prev, h, min, index, count, dep_h, arr_h, dep_am, arr_am;
  int best = 2000;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &h, &min);
  Time departures[] = {{8, 0},  {9, 43},  {11, 19}, {12, 47},
                       {14, 0}, {15, 45}, {19, 0},  {21, 45}};

  Time arrivals[] = {{10, 16}, {11, 52}, {13, 31}, {15, 0},
                     {16, 8},  {17, 55}, {21, 20}, {23, 58}};

  time = (h * 60) + min;

  count = sizeof(departures) / sizeof(departures[0]);

  for (int i = 0; i < count; i++) {

    prev = ((departures[i].hours * 60) + departures[i].minutes) - time;
    prev = abs(prev);

    if (prev < best) {
      best = prev;
      index = i;
    }
  }

  if (departures[index].hours >= 12) {
    dep_h = departures[index].hours % 12;
    if (dep_h == 0) {
      dep_h = 12;
    }
    dep_am = 0;
  } else {
    dep_h = departures[index].hours;
    dep_am = 1;
  }

  if (arrivals[index].hours >= 12) {
    arr_h = arrivals[index].hours % 12;
    if (arr_h == 0) {
      arr_h = 12;
    }
    arr_am = 0;
  } else {
    arr_h = arrivals[index].hours;
    arr_am = 1;
  }

  printf("Closest departure time is %02d:%02d %s, arriving at %02d:%02d %s\n",
         dep_h, departures[index].minutes, dep_am ? "AM" : "PM", arr_h,
         arrivals[index].minutes, arr_am ? "AM" : "PM");
  return 0;
}
