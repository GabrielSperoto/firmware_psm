/**
 ******************************************************************************
 * @file    stm32_drivers_conf.h
 * @brief   Template configuration file for LRI stm32_drivers library.
 *
 *          Copy this file to your project's include folder (e.g. Core/Inc or
 *          User/BSP/Inc) and enable only the peripherals and features used by
 *          your target board.
 ******************************************************************************
 */

#ifndef STM32_DRIVERS_CONF_H
#define STM32_DRIVERS_CONF_H

/* Include your CubeMX-generated main.h (provides HAL types and STM32F4/STM32H7 macros) */
#include "main.h"

/* ============================================================================
 * UART Driver Configuration
 * ============================================================================ */

/* Uncomment the UART instances enabled in CubeMX (.ioc) */
/* #define BSP_BOARD_HAS_UART1 */
/* #define BSP_BOARD_HAS_UART2 */
/* #define BSP_BOARD_HAS_UART3 */
#define BSP_BOARD_HAS_UART4
/* #define BSP_BOARD_HAS_UART5 */
/* #define BSP_BOARD_HAS_UART6 */
/* #define BSP_BOARD_HAS_UART7 */
/* #define BSP_BOARD_HAS_UART8 */
/* #define BSP_BOARD_HAS_UART9 */

/* Enable ring-buffer asynchronous RX/TX mode (1) or legacy blocking/IT mode (0) */
#define UART_USE_RING_BUFFERS           1

/* Ring buffer size in bytes (must be power of 2 between 2 and 32768) */
#define UART_RING_BUFFER_SIZE           256

/* Optional FreeRTOS features */
#define UART_USE_FREERTOS
/* #define UART_USE_FREERTOS_NOTIFICATIONS */

/* ============================================================================
 * I2C Driver Configuration
 * ============================================================================ */

/* Uncomment the I2C instances enabled in CubeMX (.ioc) */
/* #define BSP_BOARD_HAS_I2C1 */
/* #define BSP_BOARD_HAS_I2C2 */
#define BSP_BOARD_HAS_I2C3 
/* #define BSP_BOARD_HAS_I2C4 */
/* #define BSP_BOARD_HAS_I2C5 */

/* ============================================================================
 * SPI Driver Configuration
 * ============================================================================ */

/* Uncomment the SPI instances enabled in CubeMX (.ioc) */
/* #define BSP_BOARD_HAS_SPI1 */
/* #define BSP_BOARD_HAS_SPI2 */
/* #define BSP_BOARD_HAS_SPI3 */

/* #define SPI_USE_FREERTOS */
/* #define SPI_USE_FREERTOS_NOTIFICATIONS */

#endif /* STM32_DRIVERS_CONF_H */
