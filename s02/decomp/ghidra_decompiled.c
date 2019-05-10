
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


/* WARNING: Removing unreachable block (ram,0x0040405b) */

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041cf;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041e6;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4041f2;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404272) */

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4042b1;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4042c8;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4042d4;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404387;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40439e;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4043aa;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40447e;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404495;
  memmove(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4044a1;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40455b;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404572;
  memmove(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40457e;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404693;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4046aa;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4046b6;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404761;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404778;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404784;
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
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404ba2;
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
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404c37;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404cd4;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404d61;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405613;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40562a;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405636;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4056e1;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4056f8;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405704;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4057af;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4057c6;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4057d2;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4058a9;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4058c0;
  memcpy(local_28,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4058cc;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405989;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4059a0;
  memcpy(local_28,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4059ac;
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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405aab;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405b96;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406464;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4064fa;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406744;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40675b;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406767;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4067f2;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406827;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40683e;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40684a;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4068fe;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406915;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x406921;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406bd5;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406cb7;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x406d90;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x406e25;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406ec2;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406f4f;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407165;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40717c;
  memmove(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407188;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407242;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407259;
  memmove(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407265;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40761a;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4076a7;
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


/* WARNING: Removing unreachable block (ram,0x0040781a) */

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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407ca2;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407d94;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x407fb9;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40804e;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408114;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40812b;
  memcpy(local_40,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408137;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4081f1;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408208;
  memcpy(local_40,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408214;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_31_good(void)

{
  goodG2B();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4082d8;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408320;
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
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4083ab;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4083e0;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408428;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4084dc;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408524;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40875f;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4087ec;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4089a3;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408a30;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408ae7;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408b2f;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408bda;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408c22;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408e1a;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408e51;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408e68;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408e74;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408ef5;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408f03;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408f38;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408f4f;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408f5b;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x408fdc;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409013;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40902a;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409036;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4092eb;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409322;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40936a;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4093eb;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  else {
    auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4093f9;
    printLine("Benign, fixed string");
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40942e;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409476;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4094f7;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40952e;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409576;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409948;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4099d5;
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


/* WARNING: Removing unreachable block (ram,0x00409b0b) */

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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409cdb;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409dc6;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_44_good(void)

{
  goodG2B();
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409e63;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409ef0;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a14e;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a265;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good(void)

{
  goodG2B();
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a762;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a779;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a785;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a811;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a846;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a85d;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a869;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a91e;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a935;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a941;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40aaf5;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ab3d;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40abe7;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ac2f;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_01_good(void)

{
  goodG2B();
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40adda;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40ae67;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40af04;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40af91;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b052;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b069;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b075;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b101;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b136;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b14d;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b159;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b20e;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b225;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b231;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b326;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b33d;
  memmove(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b349;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b424;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b43b;
  memmove(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b447;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b73f;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b756;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b762;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b7ed;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b822;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b839;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40b845;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b8f9;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b910;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b91c;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c106;
  local_20 = local_30;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c14e;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c1ce) */

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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c20d;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c255;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c308;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c350;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c424;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c46c;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c526;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c56e;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c911;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c928;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c934;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40c9c0;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40c9f5;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40ca0c;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40ca18;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cacd;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cae4;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40caf0;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40cb9b;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40cc28;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ce4c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ce63;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ce6f;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40cefa;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40cf2f;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40cf46;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40cf52;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d006;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d01d;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d029;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_05_good(void)

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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d3c7;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d454;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d6b8;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d6cf;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d6db;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d785;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d79c;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d7a8;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d852;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d869;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d875;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40dfb6;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40dffe;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40e015;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40e021;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40e0a2;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40e0ea;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40e101;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40e10d;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e64c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e663;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e66f;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40e6fb;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40e730;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40e747;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40e753;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e808;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e81f;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e82b;
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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e94b;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e9e1;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ed71;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40eda8;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40edbf;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40edcb;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ee4c;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ee5a;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ee8f;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40eea6;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40eeb2;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ef33;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ef6a;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ef81;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ef8d;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f051;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f068;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f074;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f11e;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f135;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f141;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f1eb;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f202;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f20e;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f383;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f418;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f794;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f7dc;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f886;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f8ce;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f978;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f9c0;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40fa6b;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40faf8;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fc09;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fc20;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fc2c;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fcd7;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fcee;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fcfa;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ffd0;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410018;
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
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4100a3;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4100d8;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410120;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4101d4;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41021c;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410597;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41062d;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410774;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410801;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41088e;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4108d6;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41091e;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41099f;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4109e7;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410a2f;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_12_good(void)

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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410ad6;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410b0d;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410b24;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410b30;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410bb1;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410bbf;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410bf4;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410c0b;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410c17;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410c98;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410ccf;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410ce6;
  memcpy(local_20,auStack80 + 1,sVar5 + 1,
         *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410cf2;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410dd1;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410e5e;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41108e;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4110a5;
  memmove(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4110b1;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41116e;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411185;
  memmove(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411191;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41146b;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4114a2;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4114ea;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41156b;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  else {
    auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x411579;
    printLine("Benign, fixed string");
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4115ae;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4115f6;
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
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x411677;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_38;
    *(undefined *)local_38 = 0;
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4116ae;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4116f6;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4117ba;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411802;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4118ac;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4118f4;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41199e;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4119e6;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411c6f;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411c86;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411c92;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d3d;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d54;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d60;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_16_good(void)

{
  goodG2B();
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


/* WARNING: Removing unreachable block (ram,0x00411e26) */

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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411ff7;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4120e2;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4121b3;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412240;
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


/* WARNING: Removing unreachable block (ram,0x00412942) */

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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412af8;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412b8e;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412fcf;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41305c;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413372;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413464;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_45_good(void)

{
  goodG2B();
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413661;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413678;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413684;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413705) */

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413744;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41375b;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413767;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41381b;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413832;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41383e;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413caf;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413d3c;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413e31;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413e48;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413e54;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413ee0;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413f15;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413f2c;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413f38;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413fed;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414004;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414010;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4143d7;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41441f;
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
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4144ab;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4144e0;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414528;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4145dd;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414625;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_13_good(void)

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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4148af;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414945;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c05;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c1c;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414c28;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414cd2;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414ce9;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414cf5;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414d9f;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414db6;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x414dc2;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414e6d;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414efa;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414f97;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415024;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4150e4;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4150fb;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415107;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415192;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4151c7;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4151de;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4151ea;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41529e;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4152b5;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4152c1;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4155b6;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4155cd;
  strncpy(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4155d9;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415696;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4156ad;
  strncpy(local_28,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4156b9;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_17_good(void)

{
  goodG2B();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415774;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4157bc;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415867;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4158af;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_18_good(void)

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415b77;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415b8e;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415b9a;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415c25;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415c5a;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415c71;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415c7d;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415d31;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415d48;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415d54;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e19;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e30;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e3c;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415ee7;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415efe;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415f0a;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415fb5;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415fcc;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415fd8;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_15_good(void)

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


/* WARNING: Removing unreachable block (ram,0x004165e6) */

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
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416760;
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
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4167f5;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416956;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4169e3;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b97;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416bae;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416bba;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416c45;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416c7a;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416c91;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416c9d;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416d51;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416d68;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416d74;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416e74;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416f56;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4170eb;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417102;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41710e;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4171b9;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4171d0;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4171dc;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_16_good(void)

{
  goodG2B();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41747c;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417493;
  strncpy(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41749f;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417559;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417570;
  strncpy(local_38,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41757c;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_34_good(void)

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41779d;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4177b4;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4177c0;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41786a;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417881;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41788d;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417937;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41794e;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41795a;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417aeb;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b02;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b0e;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417b9a;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417bcf;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417be6;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417bf2;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417ca7;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417cbe;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417cca;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418155;
  local_48 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_30 = 0;
  while (local_30 < local_48 + 1) {
    *(undefined *)((long)local_28 + local_30) = *(undefined *)((long)auStack96[1] + local_30);
    local_30 = local_30 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41819d;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41825a;
  local_48 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_30 = 0;
  while (local_30 < local_48 + 1) {
    *(undefined *)((long)local_28 + local_30) = *(undefined *)((long)auStack96[1] + local_30);
    local_30 = local_30 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4182a2;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418333;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41837b;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418392;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41839e;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41841f;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418467;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41847e;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41848a;
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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4185ae;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4186be;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_44_good(void)

{
  goodG2B();
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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418764;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4187fa;
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


/* WARNING: Removing unreachable block (ram,0x004189f9) */

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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418c06;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418c3d;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418c54;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418c60;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418ce1;
  iVar2 = globalReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418cef;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418d24;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418d3b;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418d47;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418dc8;
  iVar2 = globalReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418dff;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418e16;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x418e22;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418ee6;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418efd;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418f09;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418fb3;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418fca;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418fd6;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419080;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419097;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4190a3;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4191a5;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4191bc;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4191c8;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419253;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419288;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41929f;
  memmove(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4192ab;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41935f;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419376;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419382;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4197c2;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4197d9;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4197e5;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41988f;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4198a6;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4198b2;
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


/* WARNING: Removing unreachable block (ram,0x00419944) */

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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419d74;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419dbc;
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
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419e48;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419e7d;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419ec5;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419f7a;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419fc2;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a568;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a57f;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a58b;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a635;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a64c;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a658;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_01_good(void)

{
  goodG2B();
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a8ab;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a8e2;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a8f9;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a905;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a986;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a994;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a9c9;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a9e0;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41a9ec;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41aa6d;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41aaa4;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41aabb;
  memmove(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41aac7;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41acd4;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41aceb;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41acf7;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ada2;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41adb9;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41adc5;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ae70;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ae87;
  memcpy(local_30,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ae93;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_15_good(void)

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b82c;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b843;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b84f;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b8da;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b90f;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b926;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b932;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b9e6;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41b9fd;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ba09;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41bb3d;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41bc1f;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41bd26;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41bdb3;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41be79;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bec1;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bf7b;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41bfc3;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_34_good(void)

{
  goodG2B();
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c088;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c09f;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c0ab;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c137;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c16c;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c183;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41c18f;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c244;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c25b;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c267;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c406;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c41d;
  strncpy(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c429;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c504;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c51b;
  strncpy(local_48,auStack112 + 1,sVar3 + 1,
          *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c527;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c5f1;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c608;
  memcpy(local_38,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c614;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c6ce;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c6e5;
  memcpy(local_38,auStack96 + 1,sVar3 + 1,
         *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41c6f1;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41c8fa;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *(undefined *)local_28 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41c931;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41c948;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41c954;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41c9d5;
  iVar2 = staticReturnsFalse(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  else {
    auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41c9e3;
    printLine("Benign, fixed string");
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41ca18;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41ca2f;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41ca3b;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41cabc;
  iVar2 = staticReturnsTrue(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *(undefined *)local_30 = 0;
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41caf3;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41cb0a;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41cb16;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ce09;
  local_28 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ce51;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cefc;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cf44;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41cfef;
  local_30 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_20 = 0;
  while (local_20 < local_40 + 1) {
    *(undefined *)((long)local_38 + local_20) = *(undefined *)((long)auStack96[1] + local_20);
    local_20 = local_20 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d037;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d192;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d1a9;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d1b5;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d235) */

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d274;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d28b;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d297;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d34a;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d361;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d36d;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d441;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d458;
  strncpy(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d464;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d51e;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  sVar3 = strlen(auStack96 + 1,
                 *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d535;
  strncpy(local_40,auStack96 + 1,sVar3 + 1,
          *(undefined *)(auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d541;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_31_good(void)

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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d74f;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d7e5;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dd6a;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ddb2;
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
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41de3d;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41de72;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41deba;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41df6e;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dfb6;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e1ad;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e2b4;
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
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e8fc;
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
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e991;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41ec5d;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41ecf3;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41eda9;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41edc0;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41edcc;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ee76;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ee8d;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ee99;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ef43;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ef5a;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41ef66;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41f673;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41f708;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f7c9;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f7e0;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f7ec;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f878;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f8ad;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f8c4;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41f8d0;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f985;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f99c;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41f9a8;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41fb41;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41fbce;
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


/* WARNING: Removing unreachable block (ram,0x0041fe18) */

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420a07;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420a1e;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420a2a;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420ad5;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420aec;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x420af8;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_18_good(void)

{
  goodG2B();
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x421369;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4213b1;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4213c8;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4213d4;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x421455;
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
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x42149d;
  sVar5 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe)
                );
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4214b4;
  strncpy(local_20,auStack80 + 1,sVar5 + 1,
          *(undefined *)(auStack80 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  auStack80[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4214c0;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4219e7;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4219fe;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421a0a;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421a96;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421acb;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421ae2;
  memcpy(local_20,auStack80 + 1,sVar4 + 1,
         *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421aee;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421ba3;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421bba;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421bc6;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421c71;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x421cfe;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421de5;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421dfc;
  memcpy(local_48,auStack112 + 1,sVar3 + 1,
         *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421e08;
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
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421ee3;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  sVar3 = strlen(auStack112 + 1,
                 *(undefined *)
                  (auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421efa;
  memcpy(local_48,auStack112 + 1,sVar3 + 1,
         *(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421f06;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421fc1;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421fd8;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x421fe4;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42208f;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4220a6;
  memmove(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4220b2;
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


/* WARNING: Removing unreachable block (ram,0x00422255) */

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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422900;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x42298d;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422a4c;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422a63;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422a6f;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422aef) */

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422b2e;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422b45;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422b51;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422c04;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422c1b;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422c27;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422cf5;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422d0c;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422d18;
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
    auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422da3;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack80[1] = 0x4141414141414141;
  local_40 = 0x4141;
  local_3e = 0;
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422dd8;
  sVar4 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe)
                );
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422def;
  strncpy(local_20,auStack80 + 1,sVar4 + 1,
          *(undefined *)(auStack80 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  auStack80[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x422dfb;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422eaf;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422ec6;
  strncpy(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422ed2;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422fa0;
  local_20 = local_30;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x422fe8;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423069) */

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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4230a8;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4230f0;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4231a4;
  local_20 = local_38;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4231ec;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_06_good(void)

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
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4232f9;
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
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x42338e;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423478;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42348f;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42349b;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423545;
  local_28 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42355c;
  strncpy(local_30,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423568;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x42366e;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x423760;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_45_good(void)

{
  goodG2B();
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42395a;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423971;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42397d;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004239fe) */

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423a3d;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423a54;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423a60;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423b14;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423b2b;
  memmove(local_20,auStack80 + 1,sVar3 + 1,
          *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423b37;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423d81;
  local_20 = local_28;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423d98;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423da4;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423e25) */

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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423e64;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423e7b;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423e87;
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
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423f3b;
  local_20 = local_30;
  sVar3 = strlen(auStack80 + 1,
                 *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe)
                );
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423f52;
  memcpy(local_20,auStack80 + 1,sVar3 + 1,
         *(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  auStack80[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x423f5e;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42402d;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424075;
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
    auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x424101;
    printLine("Benign, fixed string",0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack96[1] = 0x4141414141414141;
  local_50 = 0x4141;
  local_4e = 0;
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x424136;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x42417e;
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
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424233;
  local_40 = strlen(auStack96[1],
                    *(undefined *)
                     (auStack96 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_28 = 0;
  while (local_28 < local_40 + 1) {
    *(undefined *)((long)local_20 + local_28) = *(undefined *)((long)auStack96[1] + local_28);
    local_28 = local_28 + 1;
  }
  auStack96[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x42427b;
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
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424370;
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
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4243b8;
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
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x424493;
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
  auStack128[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4244db;
  printLine(local_50);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_32_good(void)

{
  goodG2B();
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
  printf((char *)(double)fParm1,&DAT_00431ac5);
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
  printf(pcParm1,&DAT_00431ae2);
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
    __isoc99_sscanf(lVar1,&DAT_00431af0,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00431af8,&local_14);
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

