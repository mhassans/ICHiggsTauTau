if [ -z $1 ]
then
    echo "Usage: make_output_folder.sh [output/some_folder]"
    exit
fi

#mkdir -p -v $1/TSCALE_UP
#mkdir -p -v $1/TSCALE_DOWN
#mkdir -p -v $1/TSCALE0PI_UP
#mkdir -p -v $1/TSCALE0PI_DOWN
#mkdir -p -v $1/TSCALE1PI_UP
#mkdir -p -v $1/TSCALE1PI_DOWN
#mkdir -p -v $1/TSCALE3PRONG_UP
#mkdir -p -v $1/TSCALE3PRONG_DOWN
#mkdir -p -v $1/TSCALE3PRONG1PI0_UP
#mkdir -p -v $1/TSCALE3PRONG1PI0_DOWN
##mkdir -p -v $1/TSCALE_UP_1
##mkdir -p -v $1/TSCALE_DOWN_1
##mkdir -p -v $1/TSCALE_UP_2
##mkdir -p -v $1/TSCALE_DOWN_2
##mkdir -p -v $1/TSCALE_UP_3
##mkdir -p -v $1/TSCALE_DOWN_3
##mkdir -p -v $1/TSCALE_UP_0.5
##mkdir -p -v $1/TSCALE_DOWN_0.5
##mkdir -p -v $1/TSCALE_UP_1.5
##mkdir -p -v $1/TSCALE_DOWN_1.5
##mkdir -p -v $1/TSCALE_UP_2.5
##mkdir -p -v $1/TSCALE_DOWN_2.5
## mkdir -p -v $1/BTAG_UP
## mkdir -p -v $1/BTAG_DOWN
## mkdir -p -v $1/BFAKE_UP
## mkdir -p -v $1/BFAKE_DOWN
## mkdir -p -v $1/HF_UP
## mkdir -p -v $1/HF_DOWN
## mkdir -p -v $1/HFSTATS1_UP
## mkdir -p -v $1/HFSTATS1_DOWN
## mkdir -p -v $1/HFSTATS2_UP
## mkdir -p -v $1/HFSTATS2_DOWN
## mkdir -p -v $1/CFERR1_UP
## mkdir -p -v $1/CFERR1_DOWN
## mkdir -p -v $1/CFERR2_UP
## mkdir -p -v $1/CFERR2_DOWN
## mkdir -p -v $1/LF_UP
## mkdir -p -v $1/LF_DOWN
## mkdir -p -v $1/LFSTATS1_UP
## mkdir -p -v $1/LFSTATS1_DOWN
## mkdir -p -v $1/LFSTATS2_UP
## mkdir -p -v $1/LFSTATS2_DOWN
#mkdir -p -v $1/JES_UP
#mkdir -p -v $1/JES_DOWN
#mkdir -p -v $1/JER_UP
#mkdir -p -v $1/JER_DOWN
## mkdir -p -v $1/JES_CORR_UP
## mkdir -p -v $1/JES_CORR_DOWN
## mkdir -p -v $1/JES_UNCORR_UP
## mkdir -p -v $1/JES_UNCORR_DOWN
#mkdir -p -v $1/MET_SCALE_UP
#mkdir -p -v $1/MET_SCALE_DOWN
#mkdir -p -v $1/MET_RES_UP
#mkdir -p -v $1/MET_RES_DOWN
## mkdir -p -v $1/MET_SCALE_NJETS0_DOWN
## mkdir -p -v $1/MET_SCALE_NJETS0_UP
## mkdir -p -v $1/MET_SCALE_NJETS1_DOWN
## mkdir -p -v $1/MET_SCALE_NJETS1_UP
## mkdir -p -v $1/MET_SCALE_NJETS2_DOWN
## mkdir -p -v $1/MET_SCALE_NJETS2_UP
## mkdir -p -v $1/MET_RES_NJETS0_DOWN
## mkdir -p -v $1/MET_RES_NJETS0_UP
## mkdir -p -v $1/MET_RES_NJETS1_DOWN
## mkdir -p -v $1/MET_RES_NJETS1_UP
## mkdir -p -v $1/MET_SCALE_NJETS2_DOWN
## mkdir -p -v $1/MET_RES_NJETS2_DOWN
## mkdir -p -v $1/MET_RES_NJETS2_UP
#mkdir -p -v $1/EFAKE0PI_DOWN
#mkdir -p -v $1/EFAKE0PI_UP
#mkdir -p -v $1/EFAKE1PI_DOWN
#mkdir -p -v $1/EFAKE1PI_UP
#mkdir -p -v $1/MUFAKE0PI_DOWN
#mkdir -p -v $1/MUFAKE0PI_UP
#mkdir -p -v $1/MUFAKE1PI_DOWN
#mkdir -p -v $1/MUFAKE1PI_UP
#mkdir -p -v $1/MUSCALE_DOWN
#mkdir -p -v $1/MUSCALE_UP
#mkdir -p -v $1/ESCALE_DOWN
#mkdir -p -v $1/ESCALE_UP
#mkdir -p -v $1/METUNCL_UP
#mkdir -p -v $1/METUNCL_DOWN
#mkdir -p -v $1/JESRBAL_DOWN
#mkdir -p -v $1/JESRBAL_UP
#mkdir -p -v $1/JESABS_DOWN
#mkdir -p -v $1/JESABS_UP
#mkdir -p -v $1/JESABS_YEAR_DOWN
#mkdir -p -v $1/JESABS_YEAR_UP
#mkdir -p -v $1/JESFLAV_DOWN
#mkdir -p -v $1/JESFLAV_UP
#mkdir -p -v $1/JESBBEC1_DOWN
#mkdir -p -v $1/JESBBEC1_UP
#mkdir -p -v $1/JESBBEC1_YEAR_DOWN
#mkdir -p -v $1/JESBBEC1_YEAR_UP
#mkdir -p -v $1/JESEC2_DOWN
#mkdir -p -v $1/JESEC2_UP
#mkdir -p -v $1/JESEC2_YEAR_DOWN
#mkdir -p -v $1/JESEC2_YEAR_UP
#mkdir -p -v $1/JESHF_DOWN
#mkdir -p -v $1/JESHF_UP
#mkdir -p -v $1/JESHF_YEAR_DOWN
#mkdir -p -v $1/JESHF_YEAR_UP
#mkdir -p -v $1/JESRELSAMP_YEAR_DOWN
#mkdir -p -v $1/JESRELSAMP_YEAR_UP
## mkdir -p -v $1/METCL_UP
## mkdir -p -v $1/METCL_DOWN
## mkdir -p -v $1/JESFULL_UP
## mkdir -p -v $1/JESFULL_DOWN
## mkdir -p -v $1/JESCENT_UP
## mkdir -p -v $1/JESCENT_DOWN
## mkdir -p -v $1/JESHF_UP
## mkdir -p -v $1/JESHF_DOWN
## mkdir -p -v $1/JESFULL_CORR_UP
## mkdir -p -v $1/JESFULL_CORR_DOWN
## mkdir -p -v $1/JESCENT_CORR_UP
## mkdir -p -v $1/JESCENT_CORR_DOWN
## mkdir -p -v $1/JESHF_CORR_UP
## mkdir -p -v $1/JESHF_CORR_DOWN
## mkdir -p -v $1/JESFULL_UNCORR_UP
## mkdir -p -v $1/JESFULL_UNCORR_DOWN
## mkdir -p -v $1/JESCENT_UNCORR_UP
## mkdir -p -v $1/JESCENT_UNCORR_DOWN
## mkdir -p -v $1/JESHF_UNCORR_UP
## mkdir -p -v $1/JESHF_UNCORR_DOWN
## mkdir -p -v $1/JESRBAL_DOWN
## mkdir -p -v $1/JESRBAL_UP
## mkdir -p -v $1/JESRSAMP_DOWN
## mkdir -p -v $1/JESRSAMP_UP
## mkdir -p -v $1/JESFULL_CORR_UP
## mkdir -p -v $1/JESFULL_CORR_DOWN
## mkdir -p -v $1/JESFULL_UNCORR_UP
## mkdir -p -v $1/JESFULL_UNCORR_DOWN
## mkdir -p -v $1/JESCENT_CORR_UP
## mkdir -p -v $1/JESCENT_CORR_DOWN
## mkdir -p -v $1/JESCENT_UNCORR_UP
## mkdir -p -v $1/JESCENT_UNCORR_DOWN
## mkdir -p -v $1/JESHF_CORR_UP
## mkdir -p -v $1/JESHF_CORR_DOWN
## mkdir -p -v $1/JESHF_UNCORR_UP
## mkdir -p -v $1/JESHF_UNCORR_DOWN
## mkdir -p -v $1/JESBBEE1_DOWN
## mkdir -p -v $1/JESBBEE1_UP
## mkdir -p -v $1/JESBBEE1_UNCORR_DOWN
## mkdir -p -v $1/JESBBEE1_UNCORR_UP
## mkdir -p -v $1/JESBBEE1_CORR_DOWN
## mkdir -p -v $1/JESBBEE1_CORR_UP
## mkdir -p -v $1/JESEE2_DOWN
## mkdir -p -v $1/JESEE2_UP
## mkdir -p -v $1/JESEE2_UNCORR_DOWN
## mkdir -p -v $1/JESEE2_UNCORR_UP
## mkdir -p -v $1/JESEE2_CORR_DOWN
## mkdir -p -v $1/JESEE2_CORR_UP

