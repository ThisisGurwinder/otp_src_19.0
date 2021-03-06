/*
 * -----------------------------------------------------------------------
 *
 * NOTE: Do *not* edit this file; instead, edit 'erl_alloc.types' and
 *       build again! This file was automatically generated by
 *       'make_alloc_types' on Fri Dec  8 11:06:35 2017.
 *
 * -----------------------------------------------------------------------
 *
 * 
 * Copyright Ericsson AB 2017. All Rights Reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#ifndef ERL_ALLOC_TYPES_H__
#define ERL_ALLOC_TYPES_H__


/* --- Allocator numbers -------------------------------------------------- */

#define ERTS_ALC_A_INVALID (0)

#define ERTS_ALC_A_MIN (1)

#define ERTS_ALC_A_SYSTEM (1)
#define ERTS_ALC_A_TEMPORARY (2)
#define ERTS_ALC_A_SHORT_LIVED (3)
#define ERTS_ALC_A_STANDARD (4)
#define ERTS_ALC_A_LONG_LIVED (5)
#define ERTS_ALC_A_EHEAP (6)
#define ERTS_ALC_A_ETS (7)
#define ERTS_ALC_A_FIXED_SIZE (8)
#define ERTS_ALC_A_LITERAL (9)
#define ERTS_ALC_A_EXEC (10)
#define ERTS_ALC_A_BINARY (11)
#define ERTS_ALC_A_DRIVER (12)
#define ERTS_ALC_A_TEST (13)

#define ERTS_ALC_A_MAX (13)


/* --- Class numbers ------------------------------------------------------ */

#define ERTS_ALC_C_INVALID (0)

#define ERTS_ALC_C_MIN (1)

#define ERTS_ALC_C_ATOM  (1)
#define ERTS_ALC_C_BINARIES  (2)
#define ERTS_ALC_C_CODE  (3)
#define ERTS_ALC_C_ETS  (4)
#define ERTS_ALC_C_PROCESSES  (5)
#define ERTS_ALC_C_SYSTEM  (6)

#define ERTS_ALC_C_MAX (6)


/* --- Type number intervals ---------------------------------------------- */

#define ERTS_ALC_N_INVALID (0)

#define ERTS_ALC_N_MIN (1)

/* Type numbers used for sys_alloc */
#define ERTS_ALC_N_MIN_A_SYSTEM (1)
#define ERTS_ALC_N_MAX_A_SYSTEM (5)

/* Type numbers used for temp_alloc */
#define ERTS_ALC_N_MIN_A_TEMPORARY (6)
#define ERTS_ALC_N_MAX_A_TEMPORARY (25)

/* Type numbers used for sl_alloc */
#define ERTS_ALC_N_MIN_A_SHORT_LIVED (26)
#define ERTS_ALC_N_MAX_A_SHORT_LIVED (74)

/* Type numbers used for std_alloc */
#define ERTS_ALC_N_MIN_A_STANDARD (75)
#define ERTS_ALC_N_MAX_A_STANDARD (114)

/* Type numbers used for ll_alloc */
#define ERTS_ALC_N_MIN_A_LONG_LIVED (115)
#define ERTS_ALC_N_MAX_A_LONG_LIVED (161)

/* Type numbers used for eheap_alloc */
#define ERTS_ALC_N_MIN_A_EHEAP (162)
#define ERTS_ALC_N_MAX_A_EHEAP (166)

/* Type numbers used for ets_alloc */
#define ERTS_ALC_N_MIN_A_ETS (167)
#define ERTS_ALC_N_MAX_A_ETS (175)

/* Type numbers used for fix_alloc */
#define ERTS_ALC_N_MIN_A_FIXED_SIZE (176)
#define ERTS_ALC_N_MAX_A_FIXED_SIZE (185)

/* Type numbers used for literal_alloc */
#define ERTS_ALC_N_MIN_A_LITERAL (186)
#define ERTS_ALC_N_MAX_A_LITERAL (186)

/* Type numbers used for exec_alloc */
#define ERTS_ALC_N_MIN_A_EXEC (187)
#define ERTS_ALC_N_MAX_A_EXEC (187)

/* Type numbers used for binary_alloc */
#define ERTS_ALC_N_MIN_A_BINARY (188)
#define ERTS_ALC_N_MAX_A_BINARY (189)

/* Type numbers used for driver_alloc */
#define ERTS_ALC_N_MIN_A_DRIVER (190)
#define ERTS_ALC_N_MAX_A_DRIVER (204)

/* Type numbers used for test_alloc */
#define ERTS_ALC_N_MIN_A_TEST (205)
#define ERTS_ALC_N_MAX_A_TEST (205)

#define ERTS_ALC_N_MAX (205)


/* --- Multi thread use of allocators -------------------------------------- */

