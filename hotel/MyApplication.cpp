#include <iostream.h>

class MyApllication: public Application{
	
	public:
		MyApplication(){
			
			cout << "MyApplication: ctor" << endl;

		}
		
		Room ReserveRoom(250, "150"){
			cout << "   MyApplication: ReserveRoom()" << endl;
			cout << "MyApplication: ReserveRoom()" << endl;
        	Reservation ReservationHelper;
        	ReservationHelper.makeReservation();
        	ReservationHelper.changeRooms();
        	ReservationHelper.modifyDays();
        	ReservationHelper.cancelReservation();
        	return DeluxeQueen();

		};
};
