/*
 * @Author: Alex.Pan
 * @Date: 2020-01-14 13:54:03
 * @LastEditTime : 2020-01-14 15:58:33
 * @LastEditors  : Alex.Pan
 * @Description: 
 * @FilePath: \rt-thread\bsp\AIot\packages\rx8010-v1.0.0\rtc-rx8010.h
 * @Copyright 2010-2015 LEKTEC or its affiliates. All Rights Reserved.
 */


#ifndef __RX8010_H__
#define __RX8010_H__

#include <rthw.h>
#include <rtthread.h>

#include <rthw.h>
#include <rtdevice.h>

struct rx8010_device
{
    struct rt_i2c_bus_device *i2c;      /*i2c 操作句柄*/
    rt_mutex_t lock;                    /*读写保护*/
};
typedef struct rx8010_device *rx8010_device_t;

#endif