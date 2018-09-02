#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  PID::Kp = Kp;
  PID::Ki = Ki;
  PID::Kd = Kd;
  isFirstCycle = true;
  PID::p_error = 0;
  PID::d_error = 0;
  PID::i_error = 0;
  PID::prev_error = 0;
}

void PID::UpdateError(double cte) {

  p_error = cte;
  d_error = cte - prev_error; /* use p error for previous cycle */
  i_error += cte;
  prev_error = cte;
}

double PID::TotalError() {

  return 0;
}

