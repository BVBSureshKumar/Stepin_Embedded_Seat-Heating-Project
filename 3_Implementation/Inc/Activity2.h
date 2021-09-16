/**
 * @file Activity2.h
 * @author Suresh Kumar
 * @brief 
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Initialize the registers for ADC setup
 *
 */
void InitADC();

/**
 * @brief Gives the ADC values for the selected channel
 *
 * @param[in] ch Channel number from 0-7
 * @return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief Return the ADC value to main function
 *
 * @return uint16_t The ADC value
 */
uint16_t Activity2_GetADC(void);

#endif // ACTIVITY2_H_INCLUDED
