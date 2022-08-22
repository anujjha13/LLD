class Clock{
    
    int serial_no;
    Time cur_time;
    Brand brand;
    Alarm alarm;
    WeatherType weather;
    Temperature temperature;
    Owner owner;
    
}
class People{
    string name;
    int age;
    string gender;
    int phone_no;
    Address Location
    
}
class Address{
    string landmark;
    string city;
    string country;
    int pin_code;
}
class Owner : People{
    
    int cust_id;
    PaymentType paymentdoneby;
    
}
class Time{
    int hour_count;
    int min_count;
    int sec_count;
    
}
public enum Brand{
    'Casio','Rolex','Ck'
}
class Alarm : Time{
    bool setAlarm;
    
}
class Temprature{
    int temperature;
    Units unit;
}
public enum Units{
    'Degree','Fahrenheit','Celsius';
}
public enum WeatherType{
    'Sunny','Hazy','Cloudy'
}
