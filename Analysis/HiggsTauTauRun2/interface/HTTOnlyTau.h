#ifndef ICHiggsTauTau_HiggsTauTauRun2_HTTOnlyTau_h
#define ICHiggsTauTau_HiggsTauTauRun2_HTTOnlyTau_h

#include "PhysicsTools/FWLite/interface/TFileService.h"
#include "UserCode/ICHiggsTauTau/Analysis/Core/interface/TreeEvent.h"
#include "UserCode/ICHiggsTauTau/Analysis/Core/interface/ModuleBase.h"
#include "UserCode/ICHiggsTauTau/Analysis/Utilities/interface/HTTPlots.h"
#include "UserCode/ICHiggsTauTau/Analysis/HiggsTauTauRun2/interface/HTTConfig.h"
#include "UserCode/ICHiggsTauTau/Analysis/Utilities/interface/HistoSet.h"
#include "TRandom3.h"
#include "UserCode/ICHiggsTauTau/Analysis/Utilities/interface/IpCorrection.h"

#include <string>

namespace ic {
  
class HTTOnlyTau : public ModuleBase {
 private:
  CLASS_MEMBER(HTTOnlyTau, fwlite::TFileService*, fs)
  CLASS_MEMBER(HTTOnlyTau, std::string, ditau_label)
  CLASS_MEMBER(HTTOnlyTau, ic::channel, channel)
  TTree *outtree_;
  
  unsigned long long event_;
  
  double mvadm_score_pi_2_ ;
  double mvadm_score_pipi0_2_ ;
  double mvadm_score_pi2pi0_2_ ;
  double mvadm_score_3pi_2_ ;
  double mvadm_score_3pipi0_2_ ;  
  int tau_mva_decay_mode_2_;
  int tau_hps_decay_mode_2_;
  int tauFlag_2_;


 public:
  HTTOnlyTau(std::string const& name);
  virtual ~HTTOnlyTau();

  virtual int PreAnalysis();
  virtual int Execute(TreeEvent *event);
  virtual int PostAnalysis();
  virtual void PrintInfo();
  

};

}

#endif
