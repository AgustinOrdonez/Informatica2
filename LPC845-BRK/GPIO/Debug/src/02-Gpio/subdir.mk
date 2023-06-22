################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/02-Gpio/Gpio.cpp 

CPP_DEPS += \
./src/02-Gpio/Gpio.d 

OBJS += \
./src/02-Gpio/Gpio.o 


# Each subdirectory must supply rules for building sources it contributes
src/02-Gpio/%.o: ../src/02-Gpio/%.cpp src/02-Gpio/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C++ Compiler'
	arm-none-eabi-c++ -DDEBUG -D__CODE_RED -D__NEWLIB__ -DCORE_M0PLUS -D__MTB_BUFFER_SIZE=256 -D__USE_ROMDIVIDE -DCPP_USE_HEAP -D__LPC84X__ -I"/home/dioswilson1/colegio/Informatica2/LPC845-BRK/GPIO/src/01-PIN" -I"/home/dioswilson1/colegio/Informatica2/LPC845-BRK/GPIO/src" -I"/home/dioswilson1/colegio/Informatica2/LPC845-BRK/GPIO/src/02-Gpio" -I"/home/dioswilson1/colegio/Informatica2/LPC845-BRK/GPIO/src/application" -I"/home/dioswilson1/colegio/Informatica2/LPC845-BRK/GPIO/src/firmware" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -fno-rtti -fno-exceptions -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m0 -mthumb -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-02-2d-Gpio

clean-src-2f-02-2d-Gpio:
	-$(RM) ./src/02-Gpio/Gpio.d ./src/02-Gpio/Gpio.o

.PHONY: clean-src-2f-02-2d-Gpio

