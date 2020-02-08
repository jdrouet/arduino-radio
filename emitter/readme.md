# Emitter

The message is sent from an arduino nano with a [433Mhz transmitter](https://www.aliexpress.com/item/4000041649799.html) using the [RadioHead library](https://www.airspayce.com/mikem/arduino/RadioHead/).

Here is how the wiring is done between the transmitter and the Arduino.

```
        [      USB      ]
        [D13         D12] <- Data
        [3V3         D11]
        [AREF        D10]
        [A0           D9]
        [A1           D8]
        [A2           D7]
        [A3           D6]
        [A4           D5]
        [A5           D4]
        [A6           D3]
        [A7           D2]
 Vcc -> [5V          GND]
        [Reset     Reset]
 GND -> [GND          D0]
        [Vin          D1]
```

## Deploy

- Install arduino-cli
- Run `make build upload` after setting the variables properly