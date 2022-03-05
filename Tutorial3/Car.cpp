#include "Car.h"

using namespace std;

Car::Car(Fuel t_Fuel)
{
    this->fuel = t_Fuel;
    this->gear = 0;
    this->ac_power = 0;
    this->on = false;
}

Fuel Car::getFuel()
{
    return this->fuel;
}

int Car::getGear()
{
    return this->gear;
}

int Car::getAcPower()
{
    return this->ac_power;
}

bool Car::getOn()
{
    return this->on;
}

void Car::fillingFuel(Fuel t_fuel, int amount_in_liter)
{
    if (t_fuel == this->fuel)
    {
        cout << "Berhasil isi bensin sebanyak " << amount_in_liter << " liter" << endl;
    }
    else
    {
        throw t_fuel;
    }
}

void Car::changeGear(int t_gear)
{
    if (t_gear >= MIN_GEAR && t_gear <= MAX_GEAR)
    {
        this->gear = t_gear;
        cout << "Berhasil mengubah gigi menjadi gigi " << this->gear << endl;
    }else{
        throw t_gear;
    }
}

void Car::changeAcPower(int t_ac_power)
{
    if (t_ac_power >= MIN_AC && t_ac_power <= MAX_AC)
    {
        this->ac_power = t_ac_power;
        cout << "Berhasil mengubah power ac menjadi " << this->ac_power << endl;
    }else{
        throw t_ac_power;
    }
}

void Car::start()
{
    if (this->on)
    {
        throw this->on;
    }
    else
    {
        this->on = true;
        cout << "Berhasil melakukan starter mobil" << endl;
    }
}

void Car::service(Fuel t_fuel, int amount_in_liter, int t_gear, int t_ac_power)
{
    try
    {
        start();
        fillingFuel(t_fuel, amount_in_liter);
        changeGear(t_gear);
        changeAcPower(t_ac_power);
    }
    catch (bool)
    {
        cout << "Mobil sudah menyala" << endl;
    }
    catch (int)
    {
        cout << "Input angka diluar range" << endl;
    }
    catch (Fuel)
    {
        cout << "Bensin tidak sesuai" << endl;
    }
}