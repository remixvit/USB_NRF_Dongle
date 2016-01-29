/*******************************************************************************
* File Name: ExtInterrupt_Reg.h  
* Version 1.90
*
* Description:
*  This file containts Status Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_STATUS_REG_ExtInterrupt_Reg_H) /* CY_STATUS_REG_ExtInterrupt_Reg_H */
#define CY_STATUS_REG_ExtInterrupt_Reg_H

#include "cytypes.h"
#include "CyLib.h"

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 statusState;

} ExtInterrupt_Reg_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

uint8 ExtInterrupt_Reg_Read(void) ;
void ExtInterrupt_Reg_InterruptEnable(void) ;
void ExtInterrupt_Reg_InterruptDisable(void) ;
void ExtInterrupt_Reg_WriteMask(uint8 mask) ;
uint8 ExtInterrupt_Reg_ReadMask(void) ;


/***************************************
*           API Constants
***************************************/

#define ExtInterrupt_Reg_STATUS_INTR_ENBL    0x10u


/***************************************
*         Parameter Constants
***************************************/

/* Status Register Inputs */
#define ExtInterrupt_Reg_INPUTS              2


/***************************************
*             Registers
***************************************/

/* Status Register */
#define ExtInterrupt_Reg_Status             (* (reg8 *) ExtInterrupt_Reg_sts_intr_sts_reg__STATUS_REG )
#define ExtInterrupt_Reg_Status_PTR         (  (reg8 *) ExtInterrupt_Reg_sts_intr_sts_reg__STATUS_REG )
#define ExtInterrupt_Reg_Status_Mask        (* (reg8 *) ExtInterrupt_Reg_sts_intr_sts_reg__MASK_REG )
#define ExtInterrupt_Reg_Status_Aux_Ctrl    (* (reg8 *) ExtInterrupt_Reg_sts_intr_sts_reg__STATUS_AUX_CTL_REG )

#endif /* End CY_STATUS_REG_ExtInterrupt_Reg_H */


/* [] END OF FILE */
