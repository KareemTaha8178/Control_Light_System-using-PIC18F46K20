/* 
 * File:   Application.c
 * Author: Kareem Taha Abdelfatah Mohammed
 * https://www.linkedin.com/in/kareem-taha-ba451621a/
 * Created on September 13, 2022, 9:10 PM
 */

#include "Application.h"
#include "MCAL_Layer/ADC/hal_adc.h"

STD_ReturnType ret = E_OK;


/*
ch_lcd_4bit_t lcd_1 = {
  .lcd_rs.port = PORTC_INDEX,
  .lcd_rs.pin = GPIO_PIN0,
  .lcd_rs.logic = GPIO_LOW,
  .lcd_rs.direction = GPIO_OUTPUT_DIRECTION,
  .lcd_en.port = PORTC_INDEX,
  .lcd_en.pin = GPIO_PIN1,
  .lcd_en.logic = GPIO_LOW,
  .lcd_en.direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_4_bit[0].port = PORTC_INDEX,
  .lcd_data_4_bit[0].pin = GPIO_PIN2,
  .lcd_data_4_bit[0].logic = GPIO_LOW,
  .lcd_data_4_bit[0].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_4_bit[1].port = PORTC_INDEX,
  .lcd_data_4_bit[1].pin = GPIO_PIN3,
  .lcd_data_4_bit[1].logic = GPIO_LOW,
  .lcd_data_4_bit[1].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_4_bit[2].port = PORTC_INDEX,
  .lcd_data_4_bit[2].pin = GPIO_PIN4,
  .lcd_data_4_bit[2].logic = GPIO_LOW,
  .lcd_data_4_bit[2].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_4_bit[3].port = PORTC_INDEX,
  .lcd_data_4_bit[3].pin = GPIO_PIN5,
  .lcd_data_4_bit[3].logic = GPIO_LOW,
  .lcd_data_4_bit[3].direction = GPIO_OUTPUT_DIRECTION
};


ch_lcd_8bit_t lcd_2 = {
  .lcd_rs.port = PORTC_INDEX,
  .lcd_rs.pin = GPIO_PIN6,
  .lcd_rs.logic = GPIO_LOW,
  .lcd_rs.direction = GPIO_OUTPUT_DIRECTION,
  .lcd_en.port = PORTC_INDEX,
  .lcd_en.pin = GPIO_PIN7,
  .lcd_en.logic = GPIO_LOW,
  .lcd_en.direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_8_bit[0].port = PORTD_INDEX,
  .lcd_data_8_bit[0].pin = GPIO_PIN0,
  .lcd_data_8_bit[0].logic = GPIO_LOW,
  .lcd_data_8_bit[0].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_8_bit[1].port = PORTD_INDEX,
  .lcd_data_8_bit[1].pin = GPIO_PIN1,
  .lcd_data_8_bit[1].logic = GPIO_LOW,
  .lcd_data_8_bit[1].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_8_bit[2].port = PORTD_INDEX,
  .lcd_data_8_bit[2].pin = GPIO_PIN2,
  .lcd_data_8_bit[2].logic = GPIO_LOW,
  .lcd_data_8_bit[2].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_8_bit[3].port = PORTD_INDEX,
  .lcd_data_8_bit[3].pin = GPIO_PIN3,
  .lcd_data_8_bit[3].logic = GPIO_LOW,
  .lcd_data_8_bit[3].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_8_bit[4].port = PORTD_INDEX,
  .lcd_data_8_bit[4].pin = GPIO_PIN4,
  .lcd_data_8_bit[4].logic = GPIO_LOW,
  .lcd_data_8_bit[4].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_8_bit[5].port = PORTD_INDEX,
  .lcd_data_8_bit[5].pin = GPIO_PIN5,
  .lcd_data_8_bit[5].logic = GPIO_LOW,
  .lcd_data_8_bit[5].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_8_bit[6].port = PORTD_INDEX,
  .lcd_data_8_bit[6].pin = GPIO_PIN6,
  .lcd_data_8_bit[6].logic = GPIO_LOW,
  .lcd_data_8_bit[6].direction = GPIO_OUTPUT_DIRECTION,
  .lcd_data_8_bit[7].port = PORTD_INDEX,
  .lcd_data_8_bit[7].pin = GPIO_PIN7,
  .lcd_data_8_bit[7].logic = GPIO_LOW,
  .lcd_data_8_bit[7].direction = GPIO_OUTPUT_DIRECTION
};


keypad_t kaypad_1 = {
    .keypad_row_pins[0].pin = GPIO_PIN0,
    .keypad_row_pins[1].pin = GPIO_PIN1,
    .keypad_row_pins[2].pin = GPIO_PIN2,
    .keypad_row_pins[3].pin = GPIO_PIN3,
    .keypad_row_pins[0].port = PORTD_INDEX,
    .keypad_row_pins[1].port = PORTD_INDEX,
    .keypad_row_pins[2].port = PORTD_INDEX,
    .keypad_row_pins[3].port = PORTD_INDEX,
    .keypad_row_pins[0].logic = GPIO_LOW,
    .keypad_row_pins[1].logic = GPIO_LOW,
    .keypad_row_pins[2].logic = GPIO_LOW,
    .keypad_row_pins[3].logic = GPIO_LOW,
    .keypad_row_pins[0].direction = GPIO_OUTPUT_DIRECTION,
    .keypad_row_pins[1].direction = GPIO_OUTPUT_DIRECTION,
    .keypad_row_pins[2].direction = GPIO_OUTPUT_DIRECTION,
    .keypad_row_pins[3].direction = GPIO_OUTPUT_DIRECTION,
    .keypad_colomns_pins[0].pin = GPIO_PIN4,
    .keypad_colomns_pins[1].pin = GPIO_PIN5,
    .keypad_colomns_pins[2].pin = GPIO_PIN6,
    .keypad_colomns_pins[3].pin = GPIO_PIN7,
    .keypad_colomns_pins[0].port = PORTD_INDEX,
    .keypad_colomns_pins[1].port = PORTD_INDEX,
    .keypad_colomns_pins[2].port = PORTD_INDEX,
    .keypad_colomns_pins[3].port = PORTD_INDEX,
    .keypad_colomns_pins[0].logic = GPIO_LOW,
    .keypad_colomns_pins[1].logic = GPIO_LOW,
    .keypad_colomns_pins[2].logic = GPIO_LOW,
    .keypad_colomns_pins[3].logic = GPIO_LOW,
    .keypad_colomns_pins[0].direction = GPIO_INPUT_DIRECTION,
    .keypad_colomns_pins[1].direction = GPIO_INPUT_DIRECTION,
    .keypad_colomns_pins[2].direction = GPIO_INPUT_DIRECTION,
    .keypad_colomns_pins[3].direction = GPIO_INPUT_DIRECTION,
};

void welcome_massege(void){
    for(int i = 1; i <= 6; i++){
        lcd_4_bit_send_string_pos(&lcd_1, 1, i, "Hello All");
        lcd_4_bit_send_string_pos(&lcd_1, 2, 5, "!Calculator!");
        _delay(250000);
        lcd_4_bit_send_string_pos(&lcd_1, 1, i, " ");
    }
    lcd_4_bit_send_string_pos(&lcd_1, 1, 1, "                  ");
    lcd_4_bit_send_string_pos(&lcd_1, 1, 6, "Hello All");
}

void loading(void){
    lcd_4_bit_send_string_pos(&lcd_1, 1, 1, "Loading");
    for(int i = 8; i <= 15; i++){
        lcd_4_bit_send_char_data_pos(&lcd_1, 1, i, '.');
        _delay(250000);
    }
}*/



