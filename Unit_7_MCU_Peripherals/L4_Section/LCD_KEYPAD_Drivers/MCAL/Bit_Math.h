/*
 * Bit_Math.h
 *
 * Created: 22.09.2024 12:07:22
 *  Author: Mohamed Ahmed
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define Set_Bit(Reg, Bit)		(Reg |= (1<<Bit))
#define Reset_Bit(Reg,Bit)		(Reg &=~ (1<<Bit))
#define Toggle_Bit(Reg,Bit)		(Reg ^= (1<<Bit))
#define Get_Bit(Reg,Bit)		((Reg >> Bit) & (0X01))

#define Set_Pin(Port, Pin)		(Port |= Pin)
#define Reset_Pin(Port,Pin)		(Port &=~ Pin)
#define Toggle_Pin(Port,Pin)	(Port ^= Pin)


#endif /* BIT_MATH_H_ */