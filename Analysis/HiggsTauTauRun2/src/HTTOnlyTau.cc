#include "UserCode/ICHiggsTauTau/Analysis/Utilities/interface/FnPredicates.h"
#include "UserCode/ICHiggsTauTau/Analysis/HiggsTauTauRun2/interface/HTTOnlyTau.h"

namespace ic {

  HTTOnlyTau::HTTOnlyTau(std::string const& name) : ModuleBase(name), 
      channel_(channel::mt){
      ditau_label_ = "taus";
      fs_ = NULL;
  }

  HTTOnlyTau::~HTTOnlyTau() {
    ;
  }

  int HTTOnlyTau::PreAnalysis() {
        outtree_ = fs_->make<TTree>("gen_ntuple","gen_ntuple");
        outtree_->Branch("mvadm_score_pi_2" , &mvadm_score_pi_2_ );
        outtree_->Branch("mvadm_score_pipi0_2" , &mvadm_score_pipi0_2_ );
        outtree_->Branch("mvadm_score_pi2pi0_2" , &mvadm_score_pi2pi0_2_ );
        outtree_->Branch("mvadm_score_3pi_2" , &mvadm_score_3pi_2_ );
        outtree_->Branch("mvadm_score_3pipi0_2" , &mvadm_score_3pipi0_2_ );
        outtree_->Branch("mvadm" , &tau_mva_decay_mode_2_ );
        outtree_->Branch("hpsdm" , &tau_hps_decay_mode_2_ );
    return 0;
  }
    

  int HTTOnlyTau::Execute(TreeEvent *event) {
    
   
   // if (channel_ == channel::mt && event->ExistsInTree("pfCandidates")) {


   // std::vector<CompositeCandidate *> const& ditau_vec = event->GetPtrVec<CompositeCandidate>(ditau_label_);
   // CompositeCandidate const* ditau = ditau_vec.at(0);
   // Candidate const* lep2 = ditau->GetCandidate("lepton2");

   // if(event->Exists("tauFlag2")) tauFlag_2_ = event->Get<int>("tauFlag2");


   //   Tau const* tau2 = dynamic_cast<Tau const*>(lep2);

   //   mvadm_score_pi_2_ = tau2->HasTauID("MVADM2017v1DM0raw") ? tau2->GetTauID("MVADM2017v1DM0raw") : 0.0;
   //   mvadm_score_pipi0_2_ = tau2->HasTauID("MVADM2017v1DM1raw") ? tau2->GetTauID("MVADM2017v1DM1raw") : 0.0;
   //   mvadm_score_pi2pi0_2_ = tau2->HasTauID("MVADM2017v1DM2raw") ? tau2->GetTauID("MVADM2017v1DM2raw") : 0.0;
   //   mvadm_score_3pi_2_ = tau2->HasTauID("MVADM2017v1DM10raw") ? tau2->GetTauID("MVADM2017v1DM10raw") : 0.0;
   //   mvadm_score_3pipi0_2_ = tau2->HasTauID("MVADM2017v1DM11raw") ? tau2->GetTauID("MVADM2017v1DM11raw") : 0.0;

   //   tau_mva_decay_mode_2_ = tau2->HasTauID("MVADM2017v1") ? tau2->GetTauID("MVADM2017v1") : 0.0;
   // }
   
     
    std::vector<ic::Tau*> my_taus = event->GetPtrVec<ic::Tau>("taus");
    if (my_taus.size()>0) {
    //std::cout<<my_taus[0]->GetTauID("MVADM2017v1")<<"******************"<<std::endl;
    tau_mva_decay_mode_2_ = my_taus[0]->HasTauID("MVADM2017v1") ? my_taus[0]->GetTauID("MVADM2017v1") : 0.0;
    mvadm_score_pi_2_ = my_taus[0]->HasTauID("MVADM2017v1DM0raw") ? my_taus[0]->GetTauID("MVADM2017v1DM0raw") : 0.0;
    mvadm_score_pipi0_2_ = my_taus[0]->HasTauID("MVADM2017v1DM1raw") ? my_taus[0]->GetTauID("MVADM2017v1DM1raw") : 0.0;
    mvadm_score_pi2pi0_2_ = my_taus[0]->HasTauID("MVADM2017v1DM2raw") ? my_taus[0]->GetTauID("MVADM2017v1DM2raw") : 0.0;
    mvadm_score_3pi_2_ = my_taus[0]->HasTauID("MVADM2017v1DM10raw") ? my_taus[0]->GetTauID("MVADM2017v1DM10raw") : 0.0;
    mvadm_score_3pipi0_2_ = my_taus[0]->HasTauID("MVADM2017v1DM11raw") ? my_taus[0]->GetTauID("MVADM2017v1DM11raw") : 0.0;
    tau_hps_decay_mode_2_ = my_taus[0]->decay_mode();
   }
   
   
     outtree_->Fill();
   
    
    return 0;

  }
  
  int HTTOnlyTau::PostAnalysis() {
    std::cout << "DONEEEEEE" << std::endl;

    return 0;
  }

  void HTTOnlyTau::PrintInfo() {
    ;
  }
}
