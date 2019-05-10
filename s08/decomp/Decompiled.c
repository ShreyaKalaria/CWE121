
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00635ff8;
  if (PTR___gmon_start___00635ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400980(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00636010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00636018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00636020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00636028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00636030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00636038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00636040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00636048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00636050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00636058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00636060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00636068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00636070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00636078)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00636080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00636088)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00636090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00636098)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006360a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006360a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006360b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006360b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006360c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006360c8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00635ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400b57) */
/* WARNING: Removing unreachable block (ram,0x00400b61) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400b94) */
/* WARNING: Removing unreachable block (ram,0x00400b9e) */

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


/* WARNING: Removing unreachable block (ram,0x00400be4) */
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
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_42_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_42_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_21_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_21_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_42_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_42_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_42_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_42_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_21_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_21_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_21_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_21_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_42_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_42_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_21_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_21_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_42_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_42_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_42_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_42_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_21_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_21_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_21_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_21_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54_bad();
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4033d3;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x403460;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040351d) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52c_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52c_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_badData = local_48;
  local_48[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_goodG2BData = local_b8;
  local_b8[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_14_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (globalFive == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4037df;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x403823;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40382f;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (globalFive == 5) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4038a7;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40388f;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4038eb;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4038f7;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (globalFive == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x403963;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4039a7;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4039b3;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_32_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack144 [9];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  
  bVar4 = 0;
  local_20 = &local_48;
  local_28 = &local_48;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_48 = auStack144 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403a49;
  local_38 = local_48;
  local_30 = local_48;
  memset(local_48,0x41,99,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_38 + 99) = 0;
  *local_20 = local_38;
  local_40 = *local_28;
  auStack144[1] = 0;
  lVar2 = 5;
  puVar3 = auStack144 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403aa3;
  strcpy(auStack144 + 1,local_40,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403aaf;
  printLine(local_40);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack144 [9];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  
  bVar4 = 0;
  local_20 = &local_48;
  local_28 = &local_48;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_48 = auStack144 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403b2b;
  local_38 = local_48;
  local_30 = local_48;
  memset(local_48,0x41,0x31,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_38 + 0x31) = 0;
  *local_20 = local_38;
  local_40 = *local_28;
  auStack144[1] = 0;
  lVar2 = 5;
  puVar3 = auStack144 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403b85;
  strcpy(auStack144 + 1,local_40,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403b91;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = pcParm1;
  strcpy((char *)&local_48,pcParm1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = pcParm1;
  strcpy((char *)&local_48,pcParm1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64b_badSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 local_50 [7];
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_58 = 0;
  lVar1 = 5;
  puVar2 = local_50;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = ppcParm1;
  strcat((char *)&local_58,local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64b_goodG2BSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 local_50 [7];
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_58 = 0;
  lVar1 = 5;
  puVar2 = local_50;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = ppcParm1;
  strcat((char *)&local_58,local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x403f4e;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x403f65;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x403fc1;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x403fd8;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_16_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4040eb;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x404130;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40413c;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40419d;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4041e2;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4041ee;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_04_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x404268;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4042ac;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4042b8;
  printLine(local_28);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040430c) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40432e;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x404372;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40437e;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4043e8;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40442c;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x404438;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4044ec;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65b_badSink(local_28,0x10,local_28);
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
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404582;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65b_goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_07_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticFive == 5) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40463b;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404655;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404661;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (staticFive == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4046f0;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40471a;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404734;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x404740;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticFive == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4047ed;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404807;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404813;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_58 [64];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_58;
  local_58[0] = 0;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_c8 [176];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_c8;
  local_c8[0] = 0;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_09_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_bad(void)

{
  long lVar1;
  undefined *apuStack48 [2];
  undefined auStack32 [8];
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = auStack32 + lVar1 * -0x10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x404b82;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe));
  local_18[99] = 0;
  apuStack48[1] = local_18;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x404ba1;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined *apuStack48 [2];
  undefined auStack32 [8];
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = auStack32 + lVar1 * -0x10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x404bfd;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe));
  local_18[0x31] = 0;
  apuStack48[1] = local_18;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x404c1c;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68b_badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68b_goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badSource(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badGlobal != 0) {
    memset(pvParm1,0x41,99);
    *(undefined *)((long)pvParm1 + 99) = 0;
  }
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_goodG2B1Source(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_goodG2B1Global == 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_goodG2B2Source(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_goodG2B2Global != 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_03_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404e91;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404eab;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404eb7;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404f59;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404f73;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404f7f;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405021;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40503b;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405047;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_15_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_badData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_badData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x405258;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_badData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x405278;
  badSink();
  return;
}


void goodG2BSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_goodG2BData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_goodG2BData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40532e;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_goodG2BData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40534e;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_06_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4053f9;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40543d;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x405449;
  printLine(local_28);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040549e) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4054c0;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x405504;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x405510;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40557b;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4055bf;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4055cb;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_17_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack176;
  undefined local_a8 [8];
  undefined auStack160 [91];
  undefined local_45;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack160 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_38 = auStack160 + lVar2 * -0x10 + lVar1 * -0x10;
  local_1c = 0;
  while (local_1c < 1) {
    *local_30 = 0;
    local_1c = local_1c + 1;
    local_28 = local_30;
  }
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405731;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40574b;
  strcpy(local_28,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405757;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack176;
  undefined local_a8 [8];
  undefined auStack160 [91];
  undefined local_45;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack160 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_38 = auStack160 + lVar2 * -0x10 + lVar1 * -0x10;
  local_1c = 0;
  while (local_1c < 1) {
    *local_38 = 0;
    local_1c = local_1c + 1;
    local_28 = local_38;
  }
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40580c;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405826;
  strcpy(local_28,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405832;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52c_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52c_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_16_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badGlobal = 1;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405a90;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badSource
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405acd;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405ad9;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_goodG2B1Global = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405b3a;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_goodG2B1Source
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405b77;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405b83;
  printLine(local_28);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_goodG2B2Global = 1;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405be4;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_goodG2B2Source
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405c21;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405c2d;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x405ce1;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x405d77;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68b_goodG2BSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_16_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405e26;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405e40;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405e4c;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405eef;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405f09;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405f15;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406146;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4061db;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67b_goodG2BSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406278;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406305;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_02_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406372;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4063b6;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4063c2;
  printLine(local_28);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406423;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406467;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406473;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4064d4;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406518;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406524;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_18_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_10_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (globalTrue != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4066ae;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4066f2;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4066fe;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (globalFalse == 0) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x406775;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40675d;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4067b9;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4067c5;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (globalTrue != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406830;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406874;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406880;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406982;
  local_20[2] = local_20[0];
  badSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406a66;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **ppuStack48;
  undefined8 ****local_28;
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406b3f;
  local_20[0] = local_28;
  local_20[2] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406bd4;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67b_goodG2BSink
            (local_28,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_01_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406c41;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406c85;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406c91;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406cf2;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406d36;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406d42;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_12_bad(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [112];
  char local_48 [56];
  char *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_b8[0] = 0;
  local_10 = local_b8;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53d_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53d_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64b_badSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 local_50 [7];
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_58 = 0;
  lVar1 = 5;
  puVar2 = local_50;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = ppcParm1;
  strcpy((char *)&local_58,local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64b_goodG2BSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 local_50 [7];
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_58 = 0;
  lVar1 = 5;
  puVar2 = local_50;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = ppcParm1;
  strcpy((char *)&local_58,local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_15_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407112;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407157;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407163;
  printLine(local_28);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4071c4;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407209;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407215;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407276;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4072bb;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4072c7;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64b_badSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcat(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64b_goodG2BSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcat(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_31_bad(void)

{
  char local_138 [99];
  undefined local_d5;
  char local_58 [56];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_58;
  local_58[0] = 0;
  local_18 = local_20;
  local_10 = local_20;
  memset(local_138,0x43,99);
  local_d5 = 0;
  strcat(local_20,local_138);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  char local_138 [99];
  undefined local_d5;
  char local_c8 [168];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_c8;
  local_c8[0] = 0;
  local_18 = local_20;
  local_10 = local_20;
  memset(local_138,0x43,99);
  local_d5 = 0;
  strcat(local_20,local_138);
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_31_good(void)

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


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x407501;
  local_20 = local_28;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x40751b;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x40755f;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x40756b;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4075c0;
  local_20 = local_28;
  iVar2 = staticReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4075e6;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4075ce;
    printLine("Benign, fixed string");
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x40762a;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x407636;
  printLine(local_28);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x40768b;
  local_20 = local_28;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4076a5;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4076e9;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4076f5;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_11_bad(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53d_goodG2BSink(uParm1);
  return;
}


void * badSource(void *pvParm1)

{
  memset(pvParm1,0x41,99);
  *(undefined *)((long)pvParm1 + 99) = 0;
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40793d;
  local_20 = local_28;
  local_28 = (undefined8 *)badSource(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40797a;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407986;
  printLine(local_28);
  return;
}


void * goodG2BSource(void *pvParm1)

{
  memset(pvParm1,0x41,0x31);
  *(undefined *)((long)pvParm1 + 0x31) = 0;
  return pvParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407a10;
  local_20 = local_28;
  local_28 = (undefined8 *)goodG2BSource(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407a4d;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407a59;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_42_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_13_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_FIVE == 5) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407b16;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407b30;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407b3c;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (GLOBAL_CONST_FIVE == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407bcb;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407bf5;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407c0f;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407c1b;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_FIVE == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407cc8;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407ce2;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407cee;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_10_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65_bad(void)

{
  undefined local_88 [112];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65b_badSink;
  local_18 = local_88;
  memset(local_18,0x41,99);
  local_18[99] = 0;
  (*local_10)(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_88 [112];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65b_goodG2BSink;
  local_18 = local_88;
  memset(local_18,0x41,0x31);
  local_18[0x31] = 0;
  (*local_10)(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408005;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x408092;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_01_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53d_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53d_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_05_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (staticTrue != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40829a;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4082de;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4082ea;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (staticFalse == 0) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x408361;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x408349;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4083a5;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4083b1;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (staticTrue != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40841c;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x408460;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40846c;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63b_badSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63b_goodG2BSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4085dd;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4085f4;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_badSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4086a3;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4086ba;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68b_badSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_badData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_badData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68b_goodG2BSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_goodG2BData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_goodG2BData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_04_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_28 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408859;
  local_20 = local_28;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408873;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40887f;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408902) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408936;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408950;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40895c;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408a07;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408a21;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408a2d;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_18_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408aea;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408b04;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408b10;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408bb3;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408bcd;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408bd9;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_34_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack128 [9];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack128 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408c4a;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  local_38 = local_28;
  local_30 = local_28;
  auStack128[1] = 0;
  lVar2 = 5;
  puVar3 = auStack128 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408c9e;
  strcpy(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408caa;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack128 [9];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack128 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408d0b;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  local_38 = local_28;
  local_30 = local_28;
  auStack128[1] = 0;
  lVar2 = 5;
  puVar3 = auStack128 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408d5f;
  strcpy(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408d6b;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,local_10);
  printLine(local_10);
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


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_08_bad(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66_bad(void)

{
  undefined local_a8 [112];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_10 = local_a8;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_28 = local_10;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_a8 [112];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_10 = local_a8;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_28 = local_10;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409121;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40915e;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409178;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409184;
  printLine(local_20);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409208;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    *local_30 = 0;
  }
  else {
    *local_30 = 0;
  }
  local_20 = local_30;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409245;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40925f;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40926b;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52c_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52c_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_badData = local_10;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_goodG2BData = local_10;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54e_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54e_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66_bad(void)

{
  long lVar1;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar1 * -0x10;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x4095d0;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&uStack80 + lVar1 * 0x1ffffffffffffffe));
  local_18[99] = 0;
  local_38 = local_18;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x4095ef;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar1 * -0x10;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40964b;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&uStack80 + lVar1 * 0x1ffffffffffffffe));
  local_18[0x31] = 0;
  local_38 = local_18;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40966a;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66b_goodG2BSink(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409788;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4097b4;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4097ce;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4097da;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40985e;
  iVar2 = globalReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40986c;
    printLine("Benign, fixed string");
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409896;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4098b0;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4098bc;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409940;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40996c;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409986;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409992;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_02_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409a4e;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409a68;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409a74;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409b16;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409b30;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409b3c;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409bde;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409bf8;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409c04;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66b_badSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66b_goodG2BSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_10_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalTrue != 0) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409d70;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409d8a;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409d96;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (globalFalse == 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409e24;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409e4e;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409e68;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409e74;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalTrue != 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409f20;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409f3a;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409f46;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64b_badSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64b_goodG2BSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_51b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_01_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a18a;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a1a4;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a1b0;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a252;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a26c;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a278;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53d_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53d_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63b_badSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63b_goodG2BSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68b_badSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_badData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_badData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68b_goodG2BSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_goodG2BData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_goodG2BData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a533;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a5c0;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52_good(void)

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


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a666;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a692;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a6ac;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a6b8;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a73c;
  iVar2 = staticReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a74a;
    printLine("Benign, fixed string");
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a774;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a78e;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a79a;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a81e;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a84a;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a864;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a870;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_31_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack128 [9];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack128 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40a8eb;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  local_30 = local_28;
  local_38 = local_28;
  auStack128[1] = 0;
  lVar2 = 5;
  puVar3 = auStack128 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40a93f;
  strcpy(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40a94b;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack128 [9];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack128 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40a9ac;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  local_30 = local_28;
  local_38 = local_28;
  auStack128[1] = 0;
  lVar2 = 5;
  puVar3 = auStack128 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40aa00;
  strcpy(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40aa0c;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40aba3;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40ac30;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52c_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52c_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40af02;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_badData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40af22;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68b_badSink();
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40af7e;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_goodG2BData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40af9e;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_58 [64];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65b_badSink;
  local_18 = local_58;
  local_58[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65b_badSink(local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_c8 [176];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65b_goodG2BSink;
  local_18 = local_c8;
  local_c8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_07_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b21a;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b231;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b28d;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b2a4;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_05_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_17_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack176;
  undefined local_a8 [8];
  undefined auStack160 [91];
  undefined local_45;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack160 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_38 = auStack160 + lVar2 * -0x10 + lVar1 * -0x10;
  local_1c = 0;
  while (local_1c < 1) {
    *local_30 = 0;
    local_1c = local_1c + 1;
    local_28 = local_30;
  }
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b557;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b571;
  strcat(local_28,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b57d;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack176;
  undefined local_a8 [8];
  undefined auStack160 [91];
  undefined local_45;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  int local_1c;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack160 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_38 = auStack160 + lVar2 * -0x10 + lVar1 * -0x10;
  local_1c = 0;
  while (local_1c < 1) {
    *local_38 = 0;
    local_1c = local_1c + 1;
    local_28 = local_38;
  }
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b632;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b64c;
  strcat(local_28,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b658;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54e_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_54e_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void badSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_badData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_badData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_goodG2BData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_goodG2BData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_goodG2BData = local_10;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_45_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b92b;
  local_20[1] = local_28;
  badSink(local_28,0x10,local_28);
  return;
}


void goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
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
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ba08;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_17_bad(void)

{
  char local_138 [99];
  undefined local_d5;
  char local_58 [64];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_58;
    local_58[0] = 0;
    local_c = local_c + 1;
  }
  memset(local_138,0x43,99);
  local_d5 = 0;
  strcat(local_18,local_138);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  char local_138 [99];
  undefined local_d5;
  char local_c8 [176];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_c8;
    local_c8[0] = 0;
    local_c = local_c + 1;
  }
  memset(local_138,0x43,99);
  local_d5 = 0;
  strcat(local_18,local_138);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_31_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack176;
  undefined local_a8 [8];
  undefined auStack160 [91];
  undefined local_45;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_40 = auStack160 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack160 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_40 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bbbb;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bbd5;
  strcat(local_40,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bbe1;
  printLine(local_40);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack176;
  undefined local_a8 [8];
  undefined auStack160 [91];
  undefined local_45;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack160 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_40 = auStack160 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_40 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bc93;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bcad;
  strcat(local_40,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40bcb9;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52c_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52c_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40bdcf;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_badData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40bdef;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68b_badSink();
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40be4b;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_goodG2BData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40be6b;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63b_badSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *ppcParm1;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63b_goodG2BSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *ppcParm1;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_04_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bfe8) */

void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_07_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (staticFive == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (staticTrue != 0) {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (staticFalse == 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (staticTrue != 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61b_badSource(void *pvParm1)

{
  memset(pvParm1,0x41,99);
  *(undefined *)((long)pvParm1 + 99) = 0;
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61b_goodG2BSource(void *pvParm1)

{
  memset(pvParm1,0x41,0x31);
  *(undefined *)((long)pvParm1 + 0x31) = 0;
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_03_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40c5ff;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40c616;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40c672;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40c689;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_18_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_d8;
  undefined8 local_d0 [7];
  char local_98 [112];
  char *local_28;
  char *local_18;
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_98;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_28 = local_10;
  local_18 = local_10;
  local_d8 = 0;
  lVar1 = 5;
  puVar2 = local_d0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_d8,local_10);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_d8;
  undefined8 local_d0 [7];
  char local_98 [112];
  char *local_28;
  char *local_18;
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_98;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_28 = local_10;
  local_18 = local_10;
  local_d8 = 0;
  lVar1 = 5;
  puVar2 = local_d0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_d8,local_10);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_44_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ca43;
  local_20[1] = local_28;
  badSink(local_28,0x10,local_28);
  return;
}


void goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
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
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cb20;
  local_20[0] = local_28;
  goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_12_bad(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [112];
  char local_48 [56];
  char *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  globalReturnsTrueOrFalse();
  local_b8[0] = 0;
  local_10 = local_b8;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54e_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54e_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_15_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40cdae;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40cdf3;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40cdff;
  printLine(local_28);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ce60;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40cea5;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ceb1;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40cf12;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40cf57;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40cf63;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_11_bad(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_02_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * badSource(void *pvParm1)

{
  memset(pvParm1,0x41,99);
  *(undefined *)((long)pvParm1 + 99) = 0;
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d2b1;
  local_20 = local_28;
  local_28 = (undefined8 *)badSource(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d2ee;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d2fa;
  printLine(local_28);
  return;
}


void * goodG2BSource(void *pvParm1)

{
  memset(pvParm1,0x41,0x31);
  *(undefined *)((long)pvParm1 + 0x31) = 0;
  return pvParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d384;
  local_20 = local_28;
  local_28 = (undefined8 *)goodG2BSource(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d3c1;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d3cd;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_42_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_13_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_FIVE == 5) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d48a;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d4a4;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d4b0;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (GLOBAL_CONST_FIVE == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d53f;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d569;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d583;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d58f;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_FIVE == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d63c;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d656;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d662;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_09_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (GLOBAL_CONST_TRUE != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40d6e7;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40d72b;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40d737;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (GLOBAL_CONST_FALSE == 0) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d7ae;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d796;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d7f2;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d7fe;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (GLOBAL_CONST_TRUE != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40d869;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40d8ad;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40d8b9;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d933;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d94a;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d9a6;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d9bd;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_52_good(void)

{
  goodG2B();
  return;
}


void * badSource(void *pvParm1)

{
  if (badStatic != 0) {
    memset(pvParm1,0x41,99);
    *(undefined *)((long)pvParm1 + 99) = 0;
  }
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  badStatic = 1;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40da67;
  local_20 = local_28;
  local_28 = (undefined8 *)badSource(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40daa4;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40dab0;
  printLine(local_28);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  if (goodG2B1Static == 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pvParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  goodG2B1Static = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40db5a;
  local_20 = local_28;
  local_28 = (undefined8 *)goodG2B1Source(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40db97;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40dba3;
  printLine(local_28);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  if (goodG2B2Static != 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  return pvParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  goodG2B2Static = 1;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40dc41;
  local_20 = local_28;
  local_28 = (undefined8 *)goodG2B2Source(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40dc7e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40dc8a;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53d_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53d_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_07_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticFive == 5) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40de13;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40de2d;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40de39;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (staticFive == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40dec8;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40def2;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40df0c;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40df18;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticFive == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dfc5;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dfdf;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dfeb;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_05_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (staticTrue != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40e070;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40e0b4;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40e0c0;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (staticFalse == 0) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40e137;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40e11f;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40e17b;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40e187;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (staticTrue != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40e1f2;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40e236;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40e242;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e30f;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e326;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_badSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e3d5;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e3ec;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_03_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e49a;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e4b4;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e4c0;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e562;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e57c;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e588;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e62a;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e644;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e650;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e6ca;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e6e1;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e73d;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e754;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_18_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e803;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e81d;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e829;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e8cc;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e8e6;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e8f2;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack128 [9];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack128 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e963;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  local_38 = local_28;
  local_30 = local_28;
  auStack128[1] = 0;
  lVar2 = 5;
  puVar3 = auStack128 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e9b7;
  strcat(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e9c3;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack128 [9];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack128 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40ea24;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  local_38 = local_28;
  local_30 = local_28;
  auStack128[1] = 0;
  lVar2 = 5;
  puVar3 = auStack128 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40ea78;
  strcat(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40ea84;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_15_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_15_good(void)

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


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_08_bad(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_badData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_badData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40eecf;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_badData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40eeef;
  badSink();
  return;
}


void goodG2BSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_goodG2BData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_goodG2BData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40efa5;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_goodG2BData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40efc5;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f055;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f092;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f0ac;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f0b8;
  printLine(local_20);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f13c;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    *local_30 = 0;
  }
  else {
    *local_30 = 0;
  }
  local_20 = local_30;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f179;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f193;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f19f;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f2a4;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61b_badSource
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f2e1;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f2ed;
  printLine(local_28);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f344;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61b_goodG2BSource
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f381;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f38d;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_06_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f408;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f44c;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f458;
  printLine(local_28);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f4ad) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f4cf;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f513;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f51f;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f58a;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f5ce;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f5da;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f831;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f848;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f8a4;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f8bb;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54e_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54e_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66_bad(void)

{
  long lVar1;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar1 * -0x10;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40f9cd;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&uStack80 + lVar1 * 0x1ffffffffffffffe));
  local_18[99] = 0;
  local_38 = local_18;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40f9ec;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined auStack64 [8];
  undefined *local_38;
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar1 * -0x10;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40fa48;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&uStack80 + lVar1 * 0x1ffffffffffffffe));
  local_18[0x31] = 0;
  local_38 = local_18;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40fa67;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66b_goodG2BSink(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40faf7;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fb23;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fb3d;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fb49;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fbcd;
  iVar2 = globalReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fbdb;
    printLine("Benign, fixed string");
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fc05;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fc1f;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fc2b;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fcaf;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fcdb;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fcf5;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40fd01;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_02_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fdbd;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fdd7;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fde3;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fe85;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fe9f;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40feab;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ff4d;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ff67;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40ff73;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_13_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (GLOBAL_CONST_FIVE == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4100ea;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41012e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41013a;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (GLOBAL_CONST_FIVE == 5) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4101b2;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41019a;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4101f6;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x410202;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (GLOBAL_CONST_FIVE == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41026e;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4102b2;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4102be;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_34_bad(void)

{
  char local_148 [99];
  undefined local_e5;
  char local_68 [64];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_68;
  local_68[0] = 0;
  local_18 = local_28;
  local_10 = local_28;
  memset(local_148,0x43,99);
  local_e5 = 0;
  strcpy(local_18,local_148);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  char local_148 [99];
  undefined local_e5;
  char local_d8 [176];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_d8;
  local_d8[0] = 0;
  local_18 = local_28;
  local_10 = local_28;
  memset(local_148,0x43,99);
  local_e5 = 0;
  strcpy(local_18,local_148);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_01_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4104cc;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4104e6;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4104f2;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410594;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4105ae;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4105ba;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53d_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53d_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4106b8;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4106cf;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64b_badSink(&lStack32 + 1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41072b;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x410742;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64b_goodG2BSink(&lStack32 + 1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (globalFive == 5) {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (globalFive == 5) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (globalFive == 5) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_d8;
  undefined8 local_d0 [7];
  char local_98 [104];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  bVar3 = 0;
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = local_98;
  local_20 = local_30;
  memset(local_30,0x41,99);
  local_20[99] = 0;
  *local_10 = local_20;
  local_28 = *local_18;
  local_d8 = 0;
  lVar1 = 5;
  puVar2 = local_d0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_d8,local_28);
  printLine(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_d8;
  undefined8 local_d0 [7];
  char local_98 [104];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  bVar3 = 0;
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = local_98;
  local_20 = local_30;
  memset(local_30,0x41,0x31);
  local_20[0x31] = 0;
  *local_10 = local_20;
  local_28 = *local_18;
  local_d8 = 0;
  lVar1 = 5;
  puVar2 = local_d0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_d8,local_28);
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_09_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_TRUE != 0) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410c0f;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410c29;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410c35;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (GLOBAL_CONST_FALSE == 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410cc3;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410ced;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410d07;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x410d13;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_TRUE != 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410dbf;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410dd9;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410de5;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_02_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66_bad(void)

{
  undefined local_78 [64];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_78;
  local_78[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_e8 [176];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_e8;
  local_e8[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_15_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411183;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41119d;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4111a9;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41124c;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411266;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411272;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411315;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41132f;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41133b;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = pcParm1;
  strcat((char *)&local_48,pcParm1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = pcParm1;
  strcat((char *)&local_48,pcParm1);
  printLine(local_10);
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


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4114a5;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4114d1;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4114eb;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4114f7;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41157b;
  iVar2 = staticReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x411589;
    printLine("Benign, fixed string");
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4115b3;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4115cd;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4115d9;
  printLine(local_20);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar3 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar4 * -0x10 + lVar3 * -0x10;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41165d;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x411689;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4116a3;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4116af;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004117ac) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_c8;
  undefined8 local_c0 [7];
  char local_88 [104];
  char *local_20;
  char *local_18;
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_88;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_18 = local_10;
  local_20 = local_10;
  local_c8 = 0;
  lVar1 = 5;
  puVar2 = local_c0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_c8,local_10);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_c8;
  undefined8 local_c0 [7];
  char local_88 [104];
  char *local_20;
  char *local_18;
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_88;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_18 = local_10;
  local_20 = local_10;
  local_c8 = 0;
  lVar1 = 5;
  puVar2 = local_c0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_c8,local_10);
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_17_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [8];
  undefined8 *local_30;
  undefined8 *local_28;
  int local_1c;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_1c = 0;
  local_28 = local_30;
  while (local_1c < 1) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x411aa0;
    memset(local_30,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_30 + 99) = 0;
    local_1c = local_1c + 1;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x411aee;
  strcat(auStack112 + 1,local_30,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x411afa;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [8];
  undefined8 *local_30;
  undefined8 *local_28;
  int local_1c;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_1c = 0;
  local_28 = local_30;
  while (local_1c < 1) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x411b64;
    memset(local_30,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_30 + 0x31) = 0;
    local_1c = local_1c + 1;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x411bb2;
  strcat(auStack112 + 1,local_30,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x411bbe;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67_bad(void)

{
  undefined local_88 [112];
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_88;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_18 = local_10;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_88 [112];
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_88;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_18 = local_10;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_05_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticTrue != 0) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d18;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d32;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d3e;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (staticFalse == 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411dcc;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411df6;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411e10;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411e1c;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticTrue != 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411ec8;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411ee2;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411eee;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_03_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41211a;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4121ee;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68b_badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68b_goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_badSource(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_badGlobal != 0) {
    memset(pvParm1,0x41,99);
    *(undefined *)((long)pvParm1 + 99) = 0;
  }
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B1Source(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B1Global == 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B2Source(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B2Global != 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack192;
  undefined local_b8 [8];
  undefined auStack176 [91];
  undefined local_55;
  undefined *local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_48 = auStack176 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack176 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_48 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41246e;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412488;
  strcpy(local_38,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412494;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack192;
  undefined local_b8 [8];
  undefined auStack176 [91];
  undefined local_55;
  undefined *local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack176 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_48 = auStack176 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_48 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412546;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412560;
  strcpy(local_38,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41256c;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66b_badSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66b_goodG2BSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4126b3;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412740;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52c_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52c_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53d_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_53d_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_badGlobal = 1;
  local_10 = (char *)CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_badSource(local_10)
  ;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B1Global = 0;
  local_10 = (char *)CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B1Source
                               (local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B2Global = 1;
  local_10 = (char *)CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B2Source
                               (local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_badData = local_48;
  local_48[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_badData;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_goodG2BData = local_b8;
  local_b8[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_goodG2BData;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_32_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack144 [9];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  
  bVar4 = 0;
  local_20 = &local_48;
  local_28 = &local_48;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_48 = auStack144 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x412b90;
  local_38 = local_48;
  local_30 = local_48;
  memset(local_48,0x41,99,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_38 + 99) = 0;
  *local_20 = local_38;
  local_40 = *local_28;
  auStack144[1] = 0;
  lVar2 = 5;
  puVar3 = auStack144 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x412bea;
  strcat(auStack144 + 1,local_40,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x412bf6;
  printLine(local_40);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack144 [9];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  
  bVar4 = 0;
  local_20 = &local_48;
  local_28 = &local_48;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_48 = auStack144 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x412c72;
  local_38 = local_48;
  local_30 = local_48;
  memset(local_48,0x41,0x31,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_38 + 0x31) = 0;
  *local_20 = local_38;
  local_40 = *local_28;
  auStack144[1] = 0;
  lVar2 = 5;
  puVar3 = auStack144 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x412ccc;
  strcat(auStack144 + 1,local_40,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x412cd8;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412d3d;
  local_20 = local_28;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412d7a;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412d57;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412dbe;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412dca;
  printLine(local_28);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412e1f;
  local_20 = local_28;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412e5c;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412e39;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412ea0;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412eac;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66_bad(void)

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
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_38 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x412f55;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66b_badSink
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
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_10 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x412fea;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66b_goodG2BSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = pcParm1;
  strcat((char *)&local_48,pcParm1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = pcParm1;
  strcat((char *)&local_48,pcParm1);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (GLOBAL_CONST_FIVE == 5) {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (GLOBAL_CONST_FIVE == 5) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (GLOBAL_CONST_FIVE == 5) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_58 [64];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65b_badSink;
  local_18 = local_58;
  local_58[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65b_badSink(local_18,uParm2,local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_c8 [176];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65b_goodG2BSink;
  local_18 = local_c8;
  local_c8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_10_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalTrue != 0) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413437;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413451;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41345d;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (globalFalse == 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4134eb;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x413515;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41352f;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41353b;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalTrue != 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4135e7;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x413601;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41360d;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x413715;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41372c;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63b_badSink(&lStack32 + 1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x413788;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41379f;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63b_goodG2BSink(&lStack32 + 1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_04_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x413815;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x413859;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x413865;
  printLine(local_28);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004138b9) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4138db;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41391f;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41392b;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x413995;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4139d9;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4139e5;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_31_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack128 [9];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack128 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413a60;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  local_30 = local_28;
  local_38 = local_28;
  auStack128[1] = 0;
  lVar2 = 5;
  puVar3 = auStack128 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413ab4;
  strcat(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413ac0;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack128 [9];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack128 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413b21;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  local_30 = local_28;
  local_38 = local_28;
  auStack128[1] = 0;
  lVar2 = 5;
  puVar3 = auStack128 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413b75;
  strcat(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413b81;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_09_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_65b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_bad(void)

{
  long lVar1;
  undefined *apuStack48 [2];
  undefined auStack32 [8];
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = auStack32 + lVar1 * -0x10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x413de3;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe));
  local_18[99] = 0;
  apuStack48[1] = local_18;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x413e02;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined *apuStack48 [2];
  undefined auStack32 [8];
  undefined *local_18;
  undefined *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = auStack32 + lVar1 * -0x10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x413e5e;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe));
  local_18[0x31] = 0;
  apuStack48[1] = local_18;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x413e7d;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52c_goodG2BSink(uParm1);
  return;
}


void * badSource(void *pvParm1)

{
  if (badStatic != 0) {
    memset(pvParm1,0x41,99);
    *(undefined *)((long)pvParm1 + 99) = 0;
  }
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_21_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  badStatic = 1;
  local_10 = (char *)badSource(local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  if (goodG2B1Static == 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pvParm1;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  goodG2B1Static = 0;
  local_10 = (char *)goodG2B1Source(local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  if (goodG2B2Static != 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  return pvParm1;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  goodG2B2Static = 1;
  local_10 = (char *)goodG2B2Source(local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68b_badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68b_goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_badSource(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_badGlobal != 0) {
    memset(pvParm1,0x41,99);
    *(undefined *)((long)pvParm1 + 99) = 0;
  }
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_goodG2B1Source(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_goodG2B1Global == 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_goodG2B2Source(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_goodG2B2Global != 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_32_bad(void)

{
  char local_148 [99];
  undefined local_e5;
  char local_68 [56];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_68;
  local_68[0] = 0;
  local_20 = local_28;
  local_30 = local_28;
  memset(local_148,0x43,99);
  local_e5 = 0;
  strcpy(local_28,local_148);
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  char local_148 [99];
  undefined local_e5;
  char local_d8 [168];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_d8;
  local_d8[0] = 0;
  local_20 = local_28;
  local_30 = local_28;
  memset(local_148,0x43,99);
  local_e5 = 0;
  strcpy(local_28,local_148);
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_05_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (staticFalse == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (staticTrue != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52c_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52c_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4149dd;
  local_20 = local_28;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4149f7;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414a3b;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414a47;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414a9c;
  local_20 = local_28;
  iVar2 = globalReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414ac2;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414aaa;
    printLine("Benign, fixed string");
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414b06;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414b12;
  printLine(local_28);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414b67;
  local_20 = local_28;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414b81;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414bc5;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414bd1;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_badGlobal = 1;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414c4c;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_badSource
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414c89;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414c95;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_goodG2B1Global = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414cf6;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_goodG2B1Source
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414d33;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414d3f;
  printLine(local_28);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_goodG2B2Global = 1;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414da0;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_goodG2B2Source
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414ddd;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414de9;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414e9d;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414f33;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68b_goodG2BSink
            (uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_31_bad(void)

{
  char local_138 [99];
  undefined local_d5;
  char local_58 [56];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_58;
  local_58[0] = 0;
  local_18 = local_20;
  local_10 = local_20;
  memset(local_138,0x43,99);
  local_d5 = 0;
  strcpy(local_20,local_138);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  char local_138 [99];
  undefined local_d5;
  char local_c8 [168];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_20 = local_c8;
  local_c8[0] = 0;
  local_18 = local_20;
  local_10 = local_20;
  memset(local_138,0x43,99);
  local_d5 = 0;
  strcpy(local_20,local_138);
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67_bad(void)

{
  undefined local_58 [64];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_58;
  local_58[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_c8 [176];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_c8;
  local_c8[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (globalTrue != 0) {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (globalFalse == 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (globalTrue != 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_16_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41550f;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415554;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415560;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4155c1;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415606;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415612;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_16_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_badData = local_48;
  local_48[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_goodG2BData = local_b8;
  local_b8[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_06_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004157b6) */

void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_07_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (staticFive == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41596b;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4159af;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4159bb;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (staticFive == 5) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x415a33;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x415a1b;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x415a77;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x415a83;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (staticFive == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415aef;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415b33;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415b3f;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_03_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415bba;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415bfe;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415c0a;
  printLine(local_28);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415c6b;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415caf;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415cbb;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415d1c;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415d60;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415d6c;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_14_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalFive == 5) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e33;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e4d;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e59;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (globalFive == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415ee8;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415f12;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415f2c;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415f38;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalFive == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415fe5;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415fff;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41600b;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_32_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack192;
  undefined local_b8 [8];
  undefined auStack176 [91];
  undefined local_55;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined **local_28;
  undefined **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_48 = auStack176 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_38 = auStack176 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_48 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4160f8;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416112;
  strcpy(local_48,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41611e;
  printLine(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack192;
  undefined local_b8 [8];
  undefined auStack176 [91];
  undefined local_55;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined **local_28;
  undefined **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack176 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_48 = auStack176 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_48 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4161f1;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41620b;
  strcpy(local_48,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416217;
  printLine(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_18_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x416289;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4162cd;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4162d9;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41633b;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41637f;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41638b;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64b_badSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcat(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_64b_goodG2BSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcat(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_34_bad(void)

{
  char local_148 [99];
  undefined local_e5;
  char local_68 [64];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_68;
  local_68[0] = 0;
  local_18 = local_28;
  local_10 = local_28;
  memset(local_148,0x43,99);
  local_e5 = 0;
  strcat(local_18,local_148);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  char local_148 [99];
  undefined local_e5;
  char local_d8 [176];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_28 = local_d8;
  local_d8[0] = 0;
  local_18 = local_28;
  local_10 = local_28;
  memset(local_148,0x43,99);
  local_e5 = 0;
  strcat(local_18,local_148);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (GLOBAL_CONST_TRUE != 0) {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (GLOBAL_CONST_FALSE == 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (GLOBAL_CONST_TRUE != 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_13_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_16_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41695e;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416978;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416984;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a27;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a41;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416a4d;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_31_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack176;
  undefined local_a8 [8];
  undefined auStack160 [91];
  undefined local_45;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_40 = auStack160 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack160 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_40 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b0f;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b29;
  strcpy(local_40,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416b35;
  printLine(local_40);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack176;
  undefined local_a8 [8];
  undefined auStack160 [91];
  undefined local_45;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack160 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_40 = auStack160 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_40 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416be7;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416c01;
  strcpy(local_40,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416c0d;
  printLine(local_40);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64b_badSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 local_50 [7];
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_58 = 0;
  lVar1 = 5;
  puVar2 = local_50;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = ppcParm1;
  strcat((char *)&local_58,local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64b_goodG2BSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 local_50 [7];
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_58 = 0;
  lVar1 = 5;
  puVar2 = local_50;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = ppcParm1;
  strcat((char *)&local_58,local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416dae;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416e3b;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_06_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_28 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416f56;
  local_20 = local_28;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416f70;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416f7c;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417000) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417034;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41704e;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41705a;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417106;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417120;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41712c;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_13_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (GLOBAL_CONST_FIVE == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4171b2;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4171f6;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x417202;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (GLOBAL_CONST_FIVE == 5) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41727a;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417262;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4172be;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4172ca;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (GLOBAL_CONST_FIVE == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x417336;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41737a;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x417386;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66b_badSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66b_goodG2BSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65_bad(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack48;
  undefined ***local_28;
  undefined ***local_20 [2];
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4174e0;
  local_20[1] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65b_badSink(local_28,0x10,local_28);
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
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar1 * 0x1ffffffffffffffe;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = local_20 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe;
  *(undefined *)local_28 = 0;
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417576;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65b_goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4175e2;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4175f9;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x417655;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41766c;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_06_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004176fb) */

void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_16_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41790d;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x417924;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64b_badSink(&lStack32 + 1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x417980;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x417997;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64b_goodG2BSink(&lStack32 + 1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar4 = 0;
  local_10 = local_78;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar2 = 5;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar4 = 0;
  local_10 = local_78;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar2 = 5;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63b_badSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *ppcParm1;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63b_goodG2BSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *ppcParm1;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_09_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_TRUE != 0) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417cb9;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417cd3;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417cdf;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (GLOBAL_CONST_FALSE == 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417d6d;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417d97;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417db1;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417dbd;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (GLOBAL_CONST_TRUE != 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417e69;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417e83;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417e8f;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * badSource(void *pvParm1)

{
  if (badStatic != 0) {
    memset(pvParm1,0x41,99);
    *(undefined *)((long)pvParm1 + 99) = 0;
  }
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  badStatic = 1;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417f47;
  local_20 = local_28;
  local_28 = (undefined8 *)badSource(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417f84;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417f90;
  printLine(local_28);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  if (goodG2B1Static == 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pvParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  goodG2B1Static = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41803a;
  local_20 = local_28;
  local_28 = (undefined8 *)goodG2B1Source(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x418077;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x418083;
  printLine(local_28);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  if (goodG2B2Static != 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  return pvParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  goodG2B2Static = 1;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x418121;
  local_20 = local_28;
  local_28 = (undefined8 *)goodG2B2Source(local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41815e;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41816a;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_44_bad(void)

{
  undefined local_88 [112];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_88;
  memset(local_18,0x41,99);
  local_18[99] = 0;
  (*local_10)(local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  undefined local_88 [112];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_88;
  memset(local_18,0x41,0x31);
  local_18[0x31] = 0;
  (*local_10)(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54e_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54e_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66_bad(void)

{
  undefined local_78 [64];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_78;
  local_78[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_e8 [176];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_28 = local_e8;
  local_e8[0] = 0;
  local_10 = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_15_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41846e;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418488;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418494;
  printLine(local_30);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418537;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418551;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41855d;
  printLine(local_30);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418600;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41861a;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418626;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_18_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4186a2;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4186e6;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4186f2;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418754;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418798;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4187a4;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_10_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (globalFalse == 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (globalTrue != 0) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64b_badSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64b_goodG2BSink(char **ppcParm1)

{
  char local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  strcpy(local_18,local_88);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_03_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418a73;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418ab7;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418ac3;
  printLine(local_28);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418b24;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418b68;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418b74;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418bd5;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418c19;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418c25;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_01_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_65b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
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


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar4 = 0;
  local_10 = local_78;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar2 = 5;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar4 = 0;
  local_10 = local_78;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_b8 = 0;
  lVar2 = 5;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar4 = 0;
  local_10 = local_78;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar2 = 5;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_17_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [8];
  undefined8 *local_30;
  undefined8 *local_28;
  int local_1c;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_1c = 0;
  local_28 = local_30;
  while (local_1c < 1) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419114;
    memset(local_30,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_30 + 99) = 0;
    local_1c = local_1c + 1;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419162;
  strcpy(auStack112 + 1,local_30,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41916e;
  printLine(local_30);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [8];
  undefined8 *local_30;
  undefined8 *local_28;
  int local_1c;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_1c = 0;
  local_28 = local_30;
  while (local_1c < 1) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4191d8;
    memset(local_30,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_30 + 0x31) = 0;
    local_1c = local_1c + 1;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419226;
  strcpy(auStack112 + 1,local_30,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419232;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_05_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticTrue != 0) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4192ee;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419308;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419314;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (staticFalse == 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4193a2;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4193cc;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4193e6;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4193f2;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (staticTrue != 0) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41949e;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4194b8;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4194c4;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4195b6;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_badSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41968a;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41978a;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419817;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_02_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419884;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4198c8;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4198d4;
  printLine(local_28);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419935;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419979;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419985;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4199e6;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419a2a;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419a36;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_34_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack192;
  undefined local_b8 [8];
  undefined auStack176 [91];
  undefined local_55;
  undefined *local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_48 = auStack176 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack176 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_48 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419b02;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419b1c;
  strcat(local_38,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419b28;
  printLine(local_38);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack192;
  undefined local_b8 [8];
  undefined auStack176 [91];
  undefined local_55;
  undefined *local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20 = auStack176 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_48 = auStack176 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_48 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419bda;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419bf4;
  strcat(local_38,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419c00;
  printLine(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar4 = 0;
  local_10 = local_78;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar2 = 5;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar4 = 0;
  local_10 = local_78;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_b8 = 0;
  lVar2 = 5;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar4 = 0;
  local_10 = local_78;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar2 = 5;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_c8;
  undefined8 local_c0 [7];
  char local_88 [112];
  char *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = local_88;
  local_c = 0;
  while (local_c < 1) {
    memset(local_18,0x41,99);
    local_18[99] = 0;
    local_c = local_c + 1;
  }
  local_c8 = 0;
  lVar1 = 5;
  puVar2 = local_c0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_c8,local_18);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_c8;
  undefined8 local_c0 [7];
  char local_88 [112];
  char *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = local_88;
  local_c = 0;
  while (local_c < 1) {
    memset(local_18,0x41,0x31);
    local_18[0x31] = 0;
    local_c = local_c + 1;
  }
  local_c8 = 0;
  lVar1 = 5;
  puVar2 = local_c0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_c8,local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_17_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_bad(undefined8 uParm1)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_badData = local_20[0];
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a012;
  local_20[2] = local_20[0];
  badSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_goodG2BData = local_20[0];
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41a0f6;
  local_20[1] = local_20[0];
  goodG2BSink(uParm1,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_06_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_28 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a1ae;
  local_20 = local_28;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a1c8;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a1d4;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a258) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a28c;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a2a6;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a2b2;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a35e;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a378;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41a384;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_01_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a3ff;
  local_20 = local_28;
  memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 99) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a443;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a44f;
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a4b0;
  local_20 = local_28;
  memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_28 + 0x31) = 0;
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a4f4;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a500;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66b_badSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66b_goodG2BSink(long lParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53d_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53d_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65_bad(void)

{
  long lVar1;
  long alStack48 [2];
  long *local_20;
  long *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20 = alStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a6c4;
  local_18 = local_20;
  memset(local_20,0x41,99,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 99) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a6dc;
  (*local_10)(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long alStack48 [2];
  long *local_20;
  long *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20 = alStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a740;
  local_18 = local_20;
  memset(local_20,0x41,0x31,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 0x31) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a758;
  (*local_10)(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63b_badSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *ppcParm1;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63b_goodG2BSink(char **ppcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  local_10 = *ppcParm1;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a875;
  local_20 = local_28;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a8b2;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a88f;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a8f6;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a902;
  printLine(local_28);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a957;
  local_20 = local_28;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a994;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a971;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a9d8;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a9e4;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_12_good(void)

{
  goodG2B();
  return;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61b_badSource(void *pvParm1)

{
  memset(pvParm1,0x41,99);
  *(undefined *)((long)pvParm1 + 99) = 0;
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61b_goodG2BSource(void *pvParm1)

{
  memset(pvParm1,0x41,0x31);
  *(undefined *)((long)pvParm1 + 0x31) = 0;
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54e_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_54e_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_44_bad(void)

{
  long lVar1;
  long alStack48 [2];
  long *local_20;
  long *local_18;
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20 = alStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41aba3;
  local_18 = local_20;
  memset(local_20,0x41,99,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 99) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41abbb;
  (*local_10)(local_20);
  return;
}


void goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long alStack48 [2];
  long *local_20;
  long *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20 = alStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41ac72;
  local_18 = local_20;
  memset(local_20,0x41,0x31,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 0x31) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41ac8a;
  (*local_10)(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_09_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (GLOBAL_CONST_TRUE != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ad01;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ad45;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ad51;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (GLOBAL_CONST_FALSE == 0) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41adc8;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41adb0;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41ae0c;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41ae18;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (GLOBAL_CONST_TRUE != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ae83;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41aec7;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41aed3;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_badData = local_48;
  local_48[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_goodG2BData = local_b8;
  local_b8[0] = 0;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_45_good(void)

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


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b069;
  local_20 = local_28;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b083;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b0c7;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b0d3;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b128;
  local_20 = local_28;
  iVar2 = staticReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b14e;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b136;
    printLine("Benign, fixed string");
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b192;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b19e;
  printLine(local_28);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b1f3;
  local_20 = local_28;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b20d;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b251;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41b25d;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41b2d7;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41b2ee;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63b_badSink(&lStack32 + 1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41b34a;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41b361;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63b_goodG2BSink(&lStack32 + 1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68b_badSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68b_goodG2BSink(void)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  local_10 = (char *)CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61b_badSource
                               (local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  local_10 = (char *)CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61b_goodG2BSource
                               (local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_61_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b6a8;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b735;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (staticFive == 5) {
    memset(local_10,0x41,99);
    local_10[99] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (staticFive == 5) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  char local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  if (staticFive == 5) {
    memset(local_10,0x41,0x31);
    local_10[0x31] = 0;
  }
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b9d9;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41ba66;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_14_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63b_badSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63b_goodG2BSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_32_bad(void)

{
  char local_148 [99];
  undefined local_e5;
  char local_68 [56];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_68;
  local_68[0] = 0;
  local_20 = local_28;
  local_30 = local_28;
  memset(local_148,0x43,99);
  local_e5 = 0;
  strcat(local_28,local_148);
  printLine(local_28);
  return;
}


void goodG2B(void)

{
  char local_148 [99];
  undefined local_e5;
  char local_d8 [168];
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_28 = local_d8;
  local_d8[0] = 0;
  local_20 = local_28;
  local_30 = local_28;
  memset(local_148,0x43,99);
  local_e5 = 0;
  strcat(local_28,local_148);
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_44_bad(void)

{
  long lVar1;
  long alStack48 [2];
  long *local_20;
  long *local_18;
  code *local_10;
  
  local_10 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20 = alStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41bf07;
  local_18 = local_20;
  memset(local_20,0x41,99,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 99) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41bf1f;
  (*local_10)(local_20);
  return;
}


void goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long alStack48 [2];
  long *local_20;
  long *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20 = alStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41bfd6;
  local_18 = local_20;
  memset(local_20,0x41,0x31,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 0x31) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41bfee;
  (*local_10)(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66_bad(void)

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
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_38 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_18 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41c093;
  local_20 = local_38;
  local_10 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66b_badSink
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
  
  lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  lVar2 = lVar3 * -0x10;
  local_10 = auStack64 + lVar2;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar4 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_38 = auStack64 + lVar4 * -0x10 + lVar2;
  *local_38 = 0;
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41c128;
  local_20 = local_38;
  local_18 = local_38;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66b_goodG2BSink
            (local_48,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c189;
  local_20 = local_28;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c1a3;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c1e7;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c1f3;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c248;
  local_20 = local_28;
  iVar2 = globalReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c26e;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c256;
    printLine("Benign, fixed string");
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c2b2;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c2be;
  printLine(local_28);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar6 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar3 * 0x1ffffffffffffffe + 2;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c313;
  local_20 = local_28;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c32d;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar4 = 5;
  puVar5 = auStack112 + 2;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar5 = 0;
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c371;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41c37d;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41c3f7;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41c40e;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41c46a;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41c481;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63_bad(void)

{
  undefined local_48 [56];
  undefined *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_b8 [168];
  undefined *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_04_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  local_10 = local_48;
  local_48[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c571) */

void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  local_10 = local_b8;
  local_b8[0] = 0;
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63b_badSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63b_goodG2BSink(char **ppcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65_bad(void)

{
  long lVar1;
  long alStack48 [2];
  long *local_20;
  long *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20 = alStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c75d;
  local_18 = local_20;
  memset(local_20,0x41,99,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 99) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c775;
  (*local_10)(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long alStack48 [2];
  long *local_20;
  long *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65b_goodG2BSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_20 = alStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c7d9;
  local_18 = local_20;
  memset(local_20,0x41,0x31,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 0x31) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c7f1;
  (*local_10)(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65_good(void)

{
  goodG2B();
  return;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61b_badSource(void *pvParm1)

{
  memset(pvParm1,0x41,99);
  *(undefined *)((long)pvParm1 + 99) = 0;
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61b_goodG2BSource(void *pvParm1)

{
  memset(pvParm1,0x41,0x31);
  *(undefined *)((long)pvParm1 + 0x31) = 0;
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65b_badSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_65b_goodG2BSink(char *pcParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67_bad(void)

{
  undefined local_58 [64];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_58;
  local_58[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_c8 [176];
  undefined *local_18;
  undefined *local_10;
  
  local_18 = local_c8;
  local_c8[0] = 0;
  local_10 = local_18;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_67_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_14_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (globalFive == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c9e8;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ca2c;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ca38;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (globalFive == 5) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41cab0;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41ca98;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41caf4;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41cb00;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (globalFive == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cb6c;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cbb0;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cbbc;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41cc61;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61b_badSource
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41cc9e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41ccaa;
  printLine(local_28);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41cd01;
  local_20 = local_28;
  local_28 = (undefined8 *)
             CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61b_goodG2BSource
                       (local_28,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41cd3e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41cd4a;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_61_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_10_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (globalTrue != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cdc5;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ce09;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ce15;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (globalFalse == 0) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41ce8c;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41ce74;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41ced0;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41cedc;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (globalTrue != 0) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cf47;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cf8b;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cf97;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54e_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_54e_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_14_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (globalFive == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcpy(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_17_bad(void)

{
  char local_138 [99];
  undefined local_d5;
  char local_58 [64];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_58;
    local_58[0] = 0;
    local_c = local_c + 1;
  }
  memset(local_138,0x43,99);
  local_d5 = 0;
  strcpy(local_18,local_138);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  char local_138 [99];
  undefined local_d5;
  char local_c8 [176];
  char *local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = local_c8;
    local_c8[0] = 0;
    local_c = local_c + 1;
  }
  memset(local_138,0x43,99);
  local_d5 = 0;
  strcpy(local_18,local_138);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_17_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined local_58 [64];
  undefined *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = local_58;
  local_58[0] = 0;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(pcParm1,local_78);
  printLine(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined local_c8 [176];
  undefined *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_18 = local_c8;
  local_c8[0] = 0;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_07_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (staticFive == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d40a;
    local_20 = local_28;
    memset(local_28,0x41,99,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 99) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d44e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d45a;
  printLine(local_28);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar5 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar2 * 0x1ffffffffffffffe + 2;
  if (staticFive == 5) {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41d4d2;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41d4ba;
    local_20 = local_28;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  auStack112[1] = 0;
  lVar3 = 5;
  puVar4 = auStack112 + 2;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar4 = 0;
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41d516;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41d522;
  printLine(local_28);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack112 [9];
  undefined8 *local_28;
  undefined8 *local_20;
  
  bVar4 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_28 = auStack112 + lVar1 * 0x1ffffffffffffffe + 2;
  local_20 = local_28;
  if (staticFive == 5) {
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d58e;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  auStack112[1] = 0;
  lVar2 = 5;
  puVar3 = auStack112 + 2;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar3 = 0;
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d5d2;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d5de;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_14_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalFive == 5) {
    *local_28 = 0;
    local_20 = local_28;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d6a5;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d6bf;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d6cb;
  printLine(local_20);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar2 * -0x10;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar3 * -0x10 + lVar2 * -0x10;
  if (globalFive == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  else {
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41d75a;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41d784;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41d79e;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41d7aa;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  if (globalFive == 5) {
    *local_30 = 0;
    local_20 = local_30;
  }
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d857;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d871;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d87d;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_32_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack192;
  undefined local_b8 [8];
  undefined auStack176 [91];
  undefined local_55;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined **local_28;
  undefined **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_48 = auStack176 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_38 = auStack176 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_48 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d96a;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d984;
  strcat(local_48,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d990;
  printLine(local_48);
  return;
}


void goodG2B(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack192;
  undefined local_b8 [8];
  undefined auStack176 [91];
  undefined local_55;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined **local_28;
  undefined **local_20;
  
  local_20 = &local_50;
  local_28 = &local_50;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_30 = auStack176 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_48 = auStack176 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_48 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41da63;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41da7d;
  strcat(local_48,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41da89;
  printLine(local_48);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68b_badSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_badData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_badData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68b_goodG2BSink(void)

{
  char *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_goodG2BData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_goodG2BData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcpy((char *)&local_48,__src);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54d_goodG2BSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67b_badSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67b_goodG2BSink(char *pcParm1)

{
  char local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_10,local_78);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41dcb0;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41dd3d;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52b_goodG2BSink
            (local_20[0],0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_52_good(void)

{
  goodG2B();
  return;
}


void * badSource(void *pvParm1)

{
  memset(pvParm1,0x41,99);
  *(undefined *)((long)pvParm1 + 99) = 0;
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_42_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  local_10 = (char *)badSource(local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void * goodG2BSource(void *pvParm1)

{
  memset(pvParm1,0x41,0x31);
  *(undefined *)((long)pvParm1 + 0x31) = 0;
  return pvParm1;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  local_10 = (char *)goodG2BSource(local_10);
  local_b8 = 0;
  lVar1 = 5;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  *(undefined2 *)puVar2 = 0;
  strcat((char *)&local_b8,local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_42_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_13_bad(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_48 [56];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_48;
    local_48[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  char local_128 [99];
  undefined local_c5;
  char local_b8 [168];
  char *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_b8;
    local_b8[0] = 0;
  }
  memset(local_128,0x43,99);
  local_c5 = 0;
  strcat(local_10,local_128);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63_bad(void)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 **appuStack48 [2];
  undefined8 ****local_20 [3];
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[1] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e09d;
  local_20[2] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63b_badSink
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
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_20[2] = local_20 + lVar2 * 0x1ffffffffffffffe;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x82);
  lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20[0] = local_20 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe;
  *(undefined *)local_20[0] = 0;
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41e12a;
  local_20[1] = local_20[0];
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63b_goodG2BSink
            (local_20,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_04_bad(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_28 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e1e1;
  local_20 = local_28;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e1fb;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e207;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e28a) */

void goodG2B1(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e2be;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e2d8;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e2e4;
  printLine(local_20);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack160;
  undefined local_98 [8];
  undefined auStack144 [91];
  undefined local_35;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x50)) / ZEXT816(0x10),0);
  local_28 = auStack144 + lVar1 * -0x10;
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_30 = auStack144 + lVar2 * -0x10 + lVar1 * -0x10;
  *local_30 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e38f;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e3a9;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e3b5;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_04_good(void)

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
  printf((char *)(double)fParm1,&DAT_00428df1);
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
  printf(pcParm1,&DAT_00428e0e);
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
    __isoc99_sscanf(lVar1,&DAT_00428e1c,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00428e24,&local_14);
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

