#include "Platform_Types.h"
#define STACK_Start_SP 0x20001000

extern void main(void);
void Rest_Handler (void);

void Default_Handler (){
    Rest_Handler();
}



void NMI_Handler(void)				__attribute__ ((weak, alias("Default_Handler")));;
void H_Fault_Handler(void)			__attribute__ ((weak, alias("Default_Handler")));;
void MM_Fault_Handler(void)			__attribute__ ((weak, alias("Default_Handler")));;
void Bus_Fault(void)				__attribute__ ((weak, alias("Default_Handler")));;
void Usage_Fault_Handler(void)		__attribute__ ((weak, alias("Default_Handler")));;


uint32 vectors[] __attribute__ ((section(".vectors"))) = {
	(uint32)	STACK_Start_SP,
	(uint32)	&Rest_Handler,
	(uint32)	&NMI_Handler,
	(uint32)	&H_Fault_Handler,
	(uint32)	&MM_Fault_Handler,
	(uint32)	&Bus_Fault,
	(uint32)	&Usage_Fault_Handler
};


extern uint32 _E_TEXT ;
extern uint32 _S_DATA ;
extern uint32 _E_DATA ;
extern uint32 _S_bss ;
extern uint32 _E_bss ;

void Rest_Handler (void)
{
    //copy data from ROM to RAM
	uint32 DATA_Size = (uint8*)&_E_DATA - (uint8*)&_S_DATA ;
	uint8* P_src = (uint8*)&_E_TEXT ;
	uint8* P_dst = (uint8*)&_S_DATA ;
	int i = 0;
	for (i = 0; i < DATA_Size; ++i)
		{
			*((uint8*)P_dst++) = *((uint8*)P_src++) ; 
		}

	// init the .bss with zero
	uint32 BSS_Size = (uint8*)&_E_bss - (uint8*)&_S_bss ;
	P_dst = (uint8*)&_E_bss ;

	for (i = 0; i < BSS_Size; ++i)
		{
			*((uint8*)P_dst++) = (uint8)0 ; 
		}
    
    main();

}