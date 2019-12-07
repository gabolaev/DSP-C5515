################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs910/ccs/tools/compiler/c5500_4.4.1

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./streaming.obj" \
"./AIC/aic_func.obj" \
"./buttons/sar.obj" \
"./lcd/helpers.obj" \
"./lcd/letters_rus_en.obj" \
"../C5515.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \
-l"C:/Users/gabolaev/coursatch/usbstk5515_v1-1/lib/usbstk5515bsl.lib" \
-l"C:/c55_lp/c55_dsplib_3.00/c55_dsplib_03.00.00.03/lib/55xdspx_r3.lib" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include AIC/subdir_vars.mk
-include buttons/subdir_vars.mk
-include lcd/subdir_vars.mk
-include subdir_rules.mk
-include AIC/subdir_rules.mk
-include buttons/subdir_rules.mk
-include lcd/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
sound_test.out \

EXE_OUTPUTS__QUOTED += \
"sound_test.out" \

BIN_OUTPUTS += \
sound_test.hex \

BIN_OUTPUTS__QUOTED += \
"sound_test.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "sound_test.out"

# Tool invocations
sound_test.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C5500 Linker'
	"C:/ti/ccs910/ccs/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --define=c5515 --display_error_number --diag_warning=225 --ptrdiff_size=16 -z -m"sound_test.map" --stack_size=0x200 --heap_size=0x400 -i"C:/ti/ccs910/ccs/tools/compiler/c5500_4.4.1/lib" -i"C:/ti/ccs910/ccs/tools/compiler/c5500_4.4.1/include" --reread_libs --display_error_number --warn_sections --xml_link_info="sound_test_linkInfo.xml" --rom_model --sys_stacksize=0x200 -o "sound_test.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

sound_test.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C5500 Hex Utility'
	"C:/ti/ccs910/ccs/tools/compiler/c5500_4.4.1/bin/hex55"  -o "sound_test.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "streaming.obj" "AIC\aic_func.obj" "buttons\sar.obj" "lcd\helpers.obj" "lcd\letters_rus_en.obj" 
	-$(RM) "main.d" "streaming.d" "AIC\aic_func.d" "buttons\sar.d" "lcd\helpers.d" "lcd\letters_rus_en.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

