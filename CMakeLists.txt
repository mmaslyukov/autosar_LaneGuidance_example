cmake_minimum_required(VERSION 3.1)
project(autosar_LaneGuidance C CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Release CACHE STRING "CMake Build Type")

set(RELATIVE_PATH_TO_ANCHOR ".." CACHE STRING "User Customizable Variable")
set(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS "0" CACHE STRING "User Customizable Variable")
set(TGT_FCN_LIB "ISO_C" CACHE STRING "User Customizable Variable")
set(CLASSIC_INTERFACE "0" CACHE STRING "User Customizable Variable")
set(SOLVER_OBJ "" CACHE STRING "User Customizable Variable")
set(SOLVER "" CACHE STRING "User Customizable Variable")
set(START_DIR "/home/maslyukov/prj/matlab/autosarblockset" CACHE STRING "User Customizable Variable")
set(MATLAB_ROOT "/opt/Polyspace/R2020b" CACHE STRING "User Customizable Variable")
set(CMAKE_THREAD_PREFER_PTHREAD TRUE CACHE BOOL "Cmake prefer pthread")
set(THREADS_PREFER_PTHREAD_FLAG TRUE CACHE STRING "Threads prefer pthread")
find_package(Threads)

list(APPEND EXTRAINCLUDES 
    ${START_DIR}
    ${START_DIR}/autosar_LaneGuidance_autosar_adaptive
    ${MATLAB_ROOT}/toolbox/coder/autosar/rte
    ${MATLAB_ROOT}/toolbox/coder/autosar/adaptive
    ${MATLAB_ROOT}/extern/include
    ${MATLAB_ROOT}/simulink/include
    ${MATLAB_ROOT}/rtw/c/src
    ${MATLAB_ROOT}/rtw/c/src/ext_mode/common
    ${MATLAB_ROOT}/rtw/c/ert
    ${START_DIR}/slprj/autosar_adaptive/_sharedutils
)

if(DEFINED EXTRAINCLUDES)
    include_directories(${EXTRAINCLUDES})
endif()

list(APPEND EXTRADEFINITIONS 
    -DMODEL=autosar_LaneGuidance
    -DNUMST=1
    -DNCSTATES=0
    -DHAVESTDIO
    -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0
    -DCLASSIC_INTERFACE=0
    -DALLOCATIONFCN=0
    -DTID01EQ=0
    -DTERMFCN=1
    -DONESTEPFCN=1
    -DMAT_FILE=0
    -DMULTI_INSTANCE_CODE=1
    -DINTEGER_CODE=0
    -DMT=0
)

if(DEFINED EXTRADEFINITIONS)
    add_definitions(${EXTRADEFINITIONS})
endif()

if(DEFINED EXTRALIBRARYPATHS)
    link_directories(${EXTRALIBRARYPATHS})
endif()

set(SOURCES
    ${START_DIR}/autosar_LaneGuidance_autosar_adaptive/autosar_LaneGuidance.cpp
    ${START_DIR}/autosar_LaneGuidance_autosar_adaptive/main.cpp
)

add_executable(autosar_LaneGuidance ${SOURCES})

target_link_libraries( autosar_LaneGuidance ${EXTRALIBS} rt Threads::Threads)
