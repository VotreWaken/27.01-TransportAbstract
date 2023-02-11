#include <iostream>

// Basic Class Transport
class Transport
{
public:

    // Pure Virtual Output Method
    virtual void Output() const = 0;

    // Pure Virtual Fuel Consumption Method
    virtual float FuelConsumption(float distance) = 0;

    // Pure Virtual GetCost Method
    virtual float GetCost(float distance) = 0;

    // Pure Virtual SetCost Method
    virtual void SetCost() = 0;

    // Pure Virtual Load—apacity Method
    virtual float LoadCapacity() = 0;

    // Pure Virtual PassengerPlaces Method
    virtual int PassengerPlaces() = 0;

    // Pure Virtual Destructor
    virtual ~Transport() = 0;

protected:
    float FuelConsumption_;
    float roadCost_;
    float capacityCargo_;
    int passengerPlaces_;
};

// Explicit destructor call
Transport::~Transport()
{
    std::cout << "Pure virtual destructor is called\n";
}

// Class Airplane Inherited from Basic Class Transport 
class AirPlane : public Transport
{

public:

    // Constructor
    AirPlane()
    {
        std::cout << "AirPlane Constructor\n";
        FuelConsumption_ = 50;
        roadCost_ = 100;
        capacityCargo_ = 500;
        passengerPlaces_ = 50;
    }

    // Redefinition of Clear Virtual Method "GetCost" Inherited of Basic Class
    virtual float GetCost(float distance) override final
    {
        std::cout << "AirPlane Road Cost: " << roadCost_ * distance << "\n";
        return roadCost_ * distance;
    }

    // Redefinition of Clear Virtual Method "SetCost" Inherited of Basic Class
    virtual void SetCost() override final
    {
        std::cout << "Enter Road Cost\n";
        std::cin >> roadCost_;
    }

    // Redefinition of Clear Virtual Method "LoadCapacity" Inherited of Basic Class
    virtual float LoadCapacity() override final
    {
        std::cout << "AirPlane Capacity Cargo: " << capacityCargo_ << "\n";
        return capacityCargo_;
    }

    // Redefinition of Clear Virtual Method "PassengerPlaces" Inherited of Basic Class
    virtual int PassengerPlaces() override final
    {
        std::cout << "AirPlane Passenger Places: " << passengerPlaces_ << "\n";
        return passengerPlaces_;
    }

    // Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
    virtual float FuelConsumption(float distance) override final
    {
        std::cout << "AirPlane Consumption: " << FuelConsumption_ * distance << "\n";
        return FuelConsumption_;
    }

    // Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
    virtual void Output() const override final
    {
        std::cout << "AirPlane Consumption: " << FuelConsumption_ << "\n";
        std::cout << "Road Cost: " << roadCost_ << "\n";
        std::cout << "Capacity Cargo: " << capacityCargo_ << "\n";
        std::cout << "Passenger Places_: " << passengerPlaces_ << "\n\n";
    }

    // Destructor
    virtual ~AirPlane() { std::cout << "~AirPlane() is executed\n"; }

};

// Class Ship Inherited from Basic Class Transport 
class Ship final : public Transport
{
public:

    // Constructor
    Ship()
    {
        FuelConsumption_ = 40;
        roadCost_ = 80;
        capacityCargo_ = 450;
        passengerPlaces_ = 40;
    }

    // Redefinition of Clear Virtual Method "GetCost" Inherited of Basic Class
    virtual float GetCost(float distance) override final
    {
        std::cout << "Ship Road Cost: " << roadCost_ * distance << "\n";
        return roadCost_ * distance;
    }

    // Redefinition of Clear Virtual Method "SetCost" Inherited of Basic Class
    virtual void SetCost() override final
    {
        std::cout << "Enter Road Cost\n";
        std::cin >> roadCost_;
    }

    // Redefinition of Clear Virtual Method "LoadCapacity" Inherited of Basic Class
    virtual float LoadCapacity() override final
    {
        std::cout << "Ship Capacity Cargo: " << capacityCargo_ << "\n";
        return capacityCargo_;
    }

    // Redefinition of Clear Virtual Method "PassengerPlaces" Inherited of Basic Class
    virtual int PassengerPlaces() override final
    {
        std::cout << "Ship Passenger Places: " << passengerPlaces_ << "\n";
        return passengerPlaces_;
    }

    // Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
    virtual float FuelConsumption(float distance) override final
    {
        std::cout << "Ship Consumption: " << FuelConsumption_ * distance << "\n";
        return FuelConsumption_;
    }

    // Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
    virtual void Output() const override final
    {
        std::cout << "Ship Consumption: " << FuelConsumption_ << "\n";
        std::cout << "Road Cost: " << roadCost_ << "\n";
        std::cout << "Capacity Cargo: " << capacityCargo_ << "\n";
        std::cout << "Passenger Places_: " << passengerPlaces_ << "\n\n";
    }

    // Destructor
    virtual ~Ship() { std::cout << "~Ship() is executed\n"; }

private:

};

// Class Truck Inherited from Basic Class Transport 
class Truck final : public Transport
{
public:

    // Constructor
    Truck()
    {
        FuelConsumption_ = 25;
        roadCost_ = 60;
        capacityCargo_ = 400;
        passengerPlaces_ = 30;
    }

    // Redefinition of Clear Virtual Method "GetCost" Inherited of Basic Class
    virtual float GetCost(float distance) override final
    {
        std::cout << "Truck Road Cost: " << roadCost_ * distance << "\n";
        return roadCost_ * distance;
    }

    // Redefinition of Clear Virtual Method "SetCost" Inherited of Basic Class
    virtual void SetCost() override final
    {
        std::cout << "Enter Road Cost\n";
        std::cin >> roadCost_;
    }

    // Redefinition of Clear Virtual Method "LoadCapacity" Inherited of Basic Class
    virtual float LoadCapacity() override final
    {
        std::cout << "Truck Capacity Cargo: " << capacityCargo_ << "\n";
        return capacityCargo_;
    }

    // Redefinition of Clear Virtual Method "PassengerPlaces" Inherited of Basic Class
    virtual int PassengerPlaces() override final
    {
        std::cout << "Truck Passenger Places: " << passengerPlaces_ << "\n";
        return passengerPlaces_;
    }

    // Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
    virtual float FuelConsumption(float distance) override final
    {
        std::cout << "Truck Consumption: " << FuelConsumption_ * distance << "\n";
        return FuelConsumption_;
    }

    // Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
    virtual void Output() const override final
    {
        std::cout << "Truck Consumption: " << FuelConsumption_ << "\n";
        std::cout << "Road Cost: " << roadCost_ << "\n";
        std::cout << "Capacity Cargo: " << capacityCargo_ << "\n";
        std::cout << "Passenger Places_: " << passengerPlaces_ << "\n\n";
    }

    // Destructor
    virtual ~Truck() { std::cout << "~Truck() is executed\n"; }

private:

};

// Class Bicycle Inherited from Basic Class Transport 
class Bicycle final : public Transport
{
public:

    // Constructor
    Bicycle()
    {
        FuelConsumption_ = 5;
        roadCost_ = 50;
        capacityCargo_ = 350;
        passengerPlaces_ = 20;
    }

    // Redefinition of Clear Virtual Method "GetCost" Inherited of Basic Class
    virtual float GetCost(float distance) override final
    {
        std::cout << "Bicycle Road Cost: " << roadCost_ * distance << "\n";
        return roadCost_ * distance;
    }

    // Redefinition of Clear Virtual Method "SetCost" Inherited of Basic Class
    virtual void SetCost() override final
    {
        std::cout << "Enter Road Cost\n";
        std::cin >> roadCost_;
    }

    // Redefinition of Clear Virtual Method "LoadCapacity" Inherited of Basic Class
    virtual float LoadCapacity() override final
    {
        std::cout << "Bicycle Capacity Cargo: " << capacityCargo_ << "\n";
        return capacityCargo_;
    }

    // Redefinition of Clear Virtual Method "PassengerPlaces" Inherited of Basic Class
    virtual int PassengerPlaces() override final
    {
        std::cout << "Bicycle Passenger Places: " << passengerPlaces_ << "\n";
        return passengerPlaces_;
    }

    // Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
    virtual float FuelConsumption(float distance) override final
    {
        std::cout << "Bicycle Consumption: " << FuelConsumption_ * distance << "\n";
        return FuelConsumption_;
    }

    // Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
    virtual void Output() const override final
    {
        std::cout << "Bicycle Consumption: " << FuelConsumption_ << "\n";
        std::cout << "Road Cost: " << roadCost_ << "\n";
        std::cout << "Capacity Cargo: " << capacityCargo_ << "\n";
        std::cout << "Passenger Places_: " << passengerPlaces_ << "\n\n";
    }

    // Destructor
    virtual ~Bicycle() { std::cout << "~Bicycle() is executed\n"; }

private:

};

// Class Vehicle Inherited from Basic Class Transport 
class Vehicle final : public Transport
{
public:

    // Constructor
    Vehicle()
    {
        FuelConsumption_ = 10;
        roadCost_ = 30;
        capacityCargo_ = 200;
        passengerPlaces_ = 10;
    }


    // Redefinition of Clear Virtual Method "GetCost" Inherited of Basic Class
    virtual float GetCost(float distance) override final
    {
        std::cout << "Vehicle Road Cost: " << roadCost_ * distance << "\n";
        return roadCost_ * distance;
    }

    // Redefinition of Clear Virtual Method "SetCost" Inherited of Basic Class
    virtual void SetCost() override final
    {
        std::cout << "Enter Road Cost\n";
        std::cin >> roadCost_;
    }

    // Redefinition of Clear Virtual Method "LoadCapacity" Inherited of Basic Class
    virtual float LoadCapacity() override final
    {
        std::cout << "Vehicle Capacity Cargo: " << capacityCargo_ << "\n";
        return capacityCargo_;
    }

    // Redefinition of Clear Virtual Method "PassengerPlaces" Inherited of Basic Class
    virtual int PassengerPlaces() override final
    {
        std::cout << "Vehicle Passenger Places: " << passengerPlaces_ << "\n";
        return passengerPlaces_;
    }

    // Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
    virtual float FuelConsumption(float distance) override final
    {
        std::cout << "Vehicle Consumption: " << FuelConsumption_ * distance << "\n";
        return FuelConsumption_;
    }

    // Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
    virtual void Output() const override final
    {
        std::cout << "Vehicle Consumption: " << FuelConsumption_ << "\n";
        std::cout << "Road Cost: " << roadCost_ << "\n";
        std::cout << "Capacity Cargo: " << capacityCargo_ << "\n";
        std::cout << "Passenger Places_: " << passengerPlaces_ << "\n\n";
    }
        
    // Destructor
    virtual ~Vehicle() { std::cout << "~Vehicle() is executed\n"; }

private:

};


int main()
{
    // Calling of derived member function
    Transport* b[5] = { new AirPlane,new Ship,new Truck, new Bicycle, new Vehicle };

    int userChoice = 0;
    while (1)
    {
        std::cout << "Choose Transport\n";
        std::cout << "1. Vehicle Consumption \n";
        std::cout << "2. Road Cost \n";
        std::cout << "3. Capacity Cargo \n";
        std::cout << "4. Passenger Places \n";
        std::cout << "5. Output All \n";
        std::cout << "6. Exit \n";
        std::cin >> userChoice;
        system("cls");
        switch (userChoice)
        {
        case 1:
        {
            float Distance = 0;
            std::cout << "Enter Distance\n";
            std::cin >> Distance;
            system("cls");
            for (size_t i = 0; i < 5; i++)
            {
                b[i]->FuelConsumption(Distance);
            }
            break;
        }
        case 2:
        {
            float Distance = 0;
            std::cout << "Enter Distance\n";
            std::cin >> Distance;
            system("cls");
            for (size_t i = 0; i < 5; i++)
            {
                b[i]->GetCost(Distance);
            }
            break;

        }
        case 3:
        {
            for (size_t i = 0; i < 5; i++)
            {
                b[i]->LoadCapacity();
            }
            break;

        }
        case 4:
        {
            for (size_t i = 0; i < 5; i++)
            {
                b[i]->PassengerPlaces();
            }
            break;

        }
        case 5:
        {
            for (size_t i = 0; i < 5; i++)
            {
                b[i]->Output();
            }
            break;

        }
        case 6:
        {
            return 0;
        }
        default:
        {
            std::cout << "Error \n";
            break;
        }
        }
    }

    for (int i = 0; i < 1; i++)
        delete b[i];
}