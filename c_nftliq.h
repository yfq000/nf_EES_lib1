#ifndef C_NFTLIQ_H
#define C_NFTLIQ_H

#include "ees_common.h"
#include "refproper.h"

class C_nftliq : public EesDLP
{
  refproper *rp;
public:
  C_nftliq();
  ~C_nftliq();
  void funcDLP(std::string &s, std::vector<double> &inputs, std::vector<double> &outputs);
};

#endif // C_NFTLIQ_H
