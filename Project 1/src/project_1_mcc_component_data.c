/*
 * MATLAB Compiler: 4.13 (R2010a)
 * Date: Thu Nov 07 14:05:41 2019
 * Arguments: "-B" "macro_default" "-o" "project_1" "-W" "WinMain:project_1"
 * "-T" "link:exe" "-d" "D:\project1\project_1\src" "-w"
 * "enable:specified_file_mismatch" "-w" "enable:repeated_file" "-w"
 * "enable:switch_ignored" "-w" "enable:missing_lib_sentinel" "-w"
 * "enable:demo_license" "-v" "D:\Project_1\instantAI_viewer_v1.m" "-a"
 * "D:\Project_1\BioFailed.m" "-a" "D:\Project_1\instantAI_viewer_v1.fig" "-a"
 * "D:\Project_1\TimerCallback_v1.m" 
 */

#include "mclmcrrt.h"

#ifdef __cplusplus
extern "C" {
#endif
const unsigned char __MCC_project_1_session_key[] = {
    '9', '3', '3', '7', '8', '9', 'C', '8', '0', '9', '6', '6', 'A', 'B', 'E',
    'B', '8', '9', 'C', 'B', '6', '5', '6', 'B', '3', '8', 'A', '4', 'C', 'E',
    'E', '0', '1', '0', '2', '0', '9', '2', '0', '5', '4', '9', '3', '8', '6',
    'D', '5', '0', '9', '7', 'A', '2', 'A', '7', 'B', '7', '8', 'A', 'B', '4',
    '5', 'F', 'F', '2', '4', '5', '5', '4', '6', '3', '6', '3', 'C', 'D', '9',
    'F', 'B', '8', 'B', '6', '0', '4', 'C', 'F', '1', 'E', 'A', 'B', '1', '7',
    '9', '5', '5', 'B', '0', '9', '5', '3', '3', 'D', '9', 'D', '7', 'C', '6',
    'D', 'D', '8', 'D', '7', 'C', '5', '5', '4', '1', '6', '3', '9', 'B', '8',
    'E', 'F', 'C', 'A', '9', '5', 'E', '4', '3', 'C', '0', '5', '3', '1', 'C',
    '9', '9', 'E', '2', 'E', '7', 'E', '2', '8', '2', 'A', '6', '0', '5', '9',
    '1', '5', '3', 'D', 'E', 'E', 'C', '9', 'B', '1', 'F', 'A', 'A', '6', '2',
    'F', 'B', '2', '0', 'C', 'C', '9', '3', '5', '4', '5', 'D', '8', '6', '1',
    '4', '5', '3', '8', '1', '6', '8', 'C', 'A', 'E', 'C', 'E', 'F', '3', 'C',
    '4', 'E', '5', '5', '2', '9', '7', 'A', '8', '6', 'F', 'F', 'C', '7', '5',
    'B', '3', '5', 'C', '6', '3', '6', '2', '0', 'F', 'E', '3', '6', '9', '6',
    '9', 'A', '5', '6', '4', '9', 'C', '9', '5', '6', '4', 'B', 'A', '4', '4',
    'B', '9', '4', '1', 'B', '3', 'F', '7', '4', 'B', '5', '6', 'A', '4', '4',
    '3', '\0'};

const unsigned char __MCC_project_1_public_key[] = {
    '3', '0', '8', '1', '9', 'D', '3', '0', '0', 'D', '0', '6', '0', '9', '2',
    'A', '8', '6', '4', '8', '8', '6', 'F', '7', '0', 'D', '0', '1', '0', '1',
    '0', '1', '0', '5', '0', '0', '0', '3', '8', '1', '8', 'B', '0', '0', '3',
    '0', '8', '1', '8', '7', '0', '2', '8', '1', '8', '1', '0', '0', 'C', '4',
    '9', 'C', 'A', 'C', '3', '4', 'E', 'D', '1', '3', 'A', '5', '2', '0', '6',
    '5', '8', 'F', '6', 'F', '8', 'E', '0', '1', '3', '8', 'C', '4', '3', '1',
    '5', 'B', '4', '3', '1', '5', '2', '7', '7', 'E', 'D', '3', 'F', '7', 'D',
    'A', 'E', '5', '3', '0', '9', '9', 'D', 'B', '0', '8', 'E', 'E', '5', '8',
    '9', 'F', '8', '0', '4', 'D', '4', 'B', '9', '8', '1', '3', '2', '6', 'A',
    '5', '2', 'C', 'C', 'E', '4', '3', '8', '2', 'E', '9', 'F', '2', 'B', '4',
    'D', '0', '8', '5', 'E', 'B', '9', '5', '0', 'C', '7', 'A', 'B', '1', '2',
    'E', 'D', 'E', '2', 'D', '4', '1', '2', '9', '7', '8', '2', '0', 'E', '6',
    '3', '7', '7', 'A', '5', 'F', 'E', 'B', '5', '6', '8', '9', 'D', '4', 'E',
    '6', '0', '3', '2', 'F', '6', '0', 'C', '4', '3', '0', '7', '4', 'A', '0',
    '4', 'C', '2', '6', 'A', 'B', '7', '2', 'F', '5', '4', 'B', '5', '1', 'B',
    'B', '4', '6', '0', '5', '7', '8', '7', '8', '5', 'B', '1', '9', '9', '0',
    '1', '4', '3', '1', '4', 'A', '6', '5', 'F', '0', '9', '0', 'B', '6', '1',
    'F', 'C', '2', '0', '1', '6', '9', '4', '5', '3', 'B', '5', '8', 'F', 'C',
    '8', 'B', 'A', '4', '3', 'E', '6', '7', '7', '6', 'E', 'B', '7', 'E', 'C',
    'D', '3', '1', '7', '8', 'B', '5', '6', 'A', 'B', '0', 'F', 'A', '0', '6',
    'D', 'D', '6', '4', '9', '6', '7', 'C', 'B', '1', '4', '9', 'E', '5', '0',
    '2', '0', '1', '1', '1', '\0'};

static const char * MCC_project_1_matlabpath_data[] = 
  { "project_1/", "$TOOLBOXDEPLOYDIR/", "$TOOLBOXMATLABDIR/general/",
    "$TOOLBOXMATLABDIR/ops/", "$TOOLBOXMATLABDIR/lang/",
    "$TOOLBOXMATLABDIR/elmat/", "$TOOLBOXMATLABDIR/randfun/",
    "$TOOLBOXMATLABDIR/elfun/", "$TOOLBOXMATLABDIR/specfun/",
    "$TOOLBOXMATLABDIR/matfun/", "$TOOLBOXMATLABDIR/datafun/",
    "$TOOLBOXMATLABDIR/polyfun/", "$TOOLBOXMATLABDIR/funfun/",
    "$TOOLBOXMATLABDIR/sparfun/", "$TOOLBOXMATLABDIR/scribe/",
    "$TOOLBOXMATLABDIR/graph2d/", "$TOOLBOXMATLABDIR/graph3d/",
    "$TOOLBOXMATLABDIR/specgraph/", "$TOOLBOXMATLABDIR/graphics/",
    "$TOOLBOXMATLABDIR/uitools/", "$TOOLBOXMATLABDIR/strfun/",
    "$TOOLBOXMATLABDIR/imagesci/", "$TOOLBOXMATLABDIR/iofun/",
    "$TOOLBOXMATLABDIR/audiovideo/", "$TOOLBOXMATLABDIR/timefun/",
    "$TOOLBOXMATLABDIR/datatypes/", "$TOOLBOXMATLABDIR/verctrl/",
    "$TOOLBOXMATLABDIR/codetools/", "$TOOLBOXMATLABDIR/helptools/",
    "$TOOLBOXMATLABDIR/winfun/", "$TOOLBOXMATLABDIR/winfun/net/",
    "$TOOLBOXMATLABDIR/demos/", "$TOOLBOXMATLABDIR/timeseries/",
    "$TOOLBOXMATLABDIR/hds/", "$TOOLBOXMATLABDIR/guide/",
    "$TOOLBOXMATLABDIR/plottools/", "toolbox/local/",
    "$TOOLBOXMATLABDIR/datamanager/", "toolbox/compiler/",
    "toolbox/shared/spcuilib/", "toolbox/signal/signal/" };

static const char * MCC_project_1_classpath_data[] = 
  { "" };

static const char * MCC_project_1_libpath_data[] = 
  { "" };

static const char * MCC_project_1_app_opts_data[] = 
  { "" };

static const char * MCC_project_1_run_opts_data[] = 
  { "" };

static const char * MCC_project_1_warning_state_data[] = 
  { "off:MATLAB:dispatcher:nameConflict" };


mclComponentData __MCC_project_1_component_data = { 

  /* Public key data */
  __MCC_project_1_public_key,

  /* Component name */
  "project_1",

  /* Component Root */
  "",

  /* Application key data */
  __MCC_project_1_session_key,

  /* Component's MATLAB Path */
  MCC_project_1_matlabpath_data,

  /* Number of directories in the MATLAB Path */
  41,

  /* Component's Java class path */
  MCC_project_1_classpath_data,
  /* Number of directories in the Java class path */
  0,

  /* Component's load library path (for extra shared libraries) */
  MCC_project_1_libpath_data,
  /* Number of directories in the load library path */
  0,

  /* MCR instance-specific runtime options */
  MCC_project_1_app_opts_data,
  /* Number of MCR instance-specific runtime options */
  0,

  /* MCR global runtime options */
  MCC_project_1_run_opts_data,
  /* Number of MCR global runtime options */
  0,
  
  /* Component preferences directory */
  "project_1_22963712E34D2D8C22453ADF7B97D1C0",

  /* MCR warning status data */
  MCC_project_1_warning_state_data,
  /* Number of MCR warning status modifiers */
  1,

  /* Path to component - evaluated at runtime */
  NULL

};

#ifdef __cplusplus
}
#endif