#define ERTS_ALC_MTA_SYSTEM (1)
#define ERTS_ALC_MTA_TEMPORARY (1)
#define ERTS_ALC_MTA_SHORT_LIVED (1)
#define ERTS_ALC_MTA_STANDARD (1)
#define ERTS_ALC_MTA_LONG_LIVED (1)
#define ERTS_ALC_MTA_EHEAP (1)
#define ERTS_ALC_MTA_ETS (1)
#define ERTS_ALC_MTA_FIXED_SIZE (1)
#define ERTS_ALC_MTA_LITERAL (1)
#define ERTS_ALC_MTA_EXEC (1)
#define ERTS_ALC_MTA_BINARY (1)
#define ERTS_ALC_MTA_DRIVER (1)
#define ERTS_ALC_MTA_TEST (1)


/* --- Types --------------------------------------------------------------- */

typedef Uint32 ErtsAlcType_t; /* The type used for memory types */

#define ERTS_ALC_T_INVALID (0)

#define ERTS_ALC_T_UNDEF (225)
#define ERTS_ALC_T_NBIF_TABLE (353)
#define ERTS_ALC_T_INFO_DSBUF (481)
#define ERTS_ALC_T_HIPE (609)
#define ERTS_ALC_T_PUTENV_STR (737)
#define ERTS_ALC_T_TMP_HEAP (850)
#define ERTS_ALC_T_MSG_ROOTS (978)
#define ERTS_ALC_T_ROOTSET (1106)
#define ERTS_ALC_T_LOADER_TMP (1202)
#define ERTS_ALC_T_NC_TMP (1378)
#define ERTS_ALC_T_TMP (1506)
#define ERTS_ALC_T_DCTRL_BUF (1634)
#define ERTS_ALC_T_TMP_DIST_BUF (1762)
#define ERTS_ALC_T_ESTACK (1890)
#define ERTS_ALC_T_DB_TMP (1986)
#define ERTS_ALC_T_DB_MC_STK (2114)
#define ERTS_ALC_T_DB_MS_CMPL_HEAP (2242)
#define ERTS_ALC_T_LOGGER_DSBUF (2402)
#define ERTS_ALC_T_TMP_DSBUF (2530)
#define ERTS_ALC_T_DDLL_TMP_BUF (2658)
#define ERTS_ALC_T_RE_TMP_BUF (2786)
#define ERTS_ALC_T_TEMP_TERM (2914)
#define ERTS_ALC_T_SYS_READ_BUF (3042)
#define ERTS_ALC_T_ENVIRONMENT (3170)
#define ERTS_ALC_T_SYS_WRITE_BUF (3298)
#define ERTS_ALC_T_PEND_SUSPEND (3411)
#define ERTS_ALC_T_PROC_LIST (3539)
#define ERTS_ALC_T_SAVED_ESTACK (3667)
#define ERTS_ALC_T_MSGQ_CHNG (3795)
#define ERTS_ALC_T_PREPARED_CODE (3891)
#define ERTS_ALC_T_TIMER_REQUEST (4051)
#define ERTS_ALC_T_BTM_YIELD_STATE (4179)
#define ERTS_ALC_T_DB_FIXATION (4291)
#define ERTS_ALC_T_DB_FIX_DEL (4419)
#define ERTS_ALC_T_DB_MS_RUN_HEAP (4547)
#define ERTS_ALC_T_DB_PROC_CLEANUP (4675)
#define ERTS_ALC_T_PORT_TASK (4835)
#define ERTS_ALC_T_PT_HNDL_LIST (4963)
#define ERTS_ALC_T_MISC_OP_LIST (5091)
#define ERTS_ALC_T_PORT_NAMES (5219)
#define ERTS_ALC_T_PTAB_LIST_DEL (5331)
#define ERTS_ALC_T_PTAB_LIST_CNKI (5459)
#define ERTS_ALC_T_PTAB_LIST_PIDS (5587)
#define ERTS_ALC_T_RE_SUBJECT (5731)
#define ERTS_ALC_T_RE_STACK (5859)
#define ERTS_ALC_T_UNICODE_BUFFER (5987)
#define ERTS_ALC_T_BINARY_BUFFER (6115)
#define ERTS_ALC_T_TMP_CPU_IDS (6243)
#define ERTS_ALC_T_EXT_TERM_DATA (6355)
#define ERTS_ALC_T_CODE_IX_LOCK_Q (6499)
#define ERTS_ALC_T_BUSY_CALLER_TAB (6627)
#define ERTS_ALC_T_BUSY_CALLER (6755)
#define ERTS_ALC_T_PROC_SYS_TSK (6867)
#define ERTS_ALC_T_PROC_SYS_TSK_QS (6995)
#define ERTS_ALC_T_NEW_TIME_OFFSET (7139)
#define ERTS_ALC_T_IOB_REQ (7267)
#define ERTS_ALC_T_TRACE_MSG_QUEUE (7395)
#define ERTS_ALC_T_SCHED_ASYNC_JOB (7523)
#define ERTS_ALC_T_MISC_AUX_WORK (7651)
#define ERTS_ALC_T_THR_Q_SL (7779)
#define ERTS_ALC_T_ASYNC (7907)
#define ERTS_ALC_T_XPORTS_LIST (8035)
#define ERTS_ALC_T_T_THR_PRGR_DATA (8163)
#define ERTS_ALC_T_ETHR_SL (8291)
#define ERTS_ALC_T_SYS_MSG_Q (8403)
#define ERTS_ALC_T_SL_MPATHS (8547)
#define ERTS_ALC_T_DEBUG (8675)
#define ERTS_ALC_T_AINFO_REQ (8803)
#define ERTS_ALC_T_SCHED_WTIME_REQ (8931)
#define ERTS_ALC_T_GC_INFO_REQ (9059)
#define ERTS_ALC_T_SYS_CHECK_REQ (9187)
#define ERTS_ALC_T_FD_LIST (9315)
#define ERTS_ALC_T_ACTIVE_FD_ARR (9443)
#define ERTS_ALC_T_POLLSET_UPDREQ (9571)
#define ERTS_ALC_T_REG_PROC (9684)
#define ERTS_ALC_T_LINK_LH (9812)
#define ERTS_ALC_T_SUSPEND_MON (9940)
#define ERTS_ALC_T_REG_TABLE (10084)
#define ERTS_ALC_T_FUN_TABLE (10164)
#define ERTS_ALC_T_DIST_TABLE (10340)
#define ERTS_ALC_T_NODE_TABLE (10468)
#define ERTS_ALC_T_MODULE_REFS (10548)
#define ERTS_ALC_T_DCACHE (10724)
#define ERTS_ALC_T_DIST_ENTRY (10852)
#define ERTS_ALC_T_NODE_ENTRY (10980)
#define ERTS_ALC_T_ARG_REG (11092)
#define ERTS_ALC_T_PROC_DICT (11220)
#define ERTS_ALC_T_CALLS_BUF (11348)
#define ERTS_ALC_T_BPD (11492)
#define ERTS_ALC_T_LINEBUF (11620)
#define ERTS_ALC_T_IOQ (11748)
#define ERTS_ALC_T_BITS_BUF (11876)
#define ERTS_ALC_T_DB_NTAB_ENT (11972)
#define ERTS_ALC_T_DDLL_HANDLE (12132)
#define ERTS_ALC_T_NODES_MON (12244)
#define ERTS_ALC_T_RE_HEAP (12388)
#define ERTS_ALC_T_PSD (12500)
#define ERTS_ALC_T_PRTSD (12644)
#define ERTS_ALC_T_DIRTY_START (12756)
#define ERTS_ALC_T_THR_Q_EL (12900)
#define ERTS_ALC_T_THR_Q (13028)
#define ERTS_ALC_T_ZLIB (13156)
#define ERTS_ALC_T_PORT_LOCK (13284)
#define ERTS_ALC_T_DRIVER_LOCK (13412)
#define ERTS_ALC_T_ETHR_STD (13540)
#define ERTS_ALC_T_DDLL_PROCESS (13668)
#define ERTS_ALC_T_MONITOR_LH (13780)
#define ERTS_ALC_T_NLINK_LH (13908)
#define ERTS_ALC_T_DB_HEIR_DATA (14020)
#define ERTS_ALC_T_NIF_TRAP_EXPORT (14132)
#define ERTS_ALC_T_PORT_DATA_HEAP (14308)
#define ERTS_ALC_T_FD_ENTRY_BUF (14436)
#define ERTS_ALC_T_PRT_REP_EXIT (14564)
#define ERTS_ALC_T_SYS_BLOCKING (14692)
#define ERTS_ALC_T_ATOM (14741)
#define ERTS_ALC_T_MODULE (14901)
#define ERTS_ALC_T_FUN_ENTRY (15029)
#define ERTS_ALC_T_ATOM_TXT (15125)
#define ERTS_ALC_T_TIMER_SERVICE (15333)
#define ERTS_ALC_T_ATOM_TABLE (15381)
#define ERTS_ALC_T_EXPORT_TABLE (15541)
#define ERTS_ALC_T_MODULE_TABLE (15669)
#define ERTS_ALC_T_TAINT (15797)
#define ERTS_ALC_T_PROC_TABLE (15957)
#define ERTS_ALC_T_PORT_TABLE (16101)
#define ERTS_ALC_T_TIMER_WHEEL (16229)
#define ERTS_ALC_T_ASYNC_DATA (16357)
#define ERTS_ALC_T_DB_TABLES (16453)
#define ERTS_ALC_T_INSTR_INFO (16613)
#define ERTS_ALC_T_SCHDLR_SLP_INFO (16741)
#define ERTS_ALC_T_RUNQS (16869)
#define ERTS_ALC_T_DDLL_ERRCODES (16997)
#define ERTS_ALC_T_PRE_ALLOC_DATA (17125)
#define ERTS_ALC_T_CPUDATA (17253)
#define ERTS_ALC_T_CPU_GRPS_MAP (17381)
#define ERTS_ALC_T_AUX_WORK_TMO (17509)
#define ERTS_ALC_T_MISC_AUX_WORK_Q (17637)
#define ERTS_ALC_T_PROC_INTERVAL (17765)
#define ERTS_ALC_T_TRACER_NIF (17893)
#define ERTS_ALC_T_THR_Q_LL (18021)
#define ERTS_ALC_T_PROC_LCK_WTR (18149)
#define ERTS_ALC_T_RUNQ_BLNS (18277)
#define ERTS_ALC_T_THR_PRGR_IDATA (18405)
#define ERTS_ALC_T_THR_PRGR_DATA (18533)
#define ERTS_ALC_T_ETHR_LL (18661)
#define ERTS_ALC_T_FP_EXCEPTION (18789)
#define ERTS_ALC_T_LL_MPATHS (18917)
#define ERTS_ALC_T_CODE (18997)
#define ERTS_ALC_T_DB_MS_PSDO_PROC (19141)
#define ERTS_ALC_T_SCHDLR_DATA (19301)
#define ERTS_ALC_T_LL_TEMP_TERM (19429)
#define ERTS_ALC_T_EXPORT (19509)
#define ERTS_ALC_T_DRV_TAB (19685)
#define ERTS_ALC_T_DRV_EV_STATE (19813)
#define ERTS_ALC_T_POLLSET (19941)
#define ERTS_ALC_T_POLL_FDS (20069)
#define ERTS_ALC_T_POLL_RES_EVS (20197)
#define ERTS_ALC_T_FD_STATUS (20325)
#define ERTS_ALC_T_SELECT_FDS (20453)
#define ERTS_ALC_T_FD_TAB (20581)
#define ERTS_ALC_T_CS_PROG_PATH (20709)
#define ERTS_ALC_T_BEAM_REGISTER (20822)
#define ERTS_ALC_T_HEAP (20950)
#define ERTS_ALC_T_OLD_HEAP (21078)
#define ERTS_ALC_T_HEAP_FRAG (21206)
#define ERTS_ALC_T_MSG (21334)
#define ERTS_ALC_T_DB_TABLE (21447)
#define ERTS_ALC_T_DB_SEG (21575)
#define ERTS_ALC_T_DB_SEG_TAB (21703)
#define ERTS_ALC_T_DB_STK (21831)
#define ERTS_ALC_T_DB_TRANS_TAB (21959)
#define ERTS_ALC_T_DB_SEL_LIST (22087)
#define ERTS_ALC_T_DB_DMC_ERROR (22215)
#define ERTS_ALC_T_DB_DMC_ERR_INFO (22343)
#define ERTS_ALC_T_DB_TERM (22471)
#define ERTS_ALC_T_PROC (22616)
#define ERTS_ALC_T_MSG_REF (22744)
#define ERTS_ALC_T_LL_PTIMER (22872)
#define ERTS_ALC_T_HL_PTIMER (23000)
#define ERTS_ALC_T_BIF_TIMER (23128)
#define ERTS_ALC_T_THR_Q_EL_SL (23272)
#define ERTS_ALC_T_MONITOR_SH (23384)
#define ERTS_ALC_T_NLINK_SH (23512)
#define ERTS_ALC_T_DRV_EV_D_STATE (23656)
#define ERTS_ALC_T_DRV_SEL_D_STATE (23784)
#define ERTS_ALC_T_LITERAL (23865)
#define ERTS_ALC_T_HIPE_EXEC (23994)
#define ERTS_ALC_T_DRV_BINARY (24107)
#define ERTS_ALC_T_BINARY (24235)
#define ERTS_ALC_T_PORT (24428)
#define ERTS_ALC_T_DRV (24556)
#define ERTS_ALC_T_DRIVER (24684)
#define ERTS_ALC_T_DRV_CMD_DATA (24812)
#define ERTS_ALC_T_DRV_CTRL_DATA (24940)
#define ERTS_ALC_T_DRV_CALL_DATA (25068)
#define ERTS_ALC_T_NIF (25196)
#define ERTS_ALC_T_PORT_DATA_LOCK (25324)
#define ERTS_ALC_T_DRV_THR_OPTS (25452)
#define ERTS_ALC_T_DRV_TID (25580)
#define ERTS_ALC_T_DRV_MTX (25708)
#define ERTS_ALC_T_DRV_CND (25836)
#define ERTS_ALC_T_DRV_RWLCK (25964)
#define ERTS_ALC_T_DRV_TSD (26092)
#define ERTS_ALC_T_MSACC (26220)
#define ERTS_ALC_T_TEST (26349)


