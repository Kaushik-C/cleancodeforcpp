bool checkbpm(float bpm)
{
  bool retVal;
  
  retVal = (bpm > 70 && bpm < 150) ? true : false;
 
  return retVal;  
}

bool checkspo2(float spo2)
{
  bool retVal;
  
  retVal = (spo2 > 80) ? true : false;
 
  return retVal;  
}

bool checkrespRate(float respRate)
{
  bool retVal;
  
  retVal = (respRate > 30 && respRate < 60) ? true : false;
 
  return retVal;  
}
