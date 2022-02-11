/*
 * BIT_MATH.h
 *
 * Created: 5/29/2020 2:31:18 PM
 *  Author: Lamees
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(var,bit)       var|=(1<<bit)
#define CLEAR_BIT(var,bit)     var&=~(1<<bit)
#define TOGGLE_BIT(var,bit)    var^=(1<<bit)
#define GET_BIT(var,bit)       ((var>>bit)&1)



#endif /* BIT_MATH_H_ */