/*
* This file is part of INAV Project.
*
* Cleanflight is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cleanflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdint.h>

#include "platform.h"
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"





timerHardware_t timerHardware[] = {
    DEF_TIM(TIM5,  CH4   PA3, TIM_USE_PPM,                        0, 1),

    DEF_TIM(TIM3,  CH3,  PB0, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0), // S1
    DEF_TIM(TIM3,  CH4,  PB1, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0), // S2
    DEF_TIM(TIM3,  CH2,  PB5, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0), // S3
    DEF_TIM(TIM3,  CH1,  PB4, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0), // S4
    DEF_TIM(TIM4,  CH1,  PB6, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_MC_SERVO, 0, 0), // S5
    DEF_TIM(TIM4,  CH2,  PB7, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_MC_SERVO, 0, 0), // S6
    DEF_TIM(TIM8,  CH3,  PC8, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_MC_SERVO, 0, 1), // S7
    DEF_TIM(TIM8,  CH4,  PC9, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_MC_SERVO, 0, 0), // S8

    DEF_TIM(TIM1,  CH1,  PA8, TIM_USE_LED,                         0, 1),//WS2812B
	DEF_TIM(TIM2,  CH2,  PB3, TIM_USE_PWM | TIM_USE_FW_SERVO,      0, 0),  // "C.C"
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);


