
bool bpmIsOk(float bpm)
{
  bool retVal;
  
  retVal = (bpm > 70 && bpm < 150) ? true : false;

  return retVal;  
}

bool spo2IsOk(float spo2)
{
  bool retVal;
  
  retVal = (spo2 > 80) ? true : false;

  return retVal;  
}

bool respRateIsOk(float respRate)
{
  bool retVal;
  
  retVal = (respRate > 30 && respRate < 60) ? true : false;
 
  return retVal;  
}


bool vitalsAreOk(float bpm, float spo2, float respRate)
{
  bool retVal = false;
  if((bpmIsOk(bpm) == false) || (spo2IsOk(spo2) == false) || (respRateIsOk(respRate) == false))
  {
     retVal = false;
  }
  else
  {
    retVal = true;
  }
  return retVal;
}
