#ifndef PCA9685_H
#define PCA9685_H

#define   PCA9685_MODE1       0x00
#define   PCA9685_MODE2       0x01
#define   PCA9685_LED0        0x06
#define   PCA9685_PRESC       0xFE
#define   PCA9685_I2C_ADR     0x40

void init_9685(void);
void set_servo(int us_value, uint8_t channel);
void set_pwm(int on, int off, int channel);

#endif