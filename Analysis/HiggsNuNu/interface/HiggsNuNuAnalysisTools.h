#ifndef ICHiggsTauTau_HiggsNuNu_HiggsNuNuAnalysisTools_h
#define ICHiggsTauTau_HiggsNuNu_HiggsNuNuAnalysisTools_h
#include <vector>
#include <map>
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TTree.h"
#include "TPad.h"
#include "Utilities/interface/SimpleParamParser.h"
#include "Utilities/interface/FnRootTools.h"

#define CLASS_MEMBER(classn,type,name)                                              \
  protected:                                                                          \
    type name##_;                                                                   \
  public:                                                                           \
    virtual classn & set_##name(type const& name) {name##_ = name; return *this; }  \
    virtual type & name() {return name##_; }                                      

  
namespace ic {
  void DrawCMSLogoTest(TPad* pad, TString cmsText, TString extraText, int iPosX,float relPosX, float relPosY, float relExtraDY);
  void DrawCMSLogoTest(TPad* pad, TString cmsText, TString extraText, int iPosX);
  double Integral(TH1F const* hist);
  double Integral(TH2F const* hist);
  double Integral(TH1F const* hist, int binmin, int binmax);
  double Integral(TH2F const* hist, int xbinmin, int xbinmax, int ybinmin, int ybinmax);
  double Integral(TH3F const* hist, int xbinmin, int xbinmax, int ybinmin, int ybinmax, int zbinmin, int zbinmax);
  double IntegralWithError(TH1F const* hist, int binmin, int binmax, double err);
  //  double IntegralWithError(TH2F const* hist, int binmin, int binmax, double err);
  //double IntegralWithError(TH2F const* hist, int xbinmin, int xbinmax,int ybinmin, int ybinmax, double err);
  double IntegralWithError(TH1F const* hist, double err);
  double Error(TH1F const* hist);
  double Error(TH2F const* hist);
  double Error(TH1F const* hist,int binmin,int binmax);
  double Error(TH2F const* hist, int xbinmin, int xbinmax, int ybinmin, int ybinmax);
  double Error(TH3F const* hist, int xbinmin, int xbinmax, int ybinmin, int ybinmax, int zbinmin, int zbinmax);
  std::string BuildCutString(std::string const& selection,
			     std::string const& category,
			     std::string const& weight);
  std::string BuildVarString(std::string const& variable);
  bool GetShape(TH1F & shape, std::string const& variable, std::string const& selection, std::string const& category, std::string const& weight, TTree* ttree, const bool toadd);
  bool GetShape2D(TH2F & shape, std::string const& variable, std::string const& selection, std::string const& category, std::string const& weight, TTree* ttree, const bool toadd);
  TH1F GetShape(std::string const& variable, std::string const& selection, std::string const& category, std::string const& weight, TTree* ttree);
  TH2F GetShape2D(std::string const& variable, std::string const& selection, std::string const& category, std::string const& weight, TTree* ttree);
  TH3F GetShape3D(std::string const& variable, std::string const& selection, std::string const& category, std::string const& weight, TTree* ttree);


  class HiggsNuNuAnalysis {
  public:
    HiggsNuNuAnalysis(int verbosity);
  };

}
#endif