/* --- Field sizes, masks, and shifts -------------------------------------- */

#define ERTS_ALC_A_BITS (4)
#define ERTS_ALC_C_BITS (3)
#define ERTS_ALC_N_BITS (8)
#define ERTS_ALC_T_BITS (15)

#define ERTS_ALC_A_MASK (15)
#define ERTS_ALC_C_MASK (7)
#define ERTS_ALC_N_MASK (255)
#define ERTS_ALC_T_MASK (32767)

#define ERTS_ALC_A_SHIFT (0)
#define ERTS_ALC_C_SHIFT (4)
#define ERTS_ALC_N_SHIFT (7)


/* --- Mappings ------------------------------------------------------------ */

/* type -> type number */
#define ERTS_ALC_T2N(T) (((T) >> ERTS_ALC_N_SHIFT) & ERTS_ALC_N_MASK)

/* type -> allocator number */
#define ERTS_ALC_T2A(T) (((T) >> ERTS_ALC_A_SHIFT) & ERTS_ALC_A_MASK)

/* type -> class number */
#define ERTS_ALC_T2C(T) (((T) >> ERTS_ALC_C_SHIFT) & ERTS_ALC_C_MASK)

/* type number -> type */
#define ERTS_ALC_N2T(N) (erts_alc_n2t[(N)])

