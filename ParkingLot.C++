#include <bits/stdc++.h>
using namespace std;

class ParkingLot{
    public:
      vector<ParkingFloor> parkingFloors;
      vector<Entrance> entrances;
      vector<Exit> exits;
      
      Address address;
      String ParkingLotName;
      
      bool isParkingSpaceAvailforVehicle(Vehicle vehicle);
      bool updateParkingAttendent(ParkingAttendent parkingAttendent,int gateID);
  
};
class ParkingFloor{
    public:
    int levelid;
    bool isFull;
    vector<ParkingSpace> parkingspaces;
    
    ParkingDisplayBoard parkingdisplayboard;
}

class Gate{
    public:
    int gateid;
    ParkingAttendent parkingAttendent;
}

class Entrance : Gate{
    public:
    ParkingTicket getParkingTicket(Vehicle vehicle);
}

class Exit : Gate{
    public:
    ParkingTicket payForParking(ParkingTicket parkingTicket,PaymentType paymentType);
}

class Address{
    string country;
    string state;
    string Pincode;
    string city;
}

class ParkingSpace{
    public:
    int spaceID;
    bool isFree;
    double costPerHour;
    Vehicle vehicle;
    ParkingSpaceType parkingSpaceType;
}

class ParkingDisplayBoard{
    map<ParkingSpaceType,int> freeSlotsAvailable;
    void updateFreeSlotsAvailable(ParkingSpaceType parkingSpaceType,int spaces);
    
    
}

class Account{
    string name;
    string email;
    string password;
    string empid;
    Address address;
}

class Admin : Account{
    public:
     bool addParkingFloor(ParkingLot parkinglot, ParkingFloor parkingfloor);
     bool addParkingSpace(ParkingFloor parkingfloor ,ParkingSpace parkingSpace);
     bool addParkingDisplayBoard(ParkingFloor parkingfloor,ParkingDisplayBoard parkingDisplayBoard);
}

class ParkingAttendent : Account{
    public:
    Payment paymentService;
    bool processVehicleEntry(Vehicle vehicle);
    PaymentInfo processPayment(ParkingTicket parkingTicket,PaymentType paymentType);
    
}

class Vehicle{
    public:
    string LicenseNo;
    VehicleType vehicleType;
    ParkingTicket parkingTicket;
    PaymentInfo paymentInfo;
    
    
}

class ParkingTicket{
    public:
    int ticketId;
    int levelId;
    int spaceId;
    Date VehicleEntryDateTime;
    Date VehicleExitDateTime;
    ParkingSpaceType parkingSpaceType;
    double totalcost;
    ParkingTicketStatus parkingTicketStatus;
    
    void updateTotalCost();
    void updateVehicleExitTime(Date vehicleExitDateTime)
}
public enum PaymentType{
    CASH,CREDIT_CAR,DEBIT_CARD,UPI;
}
public enum ParkingSpaceType{
    BIKE_PARKING,CAR_PARKING,BUS_PARKING;
}
class Payment{
    public :
    PaymentInfo makepayment(ParkingTicket parkingTicket,PaymentType paymentType);
}

class PaymentInfo{
    double amount;
    Date paymentDate;
    int transactionId;
    ParkingTicket parkingTicekt;
    PaymentStatus paymentStatus;
}

public enum VehicleType{
    BIKE,CAR,TRUCK;
}

public enum ParkingTicketStatus{
    PAID,ACTIVE;
}

public enum PaymentStatus{
    UNPAID,PENDING,COMPLETED,DECLINED,CANCELLED,REFUNDED;
}
