/*
 * ./LINUX-GNU/EN/RS/FMSG_REJ.C , 2024/05/29
 * ---------------------------------------------------------------------------
 * Do not modify this file. It is automatically generated by MSGBIND from
 * ./RESOURCE/RESOURCE.TXT.
 * To rebuild the language resources, run MSGBIND.
 *
 */

#include "bindings.h"
#include "environ.h"
#include "arjtypes.h"

char M_REG_TYPE[]="A3";
char M_INVALID_DATE_STRING[]="Invalid date string: %s";
char M_INVALID_DATE[]="Invalid date format specified";
char M_INVALID_PARAM_STR[]="Invalid parameter string: %s";
char M_INVALID_SWITCH[]="Invalid switch: %s";
char M_CANTOPEN[]="Can't open %s";
char M_CANTRENAME[]="Can't rename %s to %s";
char M_DELETING[]="Deleting %s\n";
char M_CANT_MKDIR[]="Can't make directory %s\n";
char M_HASH_MEM_LACK[]="No available memory to store %s\n";
char M_NO[]="NO";
char M_OUT_OF_MEMORY[]="Out of memory";
char M_MAXPATH_EXCEEDED[]="Exceeded maximum path size of %d at %s\n";
char M_YES[]="YES";
char M_NAMES_LIMIT[]="Exceeded name limit of %ld at %s\n";
char M_ARGTABLE_OVERFLOW[]="Too many arguments";
char M_NO_INTEGRITY_PATTERN[]="Program integrity is questionable!\n";
char M_INTEGRITY_VIOLATED[]="Program integrity is questionable!!\n";
char M_INTEGRITY_OK[]="Program passes integrity check.\n";
char M_REARJ_BANNER[]="REARJ 2.43.02, Copyright (c) 1999-2004, ARJ Software Russia. %s\n";
char M_REARJ_COMMANDS[]="All rights reserved. Archive to ARJ conversion utility\nUsage:  REARJ [switch options] <!listfile(s), filespec(s) or wildname(s)>\n  Switch options: (can be placed before or after filespecs)\n  /+         ignore REARJ_SW variable\n  /a[suffix] convert archives within archives (\"*\" for all formats)\n  /bcommand  execute DOS command before extracting files\n  /ccommand  execute DOS command on extracted files before counting them\n  /d         delete original archives\n  /e         no error switch\n  /f         convert diskette archives\n  /g         skip creation of output archive\n  /i[name]   check integrity of REARJ.EXE\n  /j         skip if output archive size is larger than the original\n  /k         skip archive timestamping\n  /l[name]   write append log file (default name is REARJ.LOG)\n  /m[date]   select archives before date in YYMMDDHHMMSS format\n  /n[date]   select archives on or after date in YYMMDDHHMMSS format\n  /o         allow overwrite of existing target archive\n  /p         ignore long filenames under Windows 95\n  /q         query for each archive to convert\n  /r         recurse through subdirectories\n  /s         skip verify of file count and total size\n  /tsuffix   create suffix type archives\n  /u[bak]    allow update of archive with backup (default is BAK)\n  /v         execute configured command on extracted files\n  /wdir      assign work directory\n  /x[!]file  exclude by filename, wildname, or listfile\n  /y[text]   delete output archive and write text to log (testing mode)\n  /z         simulate operation\nExample:  REARJ *.* /r /d    Convert all archives to ARJ format, searching\n                             all subdirectories, deleting original archives\nSet REARJ environment variable: SET REARJ_SW=/l /we:\\temp\n";
char M_REARJ_RCODES[]="REARJ log error codes:\n 1 = File not found\n 2 = File is not a configured archive type\n 3 = Target archive already exists\n 4 = Not enough disk space\n 5 = User skipped or user did not select update option\n 6 = UNPACK command error\n 7 = PACK command error\n 8 = Target cannot support directories\n 9 = Wrong file count\n10 = Wrong total size\n11 = Internal archive REARJ error\n12 = Rename archive error\n13 = Invoked /v command error (found a virus?)\n14 = Output archive is larger\n";
char M_CANTREAD[]="End of file on input";
char M_REPLIES_HELP[]="Yes or No? ";
char M_CANT_CLEAR_ATTRS[]="Can't clear attributes: %s";
char M_MAXDIR_EXCEEDED[]="Directory path is too large: %s";
char M_CANT_RMDIR[]="Can't rmdir %s";
char M_CANT_UNLINK[]="Can't remove %s";
char M_CANT_WRITE_LOG[]="Can't write log file. Disk full?";
char M_GETCWD_FAILED[]="Can't get working directory\n";
char M_PATH_NOT_FOUND[]="Path not found: %s\n";
char M_CANT_CHDIR[]="Can't chdir to %s";
char M_SKIP_CANT_FIND[]="Skipping %s.  Can't find file\n\n";
char M_SKIP_UNKNOWN_TYPE[]="Skipping %s.  No matching archive type.\n\n";
char M_SKIP_TGT_EXISTS[]="Skipping %s.  Target archive already exists.\n\n";
char M_SKIP_REPACK[]="Skipping %s.  Update option /u not selected.\n\n";
char M_CONVERTING_ARCHIVE[]="Converting %s from type %s to %s\n";
char M_QUERY_CONVERT[]="OK to convert? ";
char M_SKIPPING[]="Skipping %s.\n\n";
char M_EXECUTING_PRE[]="Executing /b: %s\n";
char M_EXECUTING[]="Executing: %s\n";
char M_SKIP_EXE_MISSING[]="Skipping %s.  Unpack command may not be in PATH.\n\n";
char M_SKIP_UNPACK_ERR[]="Skipping %s.  Error unpacking (%d).\n\n";
char M_SKIP_UNSUPP_DIR[]="Skipping %s.  Target can't support directories.\n\n";
char M_SKIP_NO_FILES[]="Skipping %s.  No files extracted.\n\n";
char M_EXECUTING_CNT[]="Executing /c: %s\n";
char M_EXECUTING_EXTR[]="Executing /v: %s\n";
char M_SKIP_V_EXE_MISSING[]="Skipping %s.  Command may not be in PATH.\n\n";
char M_SKIP_V_ERR[]="Skipping %s.  Error executing command (%d).\n\n";
char M_SKIP_REARJ_MISSING[]="Skipping %s.  REARJ command may not be in PATH.\n\n";
char M_SKIP_REARJ_FAILED[]="Skipping %s.  REARJ of internal archive failed (%d).\n\n";
char M_SKIP_CANT_RENAME[]="Skipping %s.  Can't rename to %s.\n\n";
char M_BACKED_UP[]="Backed up %s to %s.\n";
char M_SKIP_P_EXE_MISSING[]="Skipping %s.  Pack command may not be in PATH.\n\n";
char M_SKIP_PACK_ERR[]="Skipping %s.  Error packing (%d).\n\n";
char M_SKIP_NOT_PACKED[]="Skipping %s.  Target archive not created.\n\n";
char M_SKIP_LARGER[]="Skipping %s.  Output archive is larger.\n\n";
char M_VERIFYING_SIZE[]="Verifying a file count of %d and total size of %ld.\n";
char M_FOUND_SIZE[]="Found a file count of %d and total size of %ld.\n";
char M_SKIP_COUNT_MISMATCH[]="Skipping %s.  File count did not verify.\n\n";
char M_SKIP_SIZE_MISMATCH[]="Skipping %s.  File size total did not verify.\n\n";
char M_SIZE_VERIFIED[]="New archive file count and total size verified.\n";
char M_SKIP_DISK_FULL[]="Skipping %s.  Not enough disk space for new archive.\n\n";
char M_DELETING_2[]="Deleting: %s\n";
char M_RENAMING[]="Renaming %s to %s\n";
char M_CANT_COPY[]="Can't copy %s to %s";
char M_OLD_SIZE[]="Original size: %10ld\n";
char M_NEW_SIZE[]="New      size: %10ld\n";
char M_SAVINGS_SIZE[]="Savings  size: %10ld\n";
char M_LISTFILE_MISSING[]="Missing list filename with /x";
char M_CANT_FIND_CONFIG[]="Can't find configuration file %s in PATH directories.";
char M_USING_CONFIG[]="Using configuration file: %s\n\n";
char M_NO_ANTIVIRUS_PATH[]="*** VIRUS configuration error: Virus scanner must be specified by pathname!\n";
char M_IGNORED_FOR_COMP[]="*** For compatibility, this error will be ignored.\n\n";
char M_INVALID_SUFFIX[]="Invalid suffix: %s";
char M_MISSING_PACK_CMD[]="Missing pack command for suffix: %s";
char M_NO_PACK_STRFORM[]="Pack command missing %%s parameter: %s";
char M_INVALID_PACK_CMD[]="Invalid pack command: %s";
char M_MISSING_UNPACK_CMD[]="Missing unpack command for suffix: %s";
char M_NO_UNPACK_STRFORM[]="Unpack command missing %%s parameter: %s";
char M_INVALID_UNPACK_CMD[]="Invalid unpack command: %s";
char M_MISSING_OPTIONS[]="Missing option record for suffix: %s";
char M_BREAK_SIGNALED[]="\nCTL Break signaled.\n";
char M_REGISTERED_TO[]="Registered to [%s]\n\n";
char M_SIGNAL_FAILED[]="Signal command failed";
char M_USING_REARJ_SW[]="Using REARJ_SW=%s\n";
char M_PROGRAM_CRC_ERROR[]="Program CRC error";
char M_YD_CMD_CONFLICT[]="Can't use /y option with /d option";
char M_LY_CMD[]="Must use /l option with /ytext option";
char M_NO_V_CMD[]="No /v command configured in %s.";
char M_INVALID_F_SUFFIX[]="Invalid archive suffix: /f%s";
char M_INVALID_T_SUFFIX[]="Invalid archive suffix: /t%s";
char M_SIMULATION_MODE[]="REARJ is running in simulation mode.  Archives will NOT be extracted,\ncreated, or deleted.\n\n";
char M_NO_LISTFILE[]="Missing list filename\n";
char M_NO_FILES_INT[]="No matching internal archive files found\n";
char M_NO_FILES[]="No matching archive files found\n";
char M_CWD_MUST_BE_EMPTY[]="Warning: Current directory should be empty for /f switch\n";
char M_WORK_DIR_NOT_EMPTY[]="Work directory %s is not empty";
char M_CANT_GET_FULL_PATH[]="Can't get full pathname";
char M_OK_TO_QUIT[]="REARJ: OK to quit? ";
char M_QUITTING[]="Quitting!\n";
char M_TOTAL_SECONDS[]="Total seconds: %10ld\n";
char M_TOTAL_CONVERTED[]="Total converted: %8d\n";
char M_TOTAL_SKIPPED[]="Total skipped: %10d\n";

