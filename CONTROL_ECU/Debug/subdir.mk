################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CONTROL_ECU.c \
../GPIO.c \
../PWM.c \
../buzzer.c \
../dc-motor.c \
../external_eeprom.c \
../i2c.c \
../timer1.c \
../uart.c 

OBJS += \
./CONTROL_ECU.o \
./GPIO.o \
./PWM.o \
./buzzer.o \
./dc-motor.o \
./external_eeprom.o \
./i2c.o \
./timer1.o \
./uart.o 

C_DEPS += \
./CONTROL_ECU.d \
./GPIO.d \
./PWM.d \
./buzzer.d \
./dc-motor.d \
./external_eeprom.d \
./i2c.d \
./timer1.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


