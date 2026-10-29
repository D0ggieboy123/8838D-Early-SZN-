#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// Distance sensors for wall resets
inline pros::Distance d_1(8);
inline pros::Distance d_2(9);

// The lifts that will be used for continous and cascade lifts
inline pros::Motor l_lift(18);
inline pros::Motor r_lift(-11);


// The lift for DR6B 
// inline pros::MotorGroup DR6B_lift({11,12});


inline void set_lift(int input) {
  l_lift.move(input);
  r_lift.move(input);
}
inline ez::PID lift_pid{15, 0.056, 35, 0, "Lift"};


/** 
// Intake that will be used
inline pros::MotorGroup intake({15, 16});
inline pros::Motor intake_station_carousel(17);

// Potentiometer can be used if learned

// Rotation sensors that may be used, add more later
inline pros::Rotation lift_l_rotation(18);


// Distance sensor for claw
inline pros::Distance cup_pin_distance(19);
*/

// Piston for claw
inline ez::Piston claw('A');










// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
