# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# compile C with /usr/bin/cc
C_FLAGS =    -mavx2 -msse4.1 -mssse3  -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP    -mavx2 -msse4.1 -mssse3  -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP -g -DMALLOC_CHECK_=3 -O2 -fPIC   -DUPDATE_RELEASE_9 -DUPDATE_RELEASE_10

C_DEFINES = -DASN1_MINIMUM_VERSION=924 -DCMAKER -DCMAKE_BUILD_TYPE=\"RelWithDebInfo\" -DDRIVER2013 -DENABLE_ITTI -DENABLE_NAS_UE_LOGGING -DENABLE_SECURITY -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_USE_MME -DENABLE_VCD -DENB_MODE -DEXMIMO_IOT -DFIRMWARE_VERSION="\"No svn information\"" -DFLPT_VERSION=V2 -DJUMBO_FRAME -DLINK_ENB_PDCP_TO_GTPV1U -DLOG_NO_THREAD -DMAC_CONTEXT -DMAX_NUM_CCs=1 -DNAS_BUILT_IN_UE -DNAS_UE -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=4 -DNETTLE_VERSION_MAJOR=3 -DNETTLE_VERSION_MINOR=2 -DNO_RRM -DNUMBER_OF_UE_MAX_NB_IoT=16 -DNone=1 -DOAI_NW_DRIVER_USE_NETLINK -DOAI_USRP=1 -DOPENAIR2 -DOPENAIR_LTE -DPACKAGE_BUGREPORT=\"openair4g-devel@lists.eurecom.fr\" -DPACKAGE_NAME=\"lte-softmodem\" -DPACKAGE_VERSION="\"Branch: develop Abrev. Hash: 31dfc9d Date: Thu Mar 29 11:33:32 2018 -0600\"" -DPHYSIM -DPHY_CONTEXT -DRel14=1 -DS1AP_VERSION=R10 -DTRACE_RLC_MUTEX -DX2AP_VERSION=R11 -DXFORMS -Dtelnetsrv_EXPORTS

C_INCLUDES = -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/Rel14 -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/R10.5 -I/opt/oai/openairinterface5g/openair3/S1AP -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/R11.2 -I/opt/oai/openairinterface5g/openair2/X2AP -I/opt/oai/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/opt/oai/openairinterface5g/targets/ARCH/USRP/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/ETHERNET/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/mobipass -I/opt/oai/openairinterface5g/targets/ARCH/COMMON -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles -I/opt/oai/openairinterface5g/openair2/COMMON -I/opt/oai/openairinterface5g/openair2/UTIL -I/opt/oai/openairinterface5g/openair2/UTIL/LOG -I/opt/oai/openairinterface5g/openair3/COMMON -I/opt/oai/openairinterface5g/openair3/UTILS -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/nfapi/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/common/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/nfapi/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/sim_common/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf_sim/inc -I/opt/oai/openairinterface5g/openair1 -I/opt/oai/openairinterface5g/openair2 -I/opt/oai/openairinterface5g/openair2/LAYER2/RLC -I/opt/oai/openairinterface5g/openair2/LAYER2/RLC/AM_v9.3.0 -I/opt/oai/openairinterface5g/openair2/LAYER2/RLC/UM_v9.3.0 -I/opt/oai/openairinterface5g/openair2/LAYER2/RLC/TM_v9.3.0 -I/opt/oai/openairinterface5g/openair2/LAYER2/PDCP_v10.1.0 -I/opt/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES -I/opt/oai/openairinterface5g/openair2/RRC/LITE -I/opt/oai/openairinterface5g/openair3/RAL-LTE/INTERFACE-802.21/INCLUDE -I/opt/oai/openairinterface5g/openair3/RAL-LTE/LTE_RAL_ENB/INCLUDE -I/opt/oai/openairinterface5g/openair3/RAL-LTE/LTE_RAL_UE/INCLUDE -I/opt/oai/openairinterface5g/common/utils -I/opt/oai/openairinterface5g/common/utils/itti -I/opt/oai/openairinterface5g/openair3/NAS/COMMON -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/API/NETWORK -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/EMM/MSG -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/ESM/MSG -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/IES -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/UTIL -I/opt/oai/openairinterface5g/openair3/SECU -I/opt/oai/openairinterface5g/openair3/SCTP -I/opt/oai/openairinterface5g/openair3/UDP -I/opt/oai/openairinterface5g/openair3/GTPV1-U -I/opt/oai/openairinterface5g/targets/COMMON -I/opt/oai/openairinterface5g/openair2/ENB_APP -I/opt/oai/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/MAC -I/opt/oai/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/RRC -I/opt/oai/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/PDCP -I/opt/oai/openairinterface5g/openair2/UTIL/OSA -I/opt/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/opt/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/inc -I/opt/oai/openairinterface5g/openair2/UTIL/MEM -I/opt/oai/openairinterface5g/openair2/UTIL/LISTS -I/opt/oai/openairinterface5g/openair2/UTIL/FIFO -I/opt/oai/openairinterface5g/openair2/UTIL/OCG -I/opt/oai/openairinterface5g/openair2/UTIL/MATH -I/opt/oai/openairinterface5g/openair2/UTIL/TIMER -I/opt/oai/openairinterface5g/openair2/UTIL/OMG -I/opt/oai/openairinterface5g/openair2/UTIL/OTG -I/opt/oai/openairinterface5g/openair2/UTIL/CLI -I/opt/oai/openairinterface5g/openair2/UTIL/OPT -I/opt/oai/openairinterface5g/openair2/UTIL/OMV -I/opt/oai/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/shared -I/opt/oai/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/include -I/opt/oai/openairinterface5g -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/V2 -I/opt/oai/openairinterface5g/openair2/UTIL/ASYNC_IF -I/opt/oai/openairinterface5g/common/utils/hashtable -I/opt/oai/openairinterface5g/common/utils/msc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/vnf/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/vnf/inc -I/opt/oai/openairinterface5g/nfapi/oai_integration -I/opt/oai/openairinterface5g/openair3/NAS/UE -I/opt/oai/openairinterface5g/openair3/NAS/UE/API/USER -I/opt/oai/openairinterface5g/openair3/NAS/UE/API/USIM -I/opt/oai/openairinterface5g/openair3/NAS/UE/EMM -I/opt/oai/openairinterface5g/openair3/NAS/UE/EMM/SAP -I/opt/oai/openairinterface5g/openair3/NAS/UE/ESM -I/opt/oai/openairinterface5g/openair3/NAS/UE/ESM/SAP -I/opt/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/opt/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/src -I/usr/include/libxml2 -I/usr/include/pgm-5.2 -I/usr/lib/x86_64-linux-gnu/pgm-5.2/include -I/usr/include/atlas -I/usr/include/X11 -I/opt/oai/openairinterface5g/common/utils/T 

