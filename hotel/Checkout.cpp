class Checkout{
	
	private:
	Customer cust;
	Reservation res;
	ExtraExpenses exp;
	
	public:
		
		void calculateFinalPrice(){
			cout << "Checkout class accessed. Calculating final price. Accessing extra expenses." << endl;
		};
		
		void doCheckOut(){
			cout << "Checkout class accessed. Performing the doCheckOut() function" << endl;
		};
};
