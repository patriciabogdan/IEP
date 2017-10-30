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
        void set(int value);
        int get();
        void change_direction(int value);
};

#endif // PIN_H
