#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

//#define GLOBAL_DEBUG_ON                  // Enable serial debug info

#define CFG_HOLDER          0x20160227   // Change this value to load default configurations
#define CFG_LOCATION        0xF8         // Please don't change or if you know what you doing

// Wifi
#define STA_SSID            "indebuurt3"
#define STA_PASS            "VnsqrtnrsddbrN"
#define STA_TYPE            AUTH_WPA2_PSK

// Ota
#define OTA_URL             "http://esp-dev:80/api/"PROJECT"/user1.bin"

// MQTT
#define MQTT_HOST           "kiichigo"
#define MQTT_PORT           1883
#define DEFAULT_SECURITY    0

#define MQTT_CLIENT_ID      "DVES_%06X"  // Also fall back topic using Chip Id = last 6 characters of MAC address
#define MQTT_USER           "DVES_USER"
#define MQTT_PASS           "DVES_PASS"
#define MQTT_KEEPALIVE      120          // seconds

#define MQTT_GRPTOPIC       "home/allrooms/light"   // Group topic
#define MQTT_TOPIC          "home/bedroom/light"
#define SUB_PREFIX          "cmnd"
#define PUB_PREFIX          "stat"

// Application
#define MQTT_SUBTOPIC       "POWER"
#define APP_TIMEZONE        1            // +1 hour (Amsterdam)
#define APP_POWER           0            // Saved power state Off

#endif
