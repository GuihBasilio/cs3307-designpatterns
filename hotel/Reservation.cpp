#include <iostream.h>
class Reservation{
	
	private:
	Customers customer;
	Room room;
	int numberOfDays;
	
	public:
	void makeReservation(){
		cout << "Reservation class accessed. Making reservations. Accessing customers class" << endl;
	}
	
	void changeRooms(){
		cout << "Reservation class accessed. Changing the rooms. Accessing room class" << endl;
	}
	
	void cancelReservation(){
		cout << "Reservation class accessed. Cancelling reservations" << endl;
	}
	
	void modifyDays(){
		cout << "Reservation class accessed. Changing days for the reservation" << endl;
	}
	
		
};
