/*
 * hw1.hpp
 *
 *  Created on: Sep 4, 2017
 *      Author: dearm
 */

#ifndef L5_APPLICATION_HW1_HW1_HPP_
#define L5_APPLICATION_HW1_HW1_HPP_

#include "tasks.hpp"
#include <stdio.h>
#include <LPC17xx.h> //for memory mapped values

class sayHi : public scheduler_task
{
public:
	sayHi(uint8_t priority);
	bool init();
	bool run(void *p);
};



#endif /* L5_APPLICATION_HW1_HW1_HPP_ */
