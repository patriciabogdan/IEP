#ifndef PWM_H
#define PWM_H
#define PIN RPI_GPIO_P1_12


class pwm
{
private:
    int frequency;
    int duty_cycle;
public:
    pwm(int frequency,int duty_cycle);
    void set_frequency(int value);
    void set_dutyCycle(int value);
    int get_frequency();
    int get_dutyCycle();
};

#endif // PWM_H
