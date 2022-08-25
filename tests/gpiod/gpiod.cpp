#include <chrono>
#include <iostream>
#include <thread>

#include <gpiod.h>
#include <gpiod.hpp>

using namespace std::literals::chrono_literals;

const int pin = 17;

int main(void)
{
    gpiod::chip chip ("gpiochip0");
    auto line = chip.get_line(pin);
    line.request({"test",
                  gpiod::line_request::DIRECTION_OUTPUT,
                  0}, 0);

    while (true) {
        line.set_value(1);
        std::cout << "ON" << std::endl;
        std::this_thread::sleep_for(100ms);
        line.set_value(0);
        std::cout << "OFF" << std::endl;
        std::this_thread::sleep_for(100ms);
    }
    return 0;
}