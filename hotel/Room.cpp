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
				        cout << " Room class accessed. Checking to see if it is reserved. Returning false" << endl;
				
			}		
};
