#include <iostream>

struct CoordinateGPS
{
    int x, y;
};

class Car
{
public:

    Car(std::string name)
    {
        this->name = name;
        coordinateGPS.x = 0;
        coordinateGPS.y = 0;
    }

    Car(std::string name, int x, int y)
    {
        this->name = name;
        coordinateGPS.x = x;
        coordinateGPS.y = y;
    }

    void ShowInfo()
    {
        std::cout << "***********************************\n";
        std::cout << "Samochod o nazwie " << name << "\n";
        std::cout << "Pozycja (" << coordinateGPS.x << " ; " << coordinateGPS.y << ")\n";
        std::cout << "***********************************\n";
    }

    void MoveForward()
    {

    }

protected:

private:
    std::string name;

    CoordinateGPS coordinateGPS;
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Car carFirst("Super bryka");
    Car carSecond("Kr��ownik szos", 10, 10);

    carFirst.ShowInfo();
    carSecond.ShowInfo();
}
