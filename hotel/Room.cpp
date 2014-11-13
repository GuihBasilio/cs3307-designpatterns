#include <iostream.h>
class Room{

	public:
		// pure virtual function
		virtual double getPrice();
		
		private:
			double price;
			string roomNumber;	
			
		public:
			bool isReserved(){
			}		
};
