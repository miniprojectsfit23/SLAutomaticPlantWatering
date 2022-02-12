// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "cbc52041-9431-475a-a027-73d3232c9d49";

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
