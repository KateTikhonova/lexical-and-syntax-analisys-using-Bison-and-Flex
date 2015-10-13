#ifndef BUSINESSMAN_H
#define BUSINESSMAN_H
#include <string>
#include <vector>
#include <iterator>

class Businessman
{
    public:
        char gen;
        double km;
	double hours;
        std::string name;
        void check_if_f();
        Businessman(const std::string, const char);
        void add_km_plane(double);
        void add_km_foot(double);
        void add_km_auto(double);
        void add_km_boat(double hour);
        void add_km_subway(double hour);
        void add_km_train(double hour);
};

Businessman::Businessman(const std::string n, const char temp)
{
    name = n;
    gen = temp;
    km = 0;
    hours = 0;
}


void Businessman::check_if_f()
{
    if(gen == 'f'){
        km+=30;
	hours+=6;
    }
}

void Businessman::add_km_plane(double hour)
{
    hours+=hour;
    km+=hour*1000;
    check_if_f();
}

void Businessman::add_km_foot(double hour)
{
    hours+=hour;
    km+=hour*5;
    check_if_f();
}
void Businessman::add_km_auto(double hour)
{
    hours+=hour;
    km+=hour*100;
    check_if_f();
}
void Businessman::add_km_boat(double hour)
{
    hours+=hour;
    km+=hour*20;
    check_if_f();
}
void Businessman::add_km_subway(double hour)
{
    hours+=hour;
    km+=hour*40;
    check_if_f();
}

void Businessman::add_km_train(double hour)
{
    hours+=hour;
    km+=hour*250;
    check_if_f();
}


#endif // BUSINESSMAN_H
