FQBN="arduino:avr:nano:cpu=atmega328old"
PORT=/dev/ttyUSB0

build:
	arduino-cli compile --fqbn ${FQBN} .

upload:
	arduino-cli upload -p ${PORT} --fqbn ${FQBN} .

clean:
	rm -f "..arduino.avr.nano.elf" "..arduino.avr.nano.hex"
