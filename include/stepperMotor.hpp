#ifndef STEPPER_MOTOR_HPP
#define STEPPER_MOTOR_HPP

class stepperMotor {

    private:
        bool enabled;
        bool direction;
        bool pulse;

        unsigned pulse_time_us;
        unsigned en_pin, dir_pin, pulse_pin;

        int current_pos;
        
    public:
        stepperMotor();

        bool get_enabled();
        void set_enabled(bool enabled);

        bool get_dir();
        void set_dir(bool dir);

        unsigned get_pulse_time();
        void set_pulse_time(unsigned pulse_time_us);

        void set_pins(int en_pin, int dir_pin, int pulse_pin);
        void free_pins(int en_pin, int dir_pin, int pulse_pin);
    
};

#endif