/* type number -> type description */
#define ERTS_ALC_N2TD(N) (erts_alc_n2td[(N)])

/* type -> type description */
#define ERTS_ALC_T2TD(T) (ERTS_ALC_N2TD(ERTS_ALC_T2N((T))))

/* class number -> class description */
#define ERTS_ALC_C2CD(C) (erts_alc_c2cd[(C)])

/* allocator number -> allocator description */
#define ERTS_ALC_A2AD(A) (erts_alc_a2ad[(A)])

extern const ErtsAlcType_t erts_alc_n2t[];
extern const char *erts_alc_n2td[];
extern const char *erts_alc_c2cd[];
extern const char *erts_alc_a2ad[];

#ifdef ERTS_ALC_INTERNAL__

const ErtsAlcType_t erts_alc_n2t[] = {
  ERTS_ALC_T_INVALID,
  ERTS_ALC_T_UNDEF,
  ERTS_ALC_T_NBIF_TABLE,
  ERTS_ALC_T_INFO_DSBUF,
  ERTS_ALC_T_HIPE,
  ERTS_ALC_T_PUTENV_STR,
  ERTS_ALC_T_TMP_HEAP,
  ERTS_ALC_T_MSG_ROOTS,
  ERTS_ALC_T_ROOTSET,
  ERTS_ALC_T_LOADER_TMP,
  ERTS_ALC_T_NC_TMP,
  ERTS_ALC_T_TMP,
  ERTS_ALC_T_DCTRL_BUF,
  ERTS_ALC_T_TMP_DIST_BUF,
  ERTS_ALC_T_ESTACK,
  ERTS_ALC_T_DB_TMP,
  ERTS_ALC_T_DB_MC_STK,
  ERTS_ALC_T_DB_MS_CMPL_HEAP,
  ERTS_ALC_T_LOGGER_DSBUF,
  ERTS_ALC_T_TMP_DSBUF,
  ERTS_ALC_T_DDLL_TMP_BUF,
  ERTS_ALC_T_RE_TMP_BUF,
  ERTS_ALC_T_TEMP_TERM,
  ERTS_ALC_T_SYS_READ_BUF,
  ERTS_ALC_T_ENVIRONMENT,
  ERTS_ALC_T_SYS_WRITE_BUF,
  ERTS_ALC_T_PEND_SUSPEND,
  ERTS_ALC_T_PROC_LIST,
  ERTS_ALC_T_SAVED_ESTACK,
  ERTS_ALC_T_MSGQ_CHNG,
  ERTS_ALC_T_PREPARED_CODE,
  ERTS_ALC_T_TIMER_REQUEST,
  ERTS_ALC_T_BTM_YIELD_STATE,
  ERTS_ALC_T_DB_FIXATION,
  ERTS_ALC_T_DB_FIX_DEL,
  ERTS_ALC_T_DB_MS_RUN_HEAP,
  ERTS_ALC_T_DB_PROC_CLEANUP,
  ERTS_ALC_T_PORT_TASK,
  ERTS_ALC_T_PT_HNDL_LIST,
  ERTS_ALC_T_MISC_OP_LIST,
  ERTS_ALC_T_PORT_NAMES,
  ERTS_ALC_T_PTAB_LIST_DEL,
  ERTS_ALC_T_PTAB_LIST_CNKI,
  ERTS_ALC_T_PTAB_LIST_PIDS,
  ERTS_ALC_T_RE_SUBJECT,
  ERTS_ALC_T_RE_STACK,
  ERTS_ALC_T_UNICODE_BUFFER,
  ERTS_ALC_T_BINARY_BUFFER,
  ERTS_ALC_T_TMP_CPU_IDS,
  ERTS_ALC_T_EXT_TERM_DATA,
  ERTS_ALC_T_CODE_IX_LOCK_Q,
  ERTS_ALC_T_BUSY_CALLER_TAB,
  ERTS_ALC_T_BUSY_CALLER,
  ERTS_ALC_T_PROC_SYS_TSK,
  ERTS_ALC_T_PROC_SYS_TSK_QS,
  ERTS_ALC_T_NEW_TIME_OFFSET,
  ERTS_ALC_T_IOB_REQ,
  ERTS_ALC_T_TRACE_MSG_QUEUE,
  ERTS_ALC_T_SCHED_ASYNC_JOB,
  ERTS_ALC_T_MISC_AUX_WORK,
  ERTS_ALC_T_THR_Q_SL,
  ERTS_ALC_T_ASYNC,
  ERTS_ALC_T_XPORTS_LIST,
  ERTS_ALC_T_T_THR_PRGR_DATA,
  ERTS_ALC_T_ETHR_SL,
  ERTS_ALC_T_SYS_MSG_Q,
  ERTS_ALC_T_SL_MPATHS,
  ERTS_ALC_T_DEBUG,
  ERTS_ALC_T_AINFO_REQ,
  ERTS_ALC_T_SCHED_WTIME_REQ,
  ERTS_ALC_T_GC_INFO_REQ,
  ERTS_ALC_T_SYS_CHECK_REQ,
  ERTS_ALC_T_FD_LIST,
  ERTS_ALC_T_ACTIVE_FD_ARR,
  ERTS_ALC_T_POLLSET_UPDREQ,
  ERTS_ALC_T_REG_PROC,
  ERTS_ALC_T_LINK_LH,
  ERTS_ALC_T_SUSPEND_MON,
  ERTS_ALC_T_REG_TABLE,
  ERTS_ALC_T_FUN_TABLE,
  ERTS_ALC_T_DIST_TABLE,
  ERTS_ALC_T_NODE_TABLE,
  ERTS_ALC_T_MODULE_REFS,
  ERTS_ALC_T_DCACHE,
  ERTS_ALC_T_DIST_ENTRY,
  ERTS_ALC_T_NODE_ENTRY,
  ERTS_ALC_T_ARG_REG,
  ERTS_ALC_T_PROC_DICT,
  ERTS_ALC_T_CALLS_BUF,
  ERTS_ALC_T_BPD,
  ERTS_ALC_T_LINEBUF,
  ERTS_ALC_T_IOQ,
  ERTS_ALC_T_BITS_BUF,
  ERTS_ALC_T_DB_NTAB_ENT,
  ERTS_ALC_T_DDLL_HANDLE,
  ERTS_ALC_T_NODES_MON,
  ERTS_ALC_T_RE_HEAP,
  ERTS_ALC_T_PSD,
  ERTS_ALC_T_PRTSD,
  ERTS_ALC_T_DIRTY_START,
  ERTS_ALC_T_THR_Q_EL,
  ERTS_ALC_T_THR_Q,
  ERTS_ALC_T_ZLIB,
  ERTS_ALC_T_PORT_LOCK,
  ERTS_ALC_T_DRIVER_LOCK,
  ERTS_ALC_T_ETHR_STD,
  ERTS_ALC_T_DDLL_PROCESS,
  ERTS_ALC_T_MONITOR_LH,
  ERTS_ALC_T_NLINK_LH,
  ERTS_ALC_T_DB_HEIR_DATA,
  ERTS_ALC_T_NIF_TRAP_EXPORT,
  ERTS_ALC_T_PORT_DATA_HEAP,
  ERTS_ALC_T_FD_ENTRY_BUF,
  ERTS_ALC_T_PRT_REP_EXIT,
  ERTS_ALC_T_SYS_BLOCKING,
  ERTS_ALC_T_ATOM,
  ERTS_ALC_T_MODULE,
  ERTS_ALC_T_FUN_ENTRY,
  ERTS_ALC_T_ATOM_TXT,
  ERTS_ALC_T_TIMER_SERVICE,
  ERTS_ALC_T_ATOM_TABLE,
  ERTS_ALC_T_EXPORT_TABLE,
  ERTS_ALC_T_MODULE_TABLE,
  ERTS_ALC_T_TAINT,
  ERTS_ALC_T_PROC_TABLE,
  ERTS_ALC_T_PORT_TABLE,
  ERTS_ALC_T_TIMER_WHEEL,
  ERTS_ALC_T_ASYNC_DATA,
  ERTS_ALC_T_DB_TABLES,
  ERTS_ALC_T_INSTR_INFO,
  ERTS_ALC_T_SCHDLR_SLP_INFO,
  ERTS_ALC_T_RUNQS,
  ERTS_ALC_T_DDLL_ERRCODES,
  ERTS_ALC_T_PRE_ALLOC_DATA,
  ERTS_ALC_T_CPUDATA,
  ERTS_ALC_T_CPU_GRPS_MAP,
  ERTS_ALC_T_AUX_WORK_TMO,
  ERTS_ALC_T_MISC_AUX_WORK_Q,
  ERTS_ALC_T_PROC_INTERVAL,
  ERTS_ALC_T_TRACER_NIF,
  ERTS_ALC_T_THR_Q_LL,
  ERTS_ALC_T_PROC_LCK_WTR,
  ERTS_ALC_T_RUNQ_BLNS,
  ERTS_ALC_T_THR_PRGR_IDATA,
  ERTS_ALC_T_THR_PRGR_DATA,
  ERTS_ALC_T_ETHR_LL,
  ERTS_ALC_T_FP_EXCEPTION,
  ERTS_ALC_T_LL_MPATHS,
  ERTS_ALC_T_CODE,
  ERTS_ALC_T_DB_MS_PSDO_PROC,
  ERTS_ALC_T_SCHDLR_DATA,
  ERTS_ALC_T_LL_TEMP_TERM,
  ERTS_ALC_T_EXPORT,
  ERTS_ALC_T_DRV_TAB,
  ERTS_ALC_T_DRV_EV_STATE,
  ERTS_ALC_T_POLLSET,
  ERTS_ALC_T_POLL_FDS,
  ERTS_ALC_T_POLL_RES_EVS,
  ERTS_ALC_T_FD_STATUS,
  ERTS_ALC_T_SELECT_FDS,
  ERTS_ALC_T_FD_TAB,
  ERTS_ALC_T_CS_PROG_PATH,
  ERTS_ALC_T_BEAM_REGISTER,
  ERTS_ALC_T_HEAP,
  ERTS_ALC_T_OLD_HEAP,
  ERTS_ALC_T_HEAP_FRAG,
  ERTS_ALC_T_MSG,
  ERTS_ALC_T_DB_TABLE,
  ERTS_ALC_T_DB_SEG,
  ERTS_ALC_T_DB_SEG_TAB,
  ERTS_ALC_T_DB_STK,
  ERTS_ALC_T_DB_TRANS_TAB,
  ERTS_ALC_T_DB_SEL_LIST,
  ERTS_ALC_T_DB_DMC_ERROR,
  ERTS_ALC_T_DB_DMC_ERR_INFO,
  ERTS_ALC_T_DB_TERM,
  ERTS_ALC_T_PROC,
  ERTS_ALC_T_MSG_REF,
  ERTS_ALC_T_LL_PTIMER,
  ERTS_ALC_T_HL_PTIMER,
  ERTS_ALC_T_BIF_TIMER,
  ERTS_ALC_T_THR_Q_EL_SL,
  ERTS_ALC_T_MONITOR_SH,
  ERTS_ALC_T_NLINK_SH,
  ERTS_ALC_T_DRV_EV_D_STATE,
  ERTS_ALC_T_DRV_SEL_D_STATE,
  ERTS_ALC_T_LITERAL,
  ERTS_ALC_T_HIPE_EXEC,
  ERTS_ALC_T_DRV_BINARY,
  ERTS_ALC_T_BINARY,
  ERTS_ALC_T_PORT,
  ERTS_ALC_T_DRV,
  ERTS_ALC_T_DRIVER,
  ERTS_ALC_T_DRV_CMD_DATA,
  ERTS_ALC_T_DRV_CTRL_DATA,
  ERTS_ALC_T_DRV_CALL_DATA,
  ERTS_ALC_T_NIF,
  ERTS_ALC_T_PORT_DATA_LOCK,
  ERTS_ALC_T_DRV_THR_OPTS,
  ERTS_ALC_T_DRV_TID,
  ERTS_ALC_T_DRV_MTX,
  ERTS_ALC_T_DRV_CND,
  ERTS_ALC_T_DRV_RWLCK,
  ERTS_ALC_T_DRV_TSD,
  ERTS_ALC_T_MSACC,
  ERTS_ALC_T_TEST,
  ERTS_ALC_T_INVALID
};

