#pragma once


/* Set values */
#define RS_TRUE 1
#define RS_FALSE 0

/* Input and output Stream Includes */
#include <iostream>


/* RedShift Engine Initialization */
namespace RS_ENGINE {
	void Run();

	/* API USER INCLUDES */
	namespace RS_API_USR {
		int __stdcall USR_Run();
	}


	/* API SYSTEM INCLUDES
	   System Initialization with System variables */
	namespace RS_API_SYS 
	{
		void USER_INIT();
	}
}

void RS_ENGINE::Run() {

}

int __stdcall RS_ENGINE::RS_API_USR::USR_Run() {
	int RetVal = 1;

	while (RetVal == RS_TRUE && !RS_FALSE) {

	}

	return 0;
}

void RS_ENGINE::RS_API_SYS::USER_INIT() 
{
	int USR = RS_TRUE;

}