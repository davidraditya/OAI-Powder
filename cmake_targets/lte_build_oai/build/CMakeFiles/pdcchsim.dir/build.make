# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /opt/oai/openairinterface5g/cmake_targets/lte_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/pdcchsim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pdcchsim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pdcchsim.dir/flags.make

CMakeFiles/messages_xml.h: CMakeFiles/messages.xml
CMakeFiles/messages_xml.h: CMakeFiles/Rel14/asn1_constants.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating CMakeFiles/messages_xml.h"
	sed -e 's/ *//' -e 's/"/\\"/g' -e 's/^/"/' -e 's/$$/\\n"/' /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/messages.xml > /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/messages_xml.h

CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_decoder.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_encoder.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_xer_print.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_compare.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_ies_defs.h
CMakeFiles/messages.xml: CMakeFiles/Rel14/asn1_constants.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating CMakeFiles/messages.xml"
	gccxml -DCMAKE_BUILD_TYPE="RelWithDebInfo" -DCMAKER -DFIRMWARE_VERSION="No\ svn\ information" -DPACKAGE_VERSION="Branch:\ develop\ Abrev.\ Hash:\ 31dfc9d\ Date:\ Thu\ Mar\ 29\ 11:33:32\ 2018\ -0600" -DPACKAGE_BUGREPORT="openair4g-devel@lists.eurecom.fr" -DXFORMS -DENABLE_ITTI -DRel14=1 -DS1AP_VERSION=R10 -DX2AP_VERSION=R11 -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=4 -DOAI_USRP=1 -DNone=1 -DENABLE_SECURITY -DENABLE_USE_MME -DNO_RRM -DOAI_NW_DRIVER_USE_NETLINK -DPACKAGE_NAME="lte-softmodem" -DENB_MODE -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_VCD -DLOG_NO_THREAD -DOPENAIR_LTE -DDRIVER2013 -DEXMIMO_IOT -DMAX_NUM_CCs=1 -DPHYSIM -DPHY_CONTEXT -DENABLE_NAS_UE_LOGGING -DNAS_BUILT_IN_UE -DNAS_UE -DMAC_CONTEXT -DJUMBO_FRAME -DOPENAIR2 -DTRACE_RLC_MUTEX -DLINK_ENB_PDCP_TO_GTPV1U -DFLPT_VERSION=V2 -DNUMBER_OF_UE_MAX_NB_IoT=16 -DNETTLE_VERSION_MAJOR=3 -DNETTLE_VERSION_MINOR=2 -DASN1_MINIMUM_VERSION=924 -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/Rel14 -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/R10.5 -I/opt/oai/openairinterface5g/openair3/S1AP -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/R11.2 -I/opt/oai/openairinterface5g/openair2/X2AP -I/opt/oai/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/opt/oai/openairinterface5g/targets/ARCH/USRP/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/ETHERNET/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/mobipass -I/opt/oai/openairinterface5g/targets/ARCH/COMMON -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles -I/opt/oai/openairinterface5g/openair2/COMMON -I/opt/oai/openairinterface5g/openair2/UTIL -I/opt/oai/openairinterface5g/openair2/UTIL/LOG -I/opt/oai/openairinterface5g/openair3/COMMON -I/opt/oai/openairinterface5g/openair3/UTILS -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/nfapi/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/common/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/nfapi/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/sim_common/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf_sim/inc -I/opt/oai/openairinterface5g/openair1 -I/opt/oai/openairinterface5g/openair2 -I/opt/oai/openairinterface5g/openair2/LAYER2/RLC -I/opt/oai/openairinterface5g/openair2/LAYER2/RLC/AM_v9.3.0 -I/opt/oai/openairinterface5g/openair2/LAYER2/RLC/UM_v9.3.0 -I/opt/oai/openairinterface5g/openair2/LAYER2/RLC/TM_v9.3.0 -I/opt/oai/openairinterface5g/openair2/LAYER2/PDCP_v10.1.0 -I/opt/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES -I/opt/oai/openairinterface5g/openair2/RRC/LITE -I/opt/oai/openairinterface5g/openair3/RAL-LTE/INTERFACE-802.21/INCLUDE -I/opt/oai/openairinterface5g/openair3/RAL-LTE/LTE_RAL_ENB/INCLUDE -I/opt/oai/openairinterface5g/openair3/RAL-LTE/LTE_RAL_UE/INCLUDE -I/opt/oai/openairinterface5g/common/utils -I/opt/oai/openairinterface5g/common/utils/itti -I/opt/oai/openairinterface5g/openair3/NAS/COMMON -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/API/NETWORK -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/EMM/MSG -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/ESM/MSG -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/IES -I/opt/oai/openairinterface5g/openair3/NAS/COMMON/UTIL -I/opt/oai/openairinterface5g/openair3/SECU -I/opt/oai/openairinterface5g/openair3/SCTP -I/opt/oai/openairinterface5g/openair3/S1AP -I/opt/oai/openairinterface5g/openair2/X2AP -I/opt/oai/openairinterface5g/openair3/UDP -I/opt/oai/openairinterface5g/openair3/GTPV1-U -I/opt/oai/openairinterface5g/targets/COMMON -I/opt/oai/openairinterface5g/targets/ARCH/COMMON -I/opt/oai/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/opt/oai/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/opt/oai/openairinterface5g/openair2/ENB_APP -I/opt/oai/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/MAC -I/opt/oai/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/RRC -I/opt/oai/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/PDCP -I/opt/oai/openairinterface5g/openair2/UTIL/OSA -I/opt/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/opt/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/inc -I/opt/oai/openairinterface5g/openair2/UTIL/MEM -I/opt/oai/openairinterface5g/openair2/UTIL/LISTS -I/opt/oai/openairinterface5g/openair2/UTIL/FIFO -I/opt/oai/openairinterface5g/openair2/UTIL/OCG -I/opt/oai/openairinterface5g/openair2/UTIL/MATH -I/opt/oai/openairinterface5g/openair2/UTIL/TIMER -I/opt/oai/openairinterface5g/openair2/UTIL/OMG -I/opt/oai/openairinterface5g/openair2/UTIL/OTG -I/opt/oai/openairinterface5g/openair2/UTIL/CLI -I/opt/oai/openairinterface5g/openair2/UTIL/OPT -I/opt/oai/openairinterface5g/openair2/UTIL/OMV -I/opt/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES -I/opt/oai/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/shared -I/opt/oai/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/include -I/opt/oai/openairinterface5g -I/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/V2 -I/opt/oai/openairinterface5g/openair2/UTIL/ASYNC_IF -I/opt/oai/openairinterface5g/common/utils/hashtable -I/opt/oai/openairinterface5g/common/utils/msc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/common/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/nfapi/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/nfapi/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/vnf/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/vnf/inc -I/opt/oai/openairinterface5g/nfapi/oai_integration -I/opt/oai/openairinterface5g/nfapi/oai_integration -I/opt/oai/openairinterface5g/openair3/NAS/UE -I/opt/oai/openairinterface5g/openair3/NAS/UE/API/USER -I/opt/oai/openairinterface5g/openair3/NAS/UE/API/USIM -I/opt/oai/openairinterface5g/openair3/NAS/UE/EMM -I/opt/oai/openairinterface5g/openair3/NAS/UE/EMM/SAP -I/opt/oai/openairinterface5g/openair3/NAS/UE/ESM -I/opt/oai/openairinterface5g/openair3/NAS/UE/ESM/SAP -I/opt/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/opt/oai/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/src -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/nfapi/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/common/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf/public_inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/nfapi/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/sim_common/inc -I/opt/oai/openairinterface5g/nfapi/open-nFAPI/pnf_sim/inc -I/usr/include/libxml2 -I/usr/include/libxml2 -I/usr/include/pgm-5.2 -I/usr/lib/x86_64-linux-gnu/pgm-5.2/include -I/usr/include/atlas -I/usr/include/X11 -I/opt/oai/openairinterface5g/common/utils/T -std=gnu89 -fxml=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/messages.xml /opt/oai/openairinterface5g/common/utils/itti/intertask_interface_types.h

