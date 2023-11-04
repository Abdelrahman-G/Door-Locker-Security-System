/******************************************************************************
 *
 * Module: DC-motor
 *
 * File Name: dc-motor.c
 *
 * Description: Header file for the DC-motor driver
 *
 * Author: Abdelrahman gomaa
 *
 *******************************************************************************/
#include "dc-motor.h"
/*Description:
 *  Set up DC motor input pins (output pins for the microcontroller).
 *  Make the DC motor OFF initially.
 */
void DcMotor_Init(void) {
	GPIO_setupPinDirection(DC_MOTOR_PORT, DC_IN1_PIN, PIN_OUTPUT);
	GPIO_setupPinDirection(DC_MOTOR_PORT, DC_IN2_PIN, PIN_OUTPUT);

	/*DC motor initial state is OFF*/
	GPIO_writePin(DC_MOTOR_PORT, DC_IN1_PIN, LOGIC_LOW);
	GPIO_writePin(DC_MOTOR_PORT, DC_IN2_PIN, LOGIC_LOW);

}

/*Description:
 *  Configure DC motor state.
 *  Call PWM function with the required duty cycle.
 */
void DcMotor_Rotate(DcMotor_State state, uint8 speed) {
	switch(state){
	case OFF:
		GPIO_writePin(DC_MOTOR_PORT, DC_IN1_PIN, LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT, DC_IN2_PIN, LOGIC_LOW);
		break;
	case CW:
		GPIO_writePin(DC_MOTOR_PORT, DC_IN1_PIN, LOGIC_HIGH);
		GPIO_writePin(DC_MOTOR_PORT, DC_IN2_PIN, LOGIC_LOW);
		break;
	case ACW:
		GPIO_writePin(DC_MOTOR_PORT, DC_IN1_PIN, LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT, DC_IN2_PIN, LOGIC_HIGH);
		break;
	}


	/*call function PWM_Timer0_Start(uint8 duty_cycle) with the required duty cycle*/
	PWM_Timer0_Start(speed * 255 / 100);
}
