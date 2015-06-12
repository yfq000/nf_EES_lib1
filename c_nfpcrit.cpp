#include "c_nfpcrit.h"

c_nfpcrit::c_nfpcrit() :
::EesDLF("NFPCRIT", "Pc = NFPCRIT(fluid$, ignored)", "m", "Pa")
{
}

double c_nfpcrit::funcDLF(std::string &s, std::vector<double> &inputs)
{
  if (inputs.size() != 1) {
    throw std::exception("Wrong number of arguments to me.");
  }
  return libr_props.underPressure(s);
}
