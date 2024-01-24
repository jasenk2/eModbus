// =================================================================================================
// eModbus: Copyright 2020 by Michael Harwerth, Bert Melis and the contributors to eModbus
//               MIT license - see license.md for details
// =================================================================================================
#ifndef _MODBUS_BRIDGE_WIFI_H
#define _MODBUS_BRIDGE_WIFI_H
#include "options.h"
#include <WiFi.h>

#undef SERVER_END
#define SERVER_END server.end();

#if defined(ESP32) ||defined(ESP8266)
#include "ModbusServerTCPtemp.h"
#include "ModbusBridgeTemp.h"

using ModbusBridgeWiFi = ModbusBridge<ModbusServerTCP<WiFiServer, WiFiClient>>;

#endif
#endif