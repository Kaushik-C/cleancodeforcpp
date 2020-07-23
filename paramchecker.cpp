#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "paramchecker.h"

using namespace std;

std::vector<VitalsAreOk::Vitals_input> input;

static const std::map<VitalsAreOk::VitalNames, VitalsAreOk::Vitals_BoundaryValues> input = {
	{ VitalsAreOk::VitalNames::bpm,{ 70, 150 } },
	{ VitalsAreOk::VitalNames::spo2,{ 80, 101 } },
	{ VitalsAreOk::VitalNames::respRate,{ 30, 60 } }
};



bool VitalsAreOk::CheckVitals(int  VitalID, float actual_value)
{
	bool retVal = true;
	/*Get the name and actual value*/
	//cin -- not done now

	for (int i = 0; i < input.size;i++)
	{
		if (input[i].VitalID == VitalID)
		{
			retVal = ((actual_value > input[i].Vital_Boundaries.minValue) && (actual_value < input[i].Vital_Boundaries.maxValue)) ? true : false;
		}
	}

	return retVal;
}