adc_conf_t adc_1 = {
  .ADC_InterruptHandler = NULL,
  .acquicition_time = ADC_12_TAD,
  .format_status = ADC_RESULT_RIGHT,
  .onversion_clock = ADC_CONVERSION_CLOCK_FOSC_DIV_16,
  .select_channel = ADC_CHANNEL_AN0,
  .voltage_ref = ADC_VOLTAGE_REF_DISABLE,
};

pin_config_t pin_1 = {
  .direction =  GPIO_OUTPUT_DIRECTION,
  .logic = GPIO_LOW,
  .pin = GPIO_PIN0,
  .port = PORTC_INDEX,
};


pin_config_t pin_2 = {
  .direction =  GPIO_INPUT_DIRECTION,
  .logic = GPIO_LOW,
  .pin = GPIO_PIN1,
  .port = PORTC_INDEX,
};


pin_config_t pin_3 = {
  .direction =  GPIO_INPUT_DIRECTION,
  .logic = GPIO_LOW,
  .pin = GPIO_PIN2,
  .port = PORTC_INDEX,
};
uint16 adc_result1, adc_result2, adc_result3, adc_result4;
uint8 adc_conversion_status;


sint32 number_of_students = 0;
logic_t logic_input_sensor = GPIO_LOW;
logic_t logic_Ouput_sensor = GPIO_LOW; 

int main() { 
    Application_initialize();
    while(1){
        logic_input_sensor = GPIO_LOW;
        logic_Ouput_sensor = GPIO_LOW;  
        ADC_GetConversion_Blocking(&adc_1, ADC_CHANNEL_AN0, &adc_result1);
        gpio_pin_read_logic(&pin_2, &logic_input_sensor);
        gpio_pin_read_logic(&pin_3, &logic_Ouput_sensor); 
        _delay(500000);
        if(logic_input_sensor == GPIO_HIGH){
            number_of_students++;
        }
        if(logic_Ouput_sensor == GPIO_HIGH){
            number_of_students--;
        }
        if(adc_result1 >= 500 && number_of_students >= 1){
            gpio_pin_write_logic(&pin_1, GPIO_HIGH);
        }
        else{
            gpio_pin_write_logic(&pin_1, GPIO_LOW);
        }
    }
    return (EXIT_SUCCESS);
}

/* initialize any pin with direction & logic */
void Application_initialize(void){
    ret = ADC_Init(&adc_1);
    ret = gpio_pin_direction_init(&pin_1);
    ret = gpio_pin_direction_init(&pin_2);
    ret = gpio_pin_direction_init(&pin_3);
}

