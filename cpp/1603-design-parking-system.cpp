class ParkingSystem {
private: //give the parking system class variables to store the amount of spaces
    int big_space;
    int medium_space;
    int small_space;
public:
    //Initialize variables with values passed in the constructor
    ParkingSystem(int big, int medium, int small): big_space{big}, medium_space{medium}, small_space{small}
    {}
    
    /*For the parking logic we can use a simple switch function, 
    when a car is parked we subtract from the number of spaces.
    If the amount of the respective space is equal to 0, we return false 
    */
    bool addCar(int carType) 
    {
        switch(carType)
        {
            case 1:
            {
                if (big_space == 0)
                    return false;
                else
                    big_space--;
            }
            break;
            case 2:
            {
                if (medium_space == 0)
                    return false;
                else
                    medium_space--;
            }
            break;
            case 3:
            {
                if (small_space == 0)
                    return false;
                else
                    small_space--;
            }
            break;
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
