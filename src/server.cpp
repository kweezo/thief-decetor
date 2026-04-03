#include "server.hpp"

#define NETWORK_NAME "sas"
#define NETWORK_PASSWORD "ten10pushups"

int connectToWiFi() {
    uint8_t count = WiFi.scanNetworks();
    if(!count) return -1;

    WiFi.beginBSSID(NETWORK_NAME, (const uint8_t*)NETWORK_PASSWORD);
    for(int i = 0; i < count; i++) {
        
    }

    while(true) {
        switch(WiFi.status()) {
            case WL_CONNECT_FAILED:
                return -2;
            case WL_CONNECTED:
                return 0;
            default:
                break;
        }
    }
   
}