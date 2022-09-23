// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "cc40308f-2263-4cc4-be27-ff432f6dbc78";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onSoilWaterChange();
void onWateringNowChange();

CloudRelativeHumidity soil_water;
bool wateringNow;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(soil_water, READWRITE, ON_CHANGE, onSoilWaterChange);
  ArduinoCloud.addProperty(wateringNow, READWRITE, ON_CHANGE, onWateringNowChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
