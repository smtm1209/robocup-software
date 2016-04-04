#pragma once

#include "PinNames.h"

// This defines the mbed pins used for the primary SPI data bus.
const PinName RJ_SPI_MOSI = p5;
const PinName RJ_SPI_MISO = p6;
const PinName RJ_SPI_SCK = p7;

// This defines the radio transceiver's Chip Select pin. This should always be
const PinName RJ_RADIO_nCS = p29;

// This defines the Radio Transceiver's interrupt pin.
const PinName RJ_RADIO_INT = p10;
