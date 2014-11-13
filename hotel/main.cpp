
#include <iostream.h>

int main(int argc, const char * argv[]) {
    
    MyApplication myApp;
    CheckIn checkingIn;
    Checkout checkingOut;
    
    
    myApp.ReserveRoom( 250, "150" );
    checkingIn.doCheckIn();
    checkingOut.calculateFinalPrice();
    checkingOut.doCheckOut();
    
    return 0;
}

}
