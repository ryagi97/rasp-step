#include <iostream>
#include <thread>

//#include <gpiod.h>
//#include <gpiod.hpp>

#include "stepperMotor.hpp"

// Default class constructor
stepperMotor::stepperMotor() {
    enabled = false;
    direction = false;
    pulse = false;
    pulse_time_us = 10000;
    current_pos = 0;
}

void stepperMotor::set_pins(int en_pin, int dir_pin, int pulse_pin) {
    this->en_pin = en_pin;
    // TO DO: add pin setup for en
    this->dir_pin = dir_pin;
    // TO DO: add pin setup for dir
    this->pulse_pin = pulse_pin;
    // TO DO: add pin setup for pulse
}

void stepperMotor::free_pins(int en_pin, int dir_pin, int pulse_pin) {
    this->en_pin = -1;
    // TO DO: add pin free for en
    this->dir_pin = -1;
    // TO DO: add pin free for dir
    this->pulse_pin = -1;
    // TO DO: add pin free for pulse
}

bool stepperMotor::get_enabled() {
    return this->enabled;
}

void stepperMotor::set_enabled(bool enabled) {
    this->enabled = enabled;
}

bool stepperMotor::get_dir() {
    return this->direction;
}

void stepperMotor::set_dir(bool direction) {
    this->direction = direction;
}

int main()
{

    stepperMotor M1 = stepperMotor();
    M1.set_dir(true);
    std::cout << M1.get_dir() << std::endl;

    std::cout << "Sanity check" << std::endl;
    return 0;
}