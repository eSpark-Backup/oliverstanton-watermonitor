#include <RH_ASK.h>                 //Includes RadioHead Library

String str_receive;                 //Strings to Store Value


String str_number;


String str_distance;


 


RH_ASK rf(2000, PE14, PE13);                          //rf as object for RG_ASK


void setup()


{
    rf.init();                     //Initialize rf Object
}


 


void loop()


{
    uint8_t buf[7];                       


    uint8_t buflen = sizeof(buf);


    if (rf.recv(buf, &buflen))                                  
    {


      str_receive = String((char*)buf);                          // Receive String from the Transmitter


      for (int i = 0; i < str_receive.length(); i++)             // Split string into two string


      {


      if (str_receive.substring(i, i+1) == ",")                 


      {


      str_number = str_receive.substring(0, i);


      str_distance = str_receive.substring(i+1);


      break;


      }


    }





}


}
