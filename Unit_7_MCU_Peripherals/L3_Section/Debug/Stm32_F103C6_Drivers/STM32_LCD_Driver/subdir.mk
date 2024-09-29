################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Stm32_F103C6_Drivers/STM32_LCD_Driver/lcd.c 

OBJS += \
./Stm32_F103C6_Drivers/STM32_LCD_Driver/lcd.o 

C_DEPS += \
./Stm32_F103C6_Drivers/STM32_LCD_Driver/lcd.d 


# Each subdirectory must supply rules for building sources it contributes
Stm32_F103C6_Drivers/STM32_LCD_Driver/%.o Stm32_F103C6_Drivers/STM32_LCD_Driver/%.su Stm32_F103C6_Drivers/STM32_LCD_Driver/%.cyclo: ../Stm32_F103C6_Drivers/STM32_LCD_Driver/%.c Stm32_F103C6_Drivers/STM32_LCD_Driver/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/Mohamed Ahmed/STM32CubeIDE/workspace_1.16.0/Drivers/Stm32_F103C6_Drivers/STM32_LCD_Driver" -I"C:/Users/Mohamed Ahmed/STM32CubeIDE/workspace_1.16.0/Drivers/Stm32_F103C6_Drivers/STM32_KEYPAD_Driver" -I"C:/Users/Mohamed Ahmed/STM32CubeIDE/workspace_1.16.0/Drivers/Stm32_F103C6_Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Stm32_F103C6_Drivers-2f-STM32_LCD_Driver

clean-Stm32_F103C6_Drivers-2f-STM32_LCD_Driver:
	-$(RM) ./Stm32_F103C6_Drivers/STM32_LCD_Driver/lcd.cyclo ./Stm32_F103C6_Drivers/STM32_LCD_Driver/lcd.d ./Stm32_F103C6_Drivers/STM32_LCD_Driver/lcd.o ./Stm32_F103C6_Drivers/STM32_LCD_Driver/lcd.su

.PHONY: clean-Stm32_F103C6_Drivers-2f-STM32_LCD_Driver

