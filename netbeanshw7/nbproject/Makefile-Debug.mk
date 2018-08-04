#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Dialogs.o \
	${OBJECTDIR}/lxo5628_Allele.o \
	${OBJECTDIR}/lxo5628_Controller.o \
	${OBJECTDIR}/lxo5628_Genotype.o \
	${OBJECTDIR}/lxo5628_Pea_Plant.o \
	${OBJECTDIR}/lxo5628_Pea_Plant_Trait_Maps.o \
	${OBJECTDIR}/lxo5628_Trait.o \
	${OBJECTDIR}/lxo5628_View.o \
	${OBJECTDIR}/lxo5628_main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=`pkg-config --libs gtkmm-3.0`  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeanshw7

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeanshw7: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeanshw7 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Dialogs.o: Dialogs.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Dialogs.o Dialogs.cpp

${OBJECTDIR}/lxo5628_Allele.o: lxo5628_Allele.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lxo5628_Allele.o lxo5628_Allele.cpp

${OBJECTDIR}/lxo5628_Controller.o: lxo5628_Controller.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lxo5628_Controller.o lxo5628_Controller.cpp

${OBJECTDIR}/lxo5628_Genotype.o: lxo5628_Genotype.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lxo5628_Genotype.o lxo5628_Genotype.cpp

${OBJECTDIR}/lxo5628_Pea_Plant.o: lxo5628_Pea_Plant.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lxo5628_Pea_Plant.o lxo5628_Pea_Plant.cpp

${OBJECTDIR}/lxo5628_Pea_Plant_Trait_Maps.o: lxo5628_Pea_Plant_Trait_Maps.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lxo5628_Pea_Plant_Trait_Maps.o lxo5628_Pea_Plant_Trait_Maps.cpp

${OBJECTDIR}/lxo5628_Trait.o: lxo5628_Trait.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lxo5628_Trait.o lxo5628_Trait.cpp

${OBJECTDIR}/lxo5628_View.o: lxo5628_View.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lxo5628_View.o lxo5628_View.cpp

${OBJECTDIR}/lxo5628_main.o: lxo5628_main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags gtkmm-3.0` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lxo5628_main.o lxo5628_main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
