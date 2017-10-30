#include "pwm.h"
#include "pin.h"
#include <bcm2835.h>
#include <stdio.h>
// and it is controlled by PWM channel 0
#define PWM_CHANNEL 0
// This controls the max range of the PWM signal
#define RANGE 1024
pwm::pwm(int frequency,int duty_cycle)
{
  this->frequency = frequency;
  this->duty_cycle = duty_cycle;
  bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
  bcm2835_pwm_set_mode(PWM_CHANNEL, 1, 1);
}
int pwm:: get_frequency()
{
       return this->frequency;
}
int pwm::get_dutyCycle()
{
    return this->duty_cycle;
}
void pwm::set_frequency(int value)
{
    bcm2835_pwm_set_range(PWM_CHANNEL, value);
    this->frequency = value;
}
void pwm::set_dutyCycle(int value)
{
    int v;
    v=(value*frequency)/100;
    bcm2835_pwm_set_data(PWM_CHANNEL, v);
    this->duty_cycle = value;
}
