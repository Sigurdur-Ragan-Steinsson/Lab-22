#include <iostream>

using namespace std;

int main() {
  struct time{
    int minutes = 0;
    int hours = 0;
  };
  struct time currTime;
  int minsPassed = 0, hoursPassed = 0, daysUntilEvent = 0, minInDay = 60*24;

  cout << "Please input current hour" << endl;
  cin >> currTime.hours;

  cout << "Please input current minutes" << endl;
  cin >> currTime.minutes;

  cout << "Please input minutes passed" << endl;
  cin >> minsPassed;

  if ((currTime.hours >= 24) ||(currTime.minutes > 60)){
    cout << "Invalid time, please re-input the current time" << endl;
    cin >> currTime.hours;
    cin >> currTime.minutes;
  }

  while(minsPassed >= 60){
    minsPassed -= 60;
    hoursPassed += 1;
  }

  currTime.hours += hoursPassed;
  currTime.minutes += minsPassed;

  if(currTime.minutes >= 60){
    while(currTime.minutes >= 60){
      currTime.minutes -= 60;
      currTime.hours += 1;
    }
  }

  if(currTime.hours >= 24){
    daysUntilEvent += currTime.hours / 24;
    currTime.hours %= 24;
  }

  cout << "The time after the event will be " << currTime.hours << ":" << currTime.minutes << endl;
  cout << "The event will occur in " << daysUntilEvent << " days";

} 