idf_component_register(SRCS "main.c"
"innotech/device/innotech_device.c"
"innotech/lcd/innotech_lcd.c"
"innotech/api_bridge/api_bridge.c"
                    INCLUDE_DIRS "."
                    "./innotech/device"
                    "./innotech/lcd"
                    "./innotech/api_bridge")
