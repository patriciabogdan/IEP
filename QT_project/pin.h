#ifndef PIN_H
#define PIN_H


class Pin
{
    private:
        int pin;
        int directie;
        int stare;

    public:
        Pin(int pin,int directie,int stare);
        void set_pin(int value);
        int get_direction();
        void change_direction();
};

#endif // PIN_H