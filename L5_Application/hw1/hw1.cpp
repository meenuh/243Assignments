/*
 * hw1.cpp
 *
 *  Created on: Sep 4, 2017
 *      Author: dearm
 */
#include "hw1.hpp"
#include "io.hpp"
#include "scheduler_task.hpp"
#include "printf_lib.h"

sayHi::sayHi(uint8_t priority) : scheduler_task("sayHi", 2000, priority)
{

}

bool sayHi::init()
{
//	LD.clear();
	scheduler_task *hiTask = getTaskPtrByName("sayHi");

	vTaskSuspend(hiTask->getTaskHandle());

	return true;
}

bool sayHi::run(void *p)
{
	LD.setLeftDigit('h');
	LD.setRightDigit('i');

	return true;
}



