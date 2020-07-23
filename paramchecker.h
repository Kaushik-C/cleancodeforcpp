#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PARAMCHECKER_H
#define PARAMCHECKER_H

class VitalsAreOk
{
public:
	enum VitalNames
	{
		bpm = 0,
		spo2,
		respRate
	};
	struct Vitals_BoundaryValues
	{
		float minValue;
		float maxValue;
	};

	struct Vitals_input
	{
		VitalNames VitalID;
		Vitals_BoundaryValues Vital_Boundaries;
	};

	bool CheckVitals(int VitalID, float actual_value);

private:

};

#endif //PARAMCHECKER_H