const char *erts_alc_n2td[] = {
  "invalid_type",
  "undefined",
  "nbif_tab",
  "info_dsbuf",
  "hipe_data",
  "putenv_string",
  "tmp_heap",
  "msg_roots",
  "root_set",
  "loader_tmp",
  "nc_tmp",
  "tmp",
  "dctrl_buf",
  "tmp_dist_buf",
  "estack",
  "db_tmp",
  "db_mc_stack",
  "db_match_spec_cmpl_heap",
  "logger_dsbuf",
  "tmp_dsbuf",
  "ddll_tmp_buf",
  "re_tmp_buf",
  "temp_term",
  "sys_read_buf",
  "environment",
  "sys_write_buf",
  "pending_suspend",
  "proc_list",
  "saved_estack",
  "messages_queue_change",
  "prepared_code",
  "timer_request",
  "btm_yield_state",
  "db_fixation",
  "fixed_del",
  "db_match_spec_run_heap",
  "db_proc_cleanup_state",
  "port_task",
  "port_task_handle_list",
  "misc_op_list",
  "port_names",
  "ptab_list_deleted_el",
  "ptab_list_chunk_info",
  "ptab_list_pids",
  "re_subject",
  "re_stack",
  "unicode_buffer",
  "binary_buffer",
  "tmp_cpu_ids",
  "external_term_data",
  "code_ix_lock_q",
  "busy_caller_table",
  "busy_caller",
  "proc_sys_task",
  "proc_sys_task_queues",
  "new_time_offset",
  "io_bytes_request",
  "trace_message_queue",
  "async_calls",
  "misc_aux_work",
  "short_lived_thr_queue",
  "async",
  "extra_port_list",
  "temp_thr_prgr_data",
  "ethread_short_lived",
  "system_messages_queue",
  "sl_migration_paths",
  "debugging",
  "alloc_info_request",
  "sched_wall_time_request",
  "gc_info_request",
  "system_check_request",
  "fd_list",
  "active_fd_array",
  "pollset_update_req",
  "reg_proc",
  "link_lh",
  "suspend_monitor",
  "reg_tab",
  "fun_tab",
  "dist_tab",
  "node_tab",
  "module_refs",
  "dcache",
  "dist_entry",
  "node_entry",
  "arg_reg",
  "proc_dict",
  "calls_buf",
  "bpd",
  "line_buf",
  "io_queue",
  "bits_buf",
  "db_named_table_entry",
  "ddll_handle",
  "nodes_monitor",
  "re_heap",
  "process_specific_data",
  "port_specific_data",
  "dirty_start",
  "thr_q_element",
  "thr_queue",
  "zlib",
  "port_lock",
  "driver_lock",
  "ethread_standard",
  "ddll_processes",
  "monitor_lh",
  "nlink_lh",
  "db_heir_data",
  "nif_trap_export_entry",
  "port_data_heap",
  "fd_entry_buf",
  "port_report_exit",
  "sys_blocking",
  "atom_entry",
  "module_entry",
  "fun_entry",
  "atom_text",
  "timer_service",
  "atom_tab",
  "export_tab",
  "module_tab",
  "taint_list",
  "proc_tab",
  "port_tab",
  "timer_wheel",
  "internal_async_data",
  "db_tabs",
  "instr_info",
  "scheduler_sleep_info",
  "run_queues",
  "ddll_errcodes",
  "pre_alloc_data",
  "cpu_data",
  "cpu_groups_map",
  "aux_work_timeouts",
  "misc_aux_work_q",
  "process_interval",
  "tracer_nif",
  "long_lived_thr_queue",
  "proc_lock_waiter",
  "run_queue_balancing",
  "thr_prgr_internal_data",
  "thr_prgr_data",
  "ethread_long_lived",
  "fp_exception",
  "ll_migration_paths",
  "code",
  "db_match_pseudo_proc",
  "scheduler_data",
  "ll_temp_term",
  "export_entry",
  "drv_tab",
  "driver_event_state",
  "pollset",
  "poll_fds",
  "poll_result_events",
  "fd_status",
  "select_fds",
  "fd_tab",
  "cs_prog_path",
  "beam_register",
  "heap",
  "old_heap",
  "heap_frag",
  "message",
  "db_tab",
  "db_segment",
  "db_segment_tab",
  "db_stack",
  "db_trans_tab",
  "db_select_list",
  "db_dmc_error",
  "db_dmc_error_info",
  "db_term",
  "proc",
  "msg_ref",
  "ll_ptimer",
  "hl_ptimer",
  "bif_timer",
  "sl_thr_q_element",
  "monitor_sh",
  "nlink_sh",
  "driver_event_data_state",
  "driver_select_data_state",
  "literal",
  "hipe_code",
  "drv_binary",
  "binary",
  "port",
  "drv_internal",
  "driver",
  "driver_command_data",
  "driver_control_data",
  "driver_call_data",
  "nif_internal",
  "port_data_lock",
  "driver_thread_opts",
  "driver_tid",
  "driver_mutex",
  "driver_cond",
  "driver_rwlock",
  "driver_tsd",
  "microstate_accounting",
  "testing",
  NULL
};

const char *erts_alc_c2cd[] = {
  "invalid_class",
  "atom_data",
  "binary_data",
  "code_data",
  "ets_data",
  "process_data",
  "system_data",
  NULL
};

const char *erts_alc_a2ad[] = {
  "invalid_allocator",
  "sys_alloc",
  "temp_alloc",
  "sl_alloc",
  "std_alloc",
  "ll_alloc",
  "eheap_alloc",
  "ets_alloc",
  "fix_alloc",
  "literal_alloc",
  "exec_alloc",
  "binary_alloc",
  "driver_alloc",
  "test_alloc",
  NULL
};

#endif /* #ifdef ERTS_ALC_INTERNAL__ */


/* ------------------------------------------------------------------------- */
#endif /* #ifndef ERL_ALLOC_TYPES_H__ */
