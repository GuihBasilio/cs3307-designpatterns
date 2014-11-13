#include <iostream.h>
class Application{
	
	public:
    Application()
    {
    	cout << "Application: ctor" << endl;

    }
	
	NewReservation(){
		
		cout << "Application: NewReservation()" << endl;

	}
	
	virtual Room ReserveRoom(double price, string roomNumber) = 0;
};
