bool checkVitals(bool condition)
{
  bool retVal;
  
  retVal = condition ? true : false;
 
  return retVal;  
}

bool vitalsAreOk(float bpm, float spo2, float respRate)
{
  bool retVal = false;
  
  retVal = checkVitals(bpm > 70 && bpm < 150);
  
  retVal = checkVitals(spo2 > 80);
  
  retVal = checkVitals(respRate > 30 && respRate < 60);

  return retVal;
}
