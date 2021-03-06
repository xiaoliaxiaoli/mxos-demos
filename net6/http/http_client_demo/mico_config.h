/**
******************************************************************************
* @file    mxos_config.h
* @author  William Xu
* @version V1.0.0
* @date    08-Aug-2018
* @brief   This file provide application options diff to default.
******************************************************************************
*/

#ifndef __mxos_CONFIG_H
#define __mxos_CONFIG_H

/************************************************************************
 * Main application stack size. */
#define mxos_DEFAULT_APPLICATION_STACK_SIZE         (0x2000)

/************************************************************************
 * Enable IPv6 in TCPIP stack. */
#define mxos_CONFIG_IPV6           1

#endif