CMakeFiles/Rel14/asn1_constants.h: /opt/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/RRC-e30.asn
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating CMakeFiles/Rel14/asn1_constants.h"
	/opt/oai/openairinterface5g/cmake_targets/tools/generate_asn1 /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/Rel14 /opt/oai/openairinterface5g/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/RRC-e30.asn
	/opt/oai/openairinterface5g/cmake_targets/tools/fix_asn1 /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/Rel14 RRC Rel14

CMakeFiles/R10.5/s1ap_decoder.c: /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn
CMakeFiles/R10.5/s1ap_decoder.c: /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-Constants.asn
CMakeFiles/R10.5/s1ap_decoder.c: /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn
CMakeFiles/R10.5/s1ap_decoder.c: /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating CMakeFiles/R10.5/s1ap_decoder.c, CMakeFiles/R10.5/s1ap_encoder.c, CMakeFiles/R10.5/s1ap_xer_print.c, CMakeFiles/R10.5/s1ap_compare.c, CMakeFiles/R10.5/s1ap_ies_defs.h"
	/opt/oai/openairinterface5g/cmake_targets/tools/generate_asn1 /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/R10.5 /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-Constants.asn /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn
	python /opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/asn1tostruct.py -f/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU-Contents.asn -o/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/R10.5
	/opt/oai/openairinterface5g/cmake_targets/tools/fix_asn1 /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/R10.5 S1AP R10

