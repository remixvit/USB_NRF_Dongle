/*******************************************************************************
* File Name: SysClock_ISR.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_SysClock_ISR_H)
#define CY_ISR_SysClock_ISR_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void SysClock_ISR_Start(void);
void SysClock_ISR_StartEx(cyisraddress address);
void SysClock_ISR_Stop(void);

CY_ISR_PROTO(SysClock_ISR_Interrupt);

void SysClock_ISR_SetVector(cyisraddress address);
cyisraddress SysClock_ISR_GetVector(void);

void SysClock_ISR_SetPriority(uint8 priority);
uint8 SysClock_ISR_GetPriority(void);

void SysClock_ISR_Enable(void);
uint8 SysClock_ISR_GetState(void);
void SysClock_ISR_Disable(void);

void SysClock_ISR_SetPending(void);
void SysClock_ISR_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the SysClock_ISR ISR. */
#define SysClock_ISR_INTC_VECTOR            ((reg32 *) SysClock_ISR__INTC_VECT)

/* Address of the SysClock_ISR ISR priority. */
#define SysClock_ISR_INTC_PRIOR             ((reg32 *) SysClock_ISR__INTC_PRIOR_REG)

/* Priority of the SysClock_ISR interrupt. */
#define SysClock_ISR_INTC_PRIOR_NUMBER      SysClock_ISR__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable SysClock_ISR interrupt. */
#define SysClock_ISR_INTC_SET_EN            ((reg32 *) SysClock_ISR__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the SysClock_ISR interrupt. */
#define SysClock_ISR_INTC_CLR_EN            ((reg32 *) SysClock_ISR__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the SysClock_ISR interrupt state to pending. */
#define SysClock_ISR_INTC_SET_PD            ((reg32 *) SysClock_ISR__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the SysClock_ISR interrupt. */
#define SysClock_ISR_INTC_CLR_PD            ((reg32 *) SysClock_ISR__INTC_CLR_PD_REG)



#endif /* CY_ISR_SysClock_ISR_H */


/* [] END OF FILE */
