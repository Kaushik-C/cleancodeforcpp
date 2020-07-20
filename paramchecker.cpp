
bool bpmIsOk(float bpm)
{
  bool retVal = false;
  if(bpm > 70 || bpm < 150)
  {
    retVal = true;
  }
  return retVal;  
}

bool spo2IsOk(float spo2)
{
  bool retVal = false;
  if(spo2 > 80)
  {
    retVal = true;
  }
  return retVal;  
}

bool respRateIsOk(float respRate)
{
  bool retVal = false;
  if(respRate > 30 || respRate < 60)
  {
    retVal = true;
  }
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
