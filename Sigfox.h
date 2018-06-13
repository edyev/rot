#ifndef Sigfox_h
#define Sigfox_h

#include "WISOL.h"

class SensorSig{
public:
  SensorSigfox();
  ~SensorSigfox();
  void testConnection();
  void setBehaviour();
  void setBehaviour(uint8_t sensor_type, uint8_t description);
  void sendValue();
  
  
  
private:
  
}


#endif
