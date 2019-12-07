################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs910/ccs/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/c55_lp/c55_dsplib_3.00/c55_dsplib_03.00.00.03/include" --include_path="C:/Users/gabolaev/sound_workspace/sound_test/AIC" --include_path="C:/Users/gabolaev/coursatch/usbstk5515_v1-1/include" --include_path="C:/Users/gabolaev/sound_workspace/sound_test/buttons" --include_path="C:/Users/gabolaev/sound_workspace/sound_test/lcd" --include_path="C:/Users/gabolaev/coursatch/usbstk5515_v1-1/lib/bsl" --include_path="C:/Users/gabolaev/sound_workspace/sound_test" --include_path="C:/ti/ccs910/ccs/tools/compiler/c5500_4.4.1/include" --define=c5515 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


