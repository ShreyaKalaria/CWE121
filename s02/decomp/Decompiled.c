
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00640ff8;
  if (PTR___gmon_start___00640ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400a00(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00641010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00641018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00641020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00641028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00641030)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00641038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00641040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00641048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00641050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00641058)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00641060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00641068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00641070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00641078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00641080)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00641088)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00641090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00641098)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006410a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_006410a8)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006410b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006410b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006410c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006410c8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_006410d0)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006410d8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00640ff8)();
  return;
}


void _start(undefined8 uParm1,undefined8 uParm2,undefined8 uParm3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,uParm3,
                    auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00400bf7) */
/* WARNING: Removing unreachable block (ram,0x00400c01) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400c34) */
/* WARNING: Removing unreachable block (ram,0x00400c3e) */

void register_tm_clones(void)

{
  return;
}


void __do_global_dtors_aux(void)

{
  if (completed_6355 == 0) {
    deregister_tm_clones();
    completed_6355 = 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frame_dummy(void)

{
  register_tm_clones();
  return;
}


undefined8 main(undefined4 uParm1,undefined8 uParm2)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  globalArgc = uParm1;
  globalArgv = uParm2;
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_bad();
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pvParm1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pvParm1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_bad(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_48 [24];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  strcpy(local_28,(char *)&local_68);
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_58 [40];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  strcpy(local_28,(char *)&local_68);
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63b_badSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63b_goodG2BSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041b0;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041c7;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041d3;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404253) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404292;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4042a9;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4042b5;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404368;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40437f;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40438b;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40445f;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404476;
  memmove(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404482;
  printLine(local_40);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40453c;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404553;
  memmove(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40455f;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404674;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40468b;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404697;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404742;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404759;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404765;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404b83;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67b_badSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404c18;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67b_goodG2BSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404e1c;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404ea9;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [16];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  strncpy(local_18,(char *)&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [32];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  strncpy(local_18,(char *)&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64b_badSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppvParm1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64b_goodG2BSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppvParm1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66b_badSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66b_goodG2BSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_badSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_goodG2BSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [16];
  size_t local_28;
  ulong local_20;
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c = local_c + 1;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_28 = strlen((char *)&local_58);
  local_20 = 0;
  while (local_20 < local_28 + 1) {
    local_18[local_20] = *(undefined *)((long)&local_58 + local_20);
    local_20 = local_20 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [32];
  size_t local_28;
  ulong local_20;
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_48;
    local_48[0] = 0;
    local_c = local_c + 1;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_28 = strlen((char *)&local_58);
  local_20 = 0;
  while (local_20 < local_28 + 1) {
    local_18[local_20] = *(undefined *)((long)&local_58 + local_20);
    local_20 = local_20 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [16];
  undefined local_28 [24];
  undefined *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  globalReturnsTrueOrFalse();
  local_38[0] = 0;
  local_10 = local_38;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54e_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54e_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405a01;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405a18;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405a24;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405acf;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405ae6;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405af2;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405b9d;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405bb4;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405bc0;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_30 = 0;
    local_1c = local_1c + 1;
    local_28 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405c97;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405cae;
  memcpy(local_28,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405cba;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_38 = 0;
    local_1c = local_1c + 1;
    local_28 = local_38;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405d77;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405d8e;
  memcpy(local_28,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405d9a;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_good(void)

{
  goodG2B();
  return;
}


void badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405e99;
  local_20[1] = local_28;
  badSink(local_28,0x10,local_28);
  return;
}


void goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405f84;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_44_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_badData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_goodG2BData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52c_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52c_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406792;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_badSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406828;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_goodG2BSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pcParm1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pcParm1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40697f;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406a0c;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406acc;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406ae3;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406aef;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (staticFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406b7a;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406baf;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406bc6;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406bd2;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406c86;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406c9d;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406ca9;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406e53;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406f35;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_38 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x406fda;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66b_badSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_10 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40706f;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66b_goodG2BSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40710c;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407199;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_badSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_badData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_goodG2BSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_goodG2BData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [16];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_28;
    local_28[0] = 0;
    local_c = local_c + 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_18,(char *)&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [32];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c = local_c + 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_18,(char *)&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4075c7;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4075de;
  memmove(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4075ea;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4076a4;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4076bb;
  memmove(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4076c7;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_badSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_goodG2BSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40782a;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4078b7;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67b_badSink(long lParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = lParm1;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67b_goodG2BSink(long lParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = lParm1;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407a58;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407ae5;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63b_badSink(char **ppcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63b_goodG2BSink(char **ppcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_badSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_goodG2BSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68b_badSink(void)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_badData,(char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68b_goodG2BSink(void)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_goodG2BData,
         (char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_44_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407f71;
  local_20[2] = local_20[0];
  badSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408063;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [16];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_28;
    local_28[0] = 0;
    local_c = local_c + 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_18,(char *)&local_48);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [32];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c = local_c + 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_18,(char *)&local_48);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54e_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54e_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408286;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4082bd;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4082d4;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4082e0;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408361;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40836f;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4083a4;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4083bb;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4083c7;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408448;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40847f;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408496;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4084a2;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_38 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408555;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_badSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_10 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4085ea;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_goodG2BSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4086aa;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4086c1;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4086cd;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040874e) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40878d;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4087a4;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4087b0;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408864;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40887b;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408887;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_TRUE != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408955;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40899d;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FALSE == 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408a28;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408a5d;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408aa5;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_TRUE != 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408b59;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408ba1;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408d42;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408dcf;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408edf;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408ef6;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408f02;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408fac;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408fc3;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408fcf;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409079;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409090;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40909c;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409284;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409311;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4093b6;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_badSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40944b;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_goodG2BSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409502;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40954a;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4095f5;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40963d;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409835;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40986c;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409883;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40988f;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409910;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40991e;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409953;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40996a;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409976;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4099f7;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409a2e;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409a45;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409a51;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409c36;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409c6d;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409cb5;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409d36;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  else {
    auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409d44;
    printLine("Benign, fixed string");
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409d79;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409dc1;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409e42;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409e79;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409ec1;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_bad(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  undefined local_48 [24];
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined **local_18;
  undefined **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  memmove(local_28,&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  undefined local_58 [40];
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined **local_18;
  undefined **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  memmove(local_28,&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a293;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a320;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_30 = 0;
    local_1c = local_1c + 1;
    local_28 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a3e9;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a400;
  strncpy(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a40c;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_38 = 0;
    local_1c = local_1c + 1;
    local_28 = local_38;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a4c9;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a4e0;
  strncpy(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a4ec;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a57c) */

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a74c;
  local_20[1] = local_28;
  badSink(local_28,0x10,local_28);
  return;
}


void goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a837;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a8dc;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67b_badSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a971;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67b_goodG2BSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pvParm1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pvParm1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40aac8;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40ab55;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40adb3;
  local_20[2] = local_20[0];
  badSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2BSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40aeca;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40af8a;
  local_20 = local_30;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40afd2;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b053) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b092;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b0da;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b18e;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b1d6;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  local_20 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  memmove(local_20,&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  local_20 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  memmove(local_20,&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_bad(void)

{
  undefined local_28 [16];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_38 [32];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b5af) */

void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64b_badSink(long *plParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_28;
  long local_20;
  long *local_18;
  ulong local_10;
  
  local_20 = *plParm1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = plParm1;
  local_28 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    *(undefined *)(local_20 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64b_goodG2BSink(long *plParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_28;
  long local_20;
  long *local_18;
  ulong local_10;
  
  local_20 = *plParm1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = plParm1;
  local_28 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    *(undefined *)(local_20 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_badSink(local_18,uParm2,local_18)
  ;
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b916;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b92d;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b939;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b9c5;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b9fa;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40ba11;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40ba1d;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bad2;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bae9;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40baf5;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63b_badSink(long *plParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = *plParm1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63b_goodG2BSink(long *plParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = *plParm1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40bcaa;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40bd37;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bdf8;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40be0f;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40be1b;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40bea7;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40bedc;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40bef3;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40beff;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bfb4;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bfcb;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bfd7;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c176;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c18d;
  memmove(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c199;
  printLine(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c274;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c28b;
  memmove(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c297;
  printLine(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63b_badSink(long *plParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = *plParm1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_63b_goodG2BSink(long *plParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = *plParm1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [16];
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_28;
    local_28[0] = 0;
    local_c = local_c + 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_18,&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [32];
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c = local_c + 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_18,&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64b_badSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppvParm1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64b_goodG2BSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppvParm1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [16];
  undefined local_28 [24];
  undefined *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  globalReturnsTrueOrFalse();
  local_38[0] = 0;
  local_10 = local_38;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_badSink(local_18,uParm2,local_18)
  ;
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_badSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_goodG2BSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cd45;
  local_20 = local_30;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cd8d;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ce0d) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ce4c;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ce94;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cf47;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cf8f;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  size_t local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d063;
  local_40 = local_48;
  local_38 = local_48;
  local_28 = local_48;
  local_50 = strlen(auStack112[1],
                    *(undefined *)
                     (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_50 + 1) {
    *(undefined *)((long)local_48 + local_20) = *(undefined *)((long)auStack112[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d0ab;
  printLine(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  size_t local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d165;
  local_40 = local_48;
  local_38 = local_48;
  local_30 = local_48;
  local_50 = strlen(auStack112[1],
                    *(undefined *)
                     (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_50 + 1) {
    *(undefined *)((long)local_48 + local_20) = *(undefined *)((long)auStack112[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d1ad;
  printLine(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d550;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d567;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d573;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d5ff;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d634;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d64b;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d657;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d70c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d723;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d72f;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d7da;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d867;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54e_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54e_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_badSink(local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_65_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40de7f;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40df0c;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53d_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53d_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52c_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52c_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e336;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e34d;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e359;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e403;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e41a;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e426;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e4d0;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e4e7;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e4f3;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_bad(void)

{
  int iVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [16];
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  globalReturnsTrueOrFalse();
  local_48[0] = 0;
  local_10 = local_48;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e901) */

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54e_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54e_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40edf4;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ee3c;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ee53;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ee5f;
  printLine(local_20);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40eee0;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    *(undefined *)local_30 = 0;
  }
  else {
    *(undefined *)local_30 = 0;
  }
  local_20 = local_30;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ef28;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ef3f;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ef4b;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52c_badSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52c_goodG2BSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_bad(void)

{
  int iVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f48a;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f4a1;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f4ad;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40f539;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40f56e;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40f585;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40f591;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f646;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f65d;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f669;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f789;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_badSink(local_28,0x10,local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f81f;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65b_goodG2BSink
            (local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f8e0;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f928;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40f9b4;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40f9e9;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40fa31;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fae6;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fb2e;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66b_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(local_10,(char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66b_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(local_10,(char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [16];
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_28;
    local_28[0] = 0;
    local_c = local_c + 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_18,&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [32];
  undefined *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_38;
    local_38[0] = 0;
    local_c = local_c + 1;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_18,&local_48,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fecc;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ff03;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ff1a;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ff26;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ffa7;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ffb5;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ffea;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410001;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41000d;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41008e;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4100c5;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4100dc;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4100e8;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4101ac;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4101c3;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4101cf;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410279;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410290;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41029c;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410346;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41035d;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410369;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_38 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4104de;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66b_badSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_10 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410573;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66b_goodG2BSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410805;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41081c;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410828;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (globalFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4108b3;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4108e8;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4108ff;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41090b;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4109bf;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4109d6;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4109e2;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410aa6;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410aee;
  printLine(local_38);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410b98;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410be0;
  printLine(local_38);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410c8a;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410cd2;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410d97;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410dae;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410dba;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410e65;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410e7c;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410e88;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410f29;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410fb6;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4110fb;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411112;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41111e;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4111c9;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4111e0;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4111ec;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52c_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52c_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51b_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51b_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_16_good(void)

{
  goodG2B();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_bad(void)

{
  int iVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41170b;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68b_badSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4117a1;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68b_goodG2BSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41183e;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4118cb;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x411958;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  else {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4119a0;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4119e8;
  printLine(local_20);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x411a69;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    *(undefined *)local_38 = 0;
  }
  else {
    *(undefined *)local_38 = 0;
  }
  local_20 = local_38;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x411ab1;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x411af9;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411c28;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411cb5;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_30 = 0;
    local_1c = local_1c + 1;
    local_28 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411ee5;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411efc;
  memmove(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411f08;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_38 = 0;
    local_1c = local_1c + 1;
    local_28 = local_38;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411fc5;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411fdc;
  memmove(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411fe8;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4122c2;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4122f9;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x412341;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4123c2;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  else {
    auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4123d0;
    printLine("Benign, fixed string");
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x412405;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41244d;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4124ce;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x412505;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41254d;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412611;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412659;
  printLine(local_38);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412703;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41274b;
  printLine(local_38);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4127f5;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41283d;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_badSink
            (local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004129ad) */

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412b43;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412b8b;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (globalFalse == 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412c16;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412c4b;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412c93;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412d47;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412d8f;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412e98;
  local_20[1] = local_28;
  badSink(local_28,0x10,local_28);
  return;
}


void goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412f83;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413054;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4130e1;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66b_badSink(long lParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = *(long *)(lParm1 + 0x10);
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66b_goodG2BSink(long lParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = *(long *)(lParm1 + 0x10);
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41335b;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4133a3;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41344d;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413495;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53d_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53d_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void badSink(void)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_badData,(char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_goodG2BData,
         (char *)&local_28);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51b_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_51b_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64b_badSink(char **ppcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppcParm1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_18,(char *)&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64b_goodG2BSink(char **ppcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppcParm1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_18,(char *)&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004138d3) */

void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52c_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52c_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413c03;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_badSink(local_28,0x10,local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413c99;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65b_goodG2BSink
            (local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_TRUE != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413d59;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413d70;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413d7c;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FALSE == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413e07;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413e3c;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413e53;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413e5f;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_TRUE != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413f13;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413f2a;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413f36;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414067;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41407e;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41408a;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414135;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41414c;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414158;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414213;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41422a;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414236;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4142e1;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4142f8;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414304;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4143af;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4143c6;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4143d2;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_65b_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51b_badSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_51b_goodG2BSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64b_badSink(char **ppcParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppcParm1;
  strcpy(local_18,(char *)&local_28);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_64b_goodG2BSink(char **ppcParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppcParm1;
  strcpy(local_18,(char *)&local_28);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4146ef;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41477c;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51b_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51b_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414b35;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414b4c;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414b58;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414bd9) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c18;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c2f;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c3b;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414cef;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414d06;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414d12;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52c_goodG2BSink(uParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52c_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52c_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54e_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_54e_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_65b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415285;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41529c;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4152a8;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415334;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415369;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415380;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41538c;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415441;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415458;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415464;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41594c;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68b_badSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4159e2;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68b_goodG2BSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63b_badSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_63b_goodG2BSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_18;
  undefined *local_10;
  
  local_28 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  memmove(local_18,&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [32];
  undefined *local_28;
  undefined *local_18;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  memmove(local_18,&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415cd6;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415ced;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415cf9;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415da3;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415dba;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415dc6;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e70;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e87;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e93;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415f3e;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415fcb;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41608b;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4160a2;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4160ae;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (globalFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416139;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41616e;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416185;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416191;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416245;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41625c;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416268;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63b_badSink(char **ppcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63b_goodG2BSink(char **ppcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64b_badSink(char **ppcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppcParm1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_18,(char *)&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_64b_goodG2BSink(char **ppcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppcParm1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_18,(char *)&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41654b;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416593;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41663e;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416686;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_18;
  undefined *local_10;
  
  local_28 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  memcpy(local_18,&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [32];
  undefined *local_28;
  undefined *local_18;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  sVar1 = strlen((char *)&local_58);
  memcpy(local_18,&local_58,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54e_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54e_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a69;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a80;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a8c;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b37;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b4e;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b5a;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416c05;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416c1c;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416c28;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53d_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_53d_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63b_badSink(char **ppcParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(local_10,(char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_63b_goodG2BSink(char **ppcParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *ppcParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  strcpy(local_10,(char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_badSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_goodG2BSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51b_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_51b_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417180) */

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4172f2;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63b_badSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41737f;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54e_badSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54e_goodG2BSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417701;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417718;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417724;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (staticFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4177af;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4177e4;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4177fb;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417807;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4178bb;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4178d2;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4178de;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_TRUE != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4179ac;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4179c3;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4179cf;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FALSE == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417a5a;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417a8f;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417aa6;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417ab2;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_TRUE != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b66;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b7d;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b89;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417c89;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417d6b;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53d_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53d_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4180e5;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4180fc;
  strncpy(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418108;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4181c2;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4181d9;
  strncpy(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4181e5;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041829a) */

void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41846f;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418486;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418492;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41853c;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418553;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41855f;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418609;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418620;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41862c;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66b_badSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_66b_goodG2BSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  undefined *local_18;
  ulong local_10;
  
  local_18 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    local_18[local_10] = *(undefined *)((long)&local_58 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52c_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_52c_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_65b_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418b67;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418b9e;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418bb5;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418bc1;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418c42;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418c50;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418c85;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418c9c;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418ca8;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418d29;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418d60;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418d77;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418d83;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  ulong local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_38 = 0;
    local_1c = local_1c + 1;
    local_28 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418fe0;
  local_48 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_30 = 0;
  while (local_30 < local_48 + 1) {
    *(undefined *)((long)local_28 + local_30) = *(undefined *)((long)auStack96[1] + local_30);
    local_30 = local_30 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419028;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  ulong local_30;
  undefined2 *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  local_1c = 0;
  while (local_1c < 1) {
    *(undefined *)local_40 = 0;
    local_1c = local_1c + 1;
    local_28 = local_40;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4190e5;
  local_48 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_30 = 0;
  while (local_30 < local_48 + 1) {
    *(undefined *)((long)local_28 + local_30) = *(undefined *)((long)auStack96[1] + local_30);
    local_30 = local_30 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41912d;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4191be;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x419206;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41921d;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x419229;
  printLine(local_20);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4192aa;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    *(undefined *)local_30 = 0;
  }
  else {
    *(undefined *)local_30 = 0;
  }
  local_20 = local_30;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4192f2;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x419309;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x419315;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_12_good(void)

{
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419439;
  local_20[1] = local_28;
  badSink(local_28,0x10,local_28);
  return;
}


void goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419549;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53d_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_53d_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4196b4;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4196eb;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x419702;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41970e;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41978f;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41979d;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4197d2;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4197e9;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4197f5;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x419876;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4198ad;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4198c4;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4198d0;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419994;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4199ab;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4199b7;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419a61;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419a78;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419a84;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419b2e;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419b45;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419b51;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419da7;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419dbe;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419dca;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419e74;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419e8b;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419e97;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419f29) */

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53d_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53d_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a2d1;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a2e8;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a2f4;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a380;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a3b5;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a3cc;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a3d8;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a48d;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a4a4;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a4b0;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_bad(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_48 [24];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  strncpy(local_28,(char *)&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  char local_58 [40];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  strncpy(local_28,(char *)&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a6b1;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a6f9;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a785;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a7ba;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a802;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticFive == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a8b7;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a8ff;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66b_badSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_66b_goodG2BSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67b_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pcParm1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67b_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pcParm1;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ae97;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41aeae;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41aeba;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41af64;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41af7b;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41af87;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_good(void)

{
  goodG2B();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b02e;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b065;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b07c;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b088;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b109;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b117;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b14c;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b163;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b16f;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b1f0;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b227;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b23e;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41b24a;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  strncpy(local_20,(char *)&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  strncpy(local_20,(char *)&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_badSink;
  local_18 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_badSink
            (local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_bad(void)

{
  undefined local_28 [16];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_38 [32];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_badSink(char *pcParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pcParm1;
  strcpy(pcParm1,(char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_goodG2BSink(char *pcParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pcParm1;
  strcpy(pcParm1,(char *)&local_28);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041bbe3) */

void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [24];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  strcpy(local_20,(char *)&local_58);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [40];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  strcpy(local_20,(char *)&local_58);
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_bad(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  undefined local_48 [16];
  undefined *local_38;
  size_t local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_38 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_38;
  local_18 = local_38;
  local_28 = strlen((char *)&local_68);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    local_20[local_10] = *(undefined *)((long)&local_68 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  undefined local_58 [32];
  undefined *local_38;
  size_t local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_38 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_38;
  local_18 = local_38;
  local_28 = strlen((char *)&local_68);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    local_20[local_10] = *(undefined *)((long)&local_68 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bf62;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bf79;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bf85;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (staticFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c010;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c045;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c05c;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c068;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c11c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c133;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c13f;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c273;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c355;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_bad(void)

{
  undefined local_28 [16];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_38 [32];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c45c;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c4e9;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_58;
  size_t local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_58 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_58 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c5af;
  local_40 = local_58;
  local_38 = local_58;
  local_28 = local_58;
  local_48 = strlen(auStack112[1],
                    *(undefined *)
                     (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_48 + 1) {
    *(undefined *)((long)local_40 + local_20) = *(undefined *)((long)auStack112[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c5f7;
  printLine(local_40);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_58;
  size_t local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_58 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_58 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c6b1;
  local_40 = local_58;
  local_38 = local_58;
  local_30 = local_58;
  local_48 = strlen(auStack112[1],
                    *(undefined *)
                     (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_48 + 1) {
    *(undefined *)((long)local_40 + local_20) = *(undefined *)((long)auStack112[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c6f9;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c7f2;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c809;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c815;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c8a1;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c8d6;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c8ed;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c8f9;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c9ae;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c9c5;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c9d1;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52c_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52c_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cb70;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cb87;
  strncpy(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cb93;
  printLine(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cc6e;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cc85;
  strncpy(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cc91;
  printLine(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cd5b;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cd72;
  memcpy(local_38,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cd7e;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_48;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ce38;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ce4f;
  memcpy(local_38,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ce5b;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66b_badSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_66b_goodG2BSink(long lParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *(void **)(lParm1 + 0x10);
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64b_badSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppvParm1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_64b_goodG2BSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppvParm1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54e_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_54e_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_bad(void)

{
  undefined local_48 [16];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_58 [32];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_38 [16];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  strcpy(local_28,(char *)&local_58);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  char local_48 [32];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_28;
  local_10 = local_28;
  strcpy(local_28,(char *)&local_58);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d342;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d38a;
  printLine(local_38);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d435;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d47d;
  printLine(local_38);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  ulong local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_38 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d528;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d570;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54e_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_54e_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d775;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d78c;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d798;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d818) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d857;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d86e;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d87a;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d92d;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d944;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d950;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41da24;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41da3b;
  strncpy(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41da47;
  printLine(local_40);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41db01;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41db18;
  strncpy(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41db24;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dbce;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_badSink(local_28,0x10,local_28)
  ;
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dc64;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65b_goodG2BSink
            (local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dffd;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e045;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (staticFalse == 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e0d0;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e105;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e14d;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (staticTrue != 0) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e201;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e249;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e440;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e547;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68b_badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68b_goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_68_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64b_badSink(long *plParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_28;
  long local_20;
  long *local_18;
  ulong local_10;
  
  local_20 = *plParm1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = plParm1;
  local_28 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    *(undefined *)(local_20 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_64b_goodG2BSink(long *plParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_28;
  long local_20;
  long *local_18;
  ulong local_10;
  
  local_20 = *plParm1;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = plParm1;
  local_28 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_28 + 1) {
    *(undefined *)(local_20 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66b_badSink(long lParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = *(long *)(lParm1 + 0x10);
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66b_goodG2BSink(long lParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = *(long *)(lParm1 + 0x10);
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (globalFive == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_bad(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  undefined local_48 [24];
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined **local_18;
  undefined **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  memcpy(local_28,&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  undefined local_58 [40];
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined **local_18;
  undefined **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_30 = local_28;
  sVar1 = strlen((char *)&local_68);
  memcpy(local_28,&local_68,sVar1 + 1);
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52c_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52c_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memmove(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memmove(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41ef8a;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_badSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f020;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_goodG2BSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63b_badSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_63b_goodG2BSink
               (void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pvParm1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pvParm1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [16];
  char local_28 [24];
  char *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_38[0] = 0;
  local_10 = local_38;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68b_badSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_badData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68b_goodG2BSink(void)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_68_goodG2BData;
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_38 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41f72d;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66b_badSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_10 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41f7c2;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66b_goodG2BSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f883;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f89a;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f8a6;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f932;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f967;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f97e;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f98a;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FIVE == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41fa3f;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41fa56;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41fa62;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_bad(void)

{
  int iVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [16];
  char local_28 [24];
  char *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_38[0] = 0;
  local_10 = local_38;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41fbfb;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41fc88;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fed2) */

void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_bad(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  local_20 = local_38;
  local_38[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  memcpy(local_20,&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  undefined *local_20;
  undefined *local_18;
  undefined *local_10;
  
  local_20 = local_48;
  local_48[0] = 0;
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_18 = local_20;
  local_10 = local_20;
  sVar1 = strlen((char *)&local_58);
  memcpy(local_20,&local_58,sVar1 + 1);
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x420326;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4203b3;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_bad(void)

{
  undefined local_28 [16];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_38 [32];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_01_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_badData = local_28;
  local_28[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_goodG2BData = local_38;
  local_38[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53d_badSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_53d_goodG2BSink(char *pcParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  strncpy(pcParm1,(char *)&local_18,sVar1 + 1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_bad(void)

{
  int iVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_bad(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar2 = strlen((char *)&local_48);
  strncpy(local_10,(char *)&local_48,sVar2 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_28 [16];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_28;
  local_28[0] = 0;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_38 [32];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_38;
  local_38[0] = 0;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_bad(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_38 [24];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_58;
  undefined2 local_50;
  undefined local_4e;
  undefined local_48 [40];
  size_t local_20;
  ulong local_18;
  undefined *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  local_58 = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  local_20 = strlen((char *)&local_58);
  local_18 = 0;
  while (local_18 < local_20 + 1) {
    local_10[local_18] = *(undefined *)((long)&local_58 + local_18);
    local_18 = local_18 + 1;
  }
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420e75;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420e8c;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420e98;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420f43;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420f5a;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420f66;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_badSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_goodG2BSink(long lParm1)

{
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  size_t local_18;
  ulong local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_18 = strlen((char *)&local_28);
  local_10 = 0;
  while (local_10 < local_18 + 1) {
    *(undefined *)(lParm1 + local_10) = *(undefined *)((long)&local_28 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(lParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_bad(void)

{
  undefined8 local_78;
  undefined2 local_70;
  undefined local_6e;
  undefined local_58 [24];
  undefined *local_40;
  size_t local_38;
  undefined *local_30;
  undefined *local_28;
  undefined **local_20;
  undefined **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_30 = local_58;
  local_58[0] = 0;
  local_78 = 0x4141414141414141;
  local_70 = 0x4141;
  local_6e = 0;
  local_28 = local_30;
  local_40 = local_30;
  local_38 = strlen((char *)&local_78);
  local_10 = 0;
  while (local_10 < local_38 + 1) {
    local_30[local_10] = *(undefined *)((long)&local_78 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  undefined8 local_78;
  undefined2 local_70;
  undefined local_6e;
  undefined local_68 [40];
  undefined *local_40;
  size_t local_38;
  undefined *local_30;
  undefined *local_28;
  undefined **local_20;
  undefined **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_30 = local_68;
  local_68[0] = 0;
  local_78 = 0x4141414141414141;
  local_70 = 0x4141;
  local_6e = 0;
  local_28 = local_30;
  local_40 = local_30;
  local_38 = strlen((char *)&local_78);
  local_10 = 0;
  while (local_10 < local_38 + 1) {
    local_30[local_10] = *(undefined *)((long)&local_78 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4213cf;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x421417;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x42142e;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x42143a;
  printLine(local_20);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar3 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar3 * 0x7ffffffffffffff8 + lVar4 * 0x7ffffffffffffff8;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4214bb;
  iVar2 = globalReturnsTrueOrFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    *(undefined *)local_30 = 0;
  }
  else {
    *(undefined *)local_30 = 0;
  }
  local_20 = local_30;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x421503;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x42151a;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x421526;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_bad(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53d_badSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_53d_goodG2BSink(char *pcParm1)

{
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  strcpy(pcParm1,(char *)&local_18);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_badSink(void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppvParm1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_goodG2BSink
               (void **ppvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_18;
  void **local_10;
  
  local_18 = *ppvParm1;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = ppvParm1;
  sVar1 = strlen((char *)&local_28);
  memmove(local_18,&local_28,sVar1 + 1);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_badSink(long lParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = lParm1;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_goodG2BSink(long lParm1)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_38 = 0x4141414141414141;
  local_30 = 0x4141;
  local_2e = 0;
  local_18 = lParm1;
  local_20 = strlen((char *)&local_38);
  local_10 = 0;
  while (local_10 < local_20 + 1) {
    *(undefined *)(local_18 + local_10) = *(undefined *)((long)&local_38 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53d_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_53d_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_51b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_18;
  undefined2 local_10;
  undefined local_e;
  
  local_18 = 0x4141414141414141;
  local_10 = 0x4141;
  local_e = 0;
  sVar1 = strlen((char *)&local_18);
  memcpy(pvParm1,&local_18,sVar1 + 1);
  printLine(pvParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421a4d;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421a64;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421a70;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421afc;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421b31;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421b48;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421b54;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421c09;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421c20;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421c2c;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421cd7;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421d64;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421e4b;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421e62;
  memcpy(local_48,auStack112 + 1,sVar3 + 1,
         *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421e6e;
  printLine(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack112 [2];
  undefined2 local_60;
  undefined local_5e;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 **local_28;
  undefined2 **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_60 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_48 = &local_60 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_48 = 0;
  auStack112[1] = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421f49;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421f60;
  memcpy(local_48,auStack112 + 1,sVar3 + 1,
         *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421f6c;
  printLine(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422027;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42203e;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42204a;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4220f5;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42210c;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422118;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_badSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pvParm1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_goodG2BSink(void *pvParm1)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  local_10 = pvParm1;
  sVar1 = strlen((char *)&local_28);
  memcpy(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_bad(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  undefined local_48 [24];
  size_t local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_48;
  local_48[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_18 = local_28;
  local_30 = strlen((char *)&local_68);
  local_10 = 0;
  while (local_10 < local_30 + 1) {
    local_28[local_10] = *(undefined *)((long)&local_68 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  undefined8 local_68;
  undefined2 local_60;
  undefined local_5e;
  undefined local_58 [40];
  size_t local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  ulong local_10;
  
  local_28 = local_58;
  local_58[0] = 0;
  local_68 = 0x4141414141414141;
  local_60 = 0x4141;
  local_5e = 0;
  local_20 = local_28;
  local_18 = local_28;
  local_30 = strlen((char *)&local_68);
  local_10 = 0;
  while (local_10 < local_30 + 1) {
    local_28[local_10] = *(undefined *)((long)&local_68 + local_10);
    local_10 = local_10 + 1;
  }
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_31_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422446;
  local_20[2] = local_20[0];
  badSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  strncpy(local_10,(char *)&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422538;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_good(void)

{
  goodG2B();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_bad(void)

{
  int iVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_28 [24];
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  char local_38 [40];
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  strcpy(local_10,(char *)&local_48);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_28;
    local_28[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_38;
    local_38[0] = 0;
  }
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_bad(void)

{
  undefined local_28 [16];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_28;
  local_28[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_38 [32];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_38;
  local_38[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x42298a;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51b_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422a17;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422ad6;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422aed;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422af9;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422b79) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422bb8;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422bcf;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422bdb;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422c8e;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422ca5;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422cb1;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422d85;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422d9c;
  memcpy(local_40,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422da8;
  printLine(local_40);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_40 = 0;
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422e62;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422e79;
  memcpy(local_40,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422e85;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422f49;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422f60;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422f6c;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (globalFalse == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422ff7;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x42302c;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x423043;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x42304f;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalTrue != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423103;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42311a;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423126;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_bad(void)

{
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x423233;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_badSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4232c8;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_goodG2BSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4233b2;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4233c9;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4233d5;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42347f;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423496;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4234a2;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_01_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_badData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4235a8;
  local_20[2] = local_20[0];
  badSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2BSink(void)

{
  size_t sVar1;
  undefined8 local_28;
  undefined2 local_20;
  undefined local_1e;
  void *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_goodG2BData;
  local_28 = 0x4141414141414141;
  local_20 = 0x4141;
  local_1e = 0;
  sVar1 = strlen((char *)&local_28);
  memmove(local_10,&local_28,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *apuStack48 [2];
  undefined ***local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x42369a;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_28 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4238c8;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4238df;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4238eb;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042396c) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4239ab;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4239c2;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4239ce;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_30 = 0;
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423a82;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423a99;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423aa5;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423b59;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_badSink(local_28,0x10,local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423bef;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65b_goodG2BSink
            (local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_bad(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_28 [24];
  undefined *local_10;
  
  local_10 = local_28;
  local_28[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t sVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined local_3e;
  undefined local_38 [40];
  undefined *local_10;
  
  local_10 = local_38;
  local_38[0] = 0;
  local_48 = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  sVar1 = strlen((char *)&local_48);
  memcpy(local_10,&local_48,sVar1 + 1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423d82;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423dca;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  else {
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x423e56;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x423e8b;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x423ed3;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack96 [2];
  undefined2 local_50;
  undefined local_4e;
  size_t local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulong local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_30 = &local_50 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_38 = &local_50 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (globalFive == 5) {
    *(undefined *)local_38 = 0;
    local_20 = local_38;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423f88;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423fd0;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack128 [2];
  undefined2 local_70;
  undefined local_6e;
  undefined2 *local_60;
  size_t local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 **local_30;
  undefined2 **local_28;
  ulong local_20;
  
  local_28 = &local_60;
  local_30 = &local_60;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_50 = &local_70 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_40 = &local_70 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_50 = 0;
  auStack128[1] = 0x4141414141414141;
  local_70 = 0x4141;
  local_6e = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4240c5;
  local_48 = local_50;
  local_38 = local_50;
  local_60 = local_50;
  local_58 = strlen(auStack128[1],
                    *(undefined *)
                     (auStack128 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_58 + 1) {
    *(undefined *)((long)local_50 + local_20) = *(undefined *)((long)auStack128[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42410d;
  printLine(local_50);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 auStack128 [2];
  undefined2 local_70;
  undefined local_6e;
  undefined2 *local_60;
  size_t local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 **local_30;
  undefined2 **local_28;
  ulong local_20;
  
  local_28 = &local_60;
  local_30 = &local_60;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_38 = &local_70 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_50 = &local_70 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  *(undefined *)local_50 = 0;
  auStack128[1] = 0x4141414141414141;
  local_70 = 0x4141;
  local_6e = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4241e8;
  local_48 = local_50;
  local_40 = local_50;
  local_60 = local_50;
  local_58 = strlen(auStack128[1],
                    *(undefined *)
                     (auStack128 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_58 + 1) {
    *(undefined *)((long)local_50 + local_20) = *(undefined *)((long)auStack128[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424230;
  printLine(local_50);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_bad(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_TRUE != 0) {
    *(undefined *)local_28 = 0;
    local_20 = local_28;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4242f4;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42430b;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424317;
  printLine(local_20);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar2 * 0x7ffffffffffffff8;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x29);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar2 * 0x7ffffffffffffff8 + lVar3 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_FALSE == 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  else {
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4243a2;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4243d7;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4243ee;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4243fa;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 auStack80 [2];
  undefined2 local_40;
  undefined local_3e;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x28)) / ZEXT816(0x10),0);
  local_28 = &local_40 + lVar1 * 0x7ffffffffffffff8;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x29)) / ZEXT816(0x10),0);
  local_30 = &local_40 + lVar1 * 0x7ffffffffffffff8 + lVar2 * 0x7ffffffffffffff8;
  if (GLOBAL_CONST_TRUE != 0) {
    *(undefined *)local_30 = 0;
    local_20 = local_30;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4244ae;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4244c5;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4244d1;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void printLine(char *pcParm1)

{
  if (pcParm1 != (char *)0x0) {
    puts(pcParm1);
  }
  return;
}


void printWLine(long lParm1)

{
  if (lParm1 != 0) {
    wprintf(L"%ls\n",lParm1);
  }
  return;
}


void printIntLine(uint uParm1)

{
  printf("%d\n",(ulong)uParm1);
  return;
}


void printShortLine(short sParm1)

{
  printf("%hd\n",(ulong)(uint)(int)sParm1);
  return;
}


void printFloatLine(float fParm1)

{
  printf((char *)(double)fParm1,&DAT_00431ac1);
  return;
}


void printLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printLongLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printSizeTLine(undefined8 uParm1)

{
  printf("%zu\n",uParm1);
  return;
}


void printHexCharLine(char cParm1)

{
  printf("%02x\n",(ulong)(uint)(int)cParm1);
  return;
}


void printWcharLine(undefined4 uParm1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = uParm1;
  printf("%ls\n",&local_18);
  return;
}


void printUnsignedLine(uint uParm1)

{
  printf("%u\n",(ulong)uParm1);
  return;
}


void printHexUnsignedCharLine(byte bParm1)

{
  printf("%02x\n",(ulong)bParm1);
  return;
}


void printDoubleLine(char *pcParm1)

{
  printf(pcParm1,&DAT_00431ade);
  return;
}


void printStructLine(uint *puParm1)

{
  printf("%d -- %d\n",(ulong)*puParm1,(ulong)puParm1[1]);
  return;
}


void printBytesLine(long lParm1,ulong uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < uParm2) {
    printf("%02x",(ulong)*(byte *)(local_10 + lParm1));
    local_10 = local_10 + 1;
  }
  puts("");
  return;
}


ulong decodeHexChars(long lParm1,ulong uParm2,long lParm3)

{
  long lVar1;
  ushort **ppuVar2;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2)] & 0x1000) == 0) break;
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2 + 1)] & 0x1000) == 0) {
      return local_10;
    }
    lVar1 = local_10 * 2 + lParm3;
    __isoc99_sscanf(lVar1,&DAT_00431aec,&local_14,lVar1);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


ulong decodeHexWChars(long lParm1,ulong uParm2,long lParm3)

{
  int iVar1;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8 + 4));
    if (iVar1 == 0) {
      return local_10;
    }
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00431af4,&local_14);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


undefined8 globalReturnsTrue(void)

{
  return 1;
}


undefined8 globalReturnsFalse(void)

{
  return 0;
}


ulong globalReturnsTrueOrFalse(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = rand();
  uVar2 = (uint)(iVar1 >> 0x1f) >> 0x1f;
  return (ulong)((iVar1 + uVar2 & 1) - uVar2);
}


void good1(void)

{
  return;
}


void good2(void)

{
  return;
}


void good3(void)

{
  return;
}


void good4(void)

{
  return;
}


void good5(void)

{
  return;
}


void good6(void)

{
  return;
}


void good7(void)

{
  return;
}


void good8(void)

{
  return;
}


void good9(void)

{
  return;
}


void bad1(void)

{
  return;
}


void bad2(void)

{
  return;
}


void bad3(void)

{
  return;
}


void bad4(void)

{
  return;
}


void bad5(void)

{
  return;
}


void bad6(void)

{
  return;
}


void bad7(void)

{
  return;
}


void bad8(void)

{
  return;
}


void bad9(void)

{
  return;
}


void internal_start(long lParm1,undefined8 uParm2)

{
  (**(code **)(lParm1 + 8))(*(undefined8 *)(lParm1 + 0x10),uParm2,*(undefined8 *)(lParm1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}


undefined8 stdThreadCreate(pthread_t pParm1,pthread_t pParm2,pthread_t **pppParm3)

{
  int iVar1;
  undefined8 uVar2;
  pthread_t local_18;
  pthread_t *local_10;
  
  *pppParm3 = (pthread_t *)0x0;
  local_10 = (pthread_t *)malloc(0x18);
  if (local_10 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_10[1] = pParm1;
    local_10[2] = pParm2;
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,internal_start,local_10);
    if (iVar1 == 0) {
      *local_10 = local_18;
      *pppParm3 = local_10;
      uVar2 = 1;
    }
    else {
      free(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}


ulong stdThreadJoin(pthread_t *ppParm1)

{
  int iVar1;
  void *local_10;
  
  iVar1 = pthread_join(*ppParm1,&local_10);
  return (ulong)(iVar1 == 0);
}


undefined8 stdThreadDestroy(void *pvParm1)

{
  free(pvParm1);
  return 1;
}


undefined8 stdThreadLockCreate(pthread_mutex_t **ppabParm1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *ppabParm1 = (pthread_mutex_t *)0x0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *ppabParm1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(ppabParm1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


void stdThreadLockAcquire(pthread_mutex_t *pabParm1)

{
  pthread_mutex_lock(pabParm1);
  return;
}


void stdThreadLockRelease(pthread_mutex_t *pabParm1)

{
  pthread_mutex_unlock(pabParm1);
  return;
}


void stdThreadLockDestroy(pthread_mutex_t *pabParm1)

{
  pthread_mutex_destroy(pabParm1);
  free(pabParm1);
  return;
}


void __libc_csu_init(EVP_PKEY_CTX *pEParm1,undefined8 uParm2,undefined8 uParm3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(pEParm1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)pEParm1 & 0xffffffff,uParm2,uParm3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}


void __libc_csu_fini(void)

{
  return;
}


void _fini(void)

{
  return;
}

