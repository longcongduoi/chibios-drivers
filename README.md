# Some Device Drivers for ChibiOS/RT

This project collects some device drivers for ChibiOS/RT.
All drivers depend only on high-level ChibiOS HAL API, 
so they can be used on any platform supported by ChibiOS HAL.

Source code uses cmake (stm32-cmake) as build system.

# Device Drivers
List of current device drivers:
* **nrf24l01** - driver for nRF24L01/nRF24L01+ 2.4GHz RF 
Transceiver IC. (http://www.nordicsemi.com/eng/Products/2.4GHz-RF/nRF24L01P)
This driver implements ChibiOS I/O channels for communication. 
See demos/usb-nrf24l01 for usage example. 