CMakeFiles/R10.5/s1ap_encoder.c: CMakeFiles/R10.5/s1ap_decoder.c
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/R10.5/s1ap_encoder.c

CMakeFiles/R10.5/s1ap_xer_print.c: CMakeFiles/R10.5/s1ap_decoder.c
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/R10.5/s1ap_xer_print.c

CMakeFiles/R10.5/s1ap_compare.c: CMakeFiles/R10.5/s1ap_decoder.c
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/R10.5/s1ap_compare.c

CMakeFiles/R10.5/s1ap_ies_defs.h: CMakeFiles/R10.5/s1ap_decoder.c
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/R10.5/s1ap_ies_defs.h

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o: CMakeFiles/pdcchsim.dir/flags.make
CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o: /opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o   -c /opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c > CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.i

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.s

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o.requires:

.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o.requires

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o.provides: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o.requires
	$(MAKE) -f CMakeFiles/pdcchsim.dir/build.make CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o.provides.build
.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o.provides

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o.provides.build: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o


CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o: CMakeFiles/pdcchsim.dir/flags.make
CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o: /opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o   -c /opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c > CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.i

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.s

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires:

.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires
	$(MAKE) -f CMakeFiles/pdcchsim.dir/build.make CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides.build
.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides.build: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o


CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o: CMakeFiles/pdcchsim.dir/flags.make
CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o: /opt/oai/openairinterface5g/common/config/config_load_configmodule.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o   -c /opt/oai/openairinterface5g/common/config/config_load_configmodule.c

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/common/config/config_load_configmodule.c > CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.i

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/common/config/config_load_configmodule.c -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.s

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o.requires:

.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o.requires

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o.provides: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o.requires
	$(MAKE) -f CMakeFiles/pdcchsim.dir/build.make CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o.provides.build
.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o.provides

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o.provides.build: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o


CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o: CMakeFiles/pdcchsim.dir/flags.make
CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o: /opt/oai/openairinterface5g/common/config/config_userapi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o   -c /opt/oai/openairinterface5g/common/config/config_userapi.c

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/common/config/config_userapi.c > CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.i

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/common/config/config_userapi.c -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.s

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o.requires:

.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o.requires

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o.provides: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o.requires
	$(MAKE) -f CMakeFiles/pdcchsim.dir/build.make CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o.provides.build
.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o.provides

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o.provides.build: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o


CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o: CMakeFiles/pdcchsim.dir/flags.make
CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o: /opt/oai/openairinterface5g/common/config/config_cmdline.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o   -c /opt/oai/openairinterface5g/common/config/config_cmdline.c

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/common/config/config_cmdline.c > CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.i

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/common/config/config_cmdline.c -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.s

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o.requires:

.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o.requires

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o.provides: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o.requires
	$(MAKE) -f CMakeFiles/pdcchsim.dir/build.make CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o.provides.build
.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o.provides

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o.provides.build: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o


CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o: CMakeFiles/pdcchsim.dir/flags.make
CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o: /opt/oai/openairinterface5g/common/utils/load_module_shlib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o   -c /opt/oai/openairinterface5g/common/utils/load_module_shlib.c

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/common/utils/load_module_shlib.c > CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.i

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/common/utils/load_module_shlib.c -o CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.s

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o.requires:

.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o.requires

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o.provides: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o.requires
	$(MAKE) -f CMakeFiles/pdcchsim.dir/build.make CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o.provides.build
.PHONY : CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o.provides

CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o.provides.build: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o


# Object files for target pdcchsim
pdcchsim_OBJECTS = \
"CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o" \
"CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o" \
"CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o" \
"CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o" \
"CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o" \
"CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o"

# External object files for target pdcchsim
pdcchsim_EXTERNAL_OBJECTS =

pdcchsim: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o
pdcchsim: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o
pdcchsim: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o
pdcchsim: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o
pdcchsim: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o
pdcchsim: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o
pdcchsim: CMakeFiles/pdcchsim.dir/build.make
pdcchsim: libSIMU.a
pdcchsim: libUTIL.a
pdcchsim: libSCHED_LIB.a
pdcchsim: libPHY.a
pdcchsim: libLFDS.a
pdcchsim: libITTI.a
pdcchsim: libLFDS7.a
pdcchsim: CMakeFiles/pdcchsim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking C executable pdcchsim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pdcchsim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pdcchsim.dir/build: pdcchsim

.PHONY : CMakeFiles/pdcchsim.dir/build

CMakeFiles/pdcchsim.dir/requires: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/SIMULATION/LTE_PHY/pdcchsim.c.o.requires
CMakeFiles/pdcchsim.dir/requires: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires
CMakeFiles/pdcchsim.dir/requires: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_load_configmodule.c.o.requires
CMakeFiles/pdcchsim.dir/requires: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_userapi.c.o.requires
CMakeFiles/pdcchsim.dir/requires: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/config/config_cmdline.c.o.requires
CMakeFiles/pdcchsim.dir/requires: CMakeFiles/pdcchsim.dir/opt/oai/openairinterface5g/common/utils/load_module_shlib.c.o.requires

.PHONY : CMakeFiles/pdcchsim.dir/requires

CMakeFiles/pdcchsim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pdcchsim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pdcchsim.dir/clean

CMakeFiles/pdcchsim.dir/depend: CMakeFiles/messages_xml.h
CMakeFiles/pdcchsim.dir/depend: CMakeFiles/messages.xml
CMakeFiles/pdcchsim.dir/depend: CMakeFiles/Rel14/asn1_constants.h
CMakeFiles/pdcchsim.dir/depend: CMakeFiles/R10.5/s1ap_decoder.c
CMakeFiles/pdcchsim.dir/depend: CMakeFiles/R10.5/s1ap_encoder.c
CMakeFiles/pdcchsim.dir/depend: CMakeFiles/R10.5/s1ap_xer_print.c
CMakeFiles/pdcchsim.dir/depend: CMakeFiles/R10.5/s1ap_compare.c
CMakeFiles/pdcchsim.dir/depend: CMakeFiles/R10.5/s1ap_ies_defs.h
	cd /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/oai/openairinterface5g/cmake_targets/lte_build_oai /opt/oai/openairinterface5g/cmake_targets/lte_build_oai /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/pdcchsim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pdcchsim.dir/depend

