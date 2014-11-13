#include <iostream.h>

class CheckIn{
	
	private:
		Reservation res;
		Customers cus;
		
		public:
		void doCheckIn(){
			cout << "Check-in class accessed. Doing the doCheckIn() function. Reservation and customer accessed" << endl;
		};	
		
	
};
