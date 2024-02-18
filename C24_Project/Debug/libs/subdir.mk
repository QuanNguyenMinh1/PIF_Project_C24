################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../libs/DHT.c \
../libs/ILI9225.c \
../libs/RTC.c 

OBJS += \
./libs/DHT.o \
./libs/ILI9225.o \
./libs/RTC.o 

C_DEPS += \
./libs/DHT.d \
./libs/ILI9225.d \
./libs/RTC.d 


# Each subdirectory must supply rules for building sources it contributes
libs/%.o libs/%.su libs/%.cyclo: ../libs/%.c libs/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"D:/ST/STM32CubeIDE_1.13.2/STM32CubeIDE/D/STM32CubeIDE/workspace_1.13.2/Clock_show_temp_and_hum/Libs" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-libs

clean-libs:
	-$(RM) ./libs/DHT.cyclo ./libs/DHT.d ./libs/DHT.o ./libs/DHT.su ./libs/ILI9225.cyclo ./libs/ILI9225.d ./libs/ILI9225.o ./libs/ILI9225.su ./libs/RTC.cyclo ./libs/RTC.d ./libs/RTC.o ./libs/RTC.su

.PHONY: clean-libs

