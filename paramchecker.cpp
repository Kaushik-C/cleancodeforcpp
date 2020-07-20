bool checkVitals(bool condition)
{
  bool retVal;
  
  retVal = condition ? true : false;
 
  return retVal;  
}

bool vitalsAreOk(float bpm, float spo2, float respRate)
{
  bool retVal = false;
  
  if(checkVitals(bpm > 70 && bpm < 150) == true)
  {
    retVal = true;
  }
  
  if(checkVitals(spo2 > 80) == true)
  {
    retVal = true;
  }
  
  if(checkVitals(respRate > 30 && respRate < 60) == true)
  {
    retVal = true;
  }

  return retVal;
}
