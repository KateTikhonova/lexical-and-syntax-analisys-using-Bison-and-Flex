#ifndef TRAVELER_H
#define TRAVELER_H
#include <string>
#include <vector>
#include <iterator>

class Traveler
{
    public:
        char gen;
        double km;
        std::string name;
	double hours;
        void check_if_f();
        Traveler(const char*, const char);
        void add_km_plane(double);
        void add_km_foot(double);
        void add_km_bike(double);
        void add_km_bus(double);
        void add_km_auto(double);
        void add_km_boat(double hour);
        void add_km_subway(double hour);
        void add_km_train(double hour);
};


Traveler::Traveler(const char* n, const char temp)
{
    std::string s(n);
    name = s;
    gen = temp;
    km = 0;
    hours = 0;
}


void Traveler::check_if_f()
{
    if(gen == 'f'){
        km+=30;
	hours+=6;
    }
}

void Traveler::add_km_plane(double hour)
{
    hours+=hour;
    km+=hour*800;
    km+=200;
    check_if_f();
}

void Traveler::add_km_foot(double hour)
{
    hours+=hour;
    km+=hour*5;
    km+=200;
    check_if_f();
}

void Traveler::add_km_bike(double hour)
{
    hours+=hour;
    km+=hour*20;
    km+=200;
    check_if_f();
}

void Traveler::add_km_bus(double hour)
{
    hours+=hour;
    km+=hour*50;
    km+=200;
    check_if_f();
}

void Traveler::add_km_auto(double hour)
{
    hours+=hour;
    km+=hour*100;
    km+=200;
    check_if_f();
}

void Traveler::add_km_boat(double hour)
{
    hours+=hour;
    km+=hour*3;
    km+=200;
    check_if_f();
}

void Traveler::add_km_subway(double hour)
{
    hours+=hour;
    km+=hour*40;
    km+=200;
    check_if_f();
}

void Traveler::add_km_train(double hour)
{
    hours+=hour;
    km+=hour*120;
    km+=200;
    check_if_f();
}


#endif // TRAVELER_H
