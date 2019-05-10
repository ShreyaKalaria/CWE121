
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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x403423;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x403500;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x403692;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40371f;
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


/* WARNING: Removing unreachable block (ram,0x004037dc) */

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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x403a9e;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x403ae2;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x403aee;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x403b66;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x403b4e;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x403baa;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x403bb6;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x403c22;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x403c66;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x403c72;
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
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403d08;
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
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403d62;
  strcpy(auStack144 + 1,local_40,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403d6e;
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
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403dea;
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
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403e44;
  strcpy(auStack144 + 1,local_40,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x403e50;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40420d;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x404224;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x404280;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x404297;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4043aa;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4043ef;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4043fb;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40445c;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4044a1;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4044ad;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x404527;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40456b;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x404577;
  printLine(local_28);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004045cb) */

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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4045ed;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x404631;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40463d;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4046a7;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4046eb;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4046f7;
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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4047ab;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404841;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4048fa;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404914;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404920;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4049af;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4049d9;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4049f3;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4049ff;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404aac;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404ac6;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x404ad2;
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
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x404e41;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe));
  local_18[99] = 0;
  apuStack48[1] = local_18;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x404e60;
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
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x404ebc;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe));
  local_18[0x31] = 0;
  apuStack48[1] = local_18;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x404edb;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405150;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40516a;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405176;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405218;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405232;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40523e;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4052e0;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4052fa;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405306;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x405517;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_badData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x405537;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4055ed;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_45_goodG2BData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40560d;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4056b8;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4056fc;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x405708;
  printLine(local_28);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040575d) */

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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40577f;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4057c3;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4057cf;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40583a;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40587e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40588a;
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
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4059f0;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405a0a;
  strcpy(local_28,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405a16;
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
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405acb;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405ae5;
  strcpy(local_28,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x405af1;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405d4f;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405d8c;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405d98;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405df9;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405e36;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405e42;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405ea3;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405ee0;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x405eec;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x405fa0;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406036;
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
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406200;
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
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406295;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406332;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4063bf;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40642c;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406470;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40647c;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4064dd;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406521;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40652d;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40658e;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4065d2;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4065de;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406768;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4067ac;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4067b8;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40682f;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x406817;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x406873;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40687f;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4068ea;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40692e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40693a;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406a3c;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406b20;
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
  (&ppuStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406bf9;
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
  (&puStack48)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x406c8e;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406cfb;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406d3f;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406d4b;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406dac;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406df0;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x406dfc;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4071cc;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407211;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40721d;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40727e;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4072c3;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4072cf;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407330;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407375;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407381;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4075bb;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4075ff;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40760b;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407682;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40766a;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4076c6;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4076d2;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40773d;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x407781;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40778d;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_09_good(void)

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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4079d5;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407a12;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407a1e;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407aa8;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407ae5;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x407af1;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407bae;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407bc8;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407bd4;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407c63;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407c8d;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407ca7;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x407cb3;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407d60;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407d7a;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x407d86;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4080d1;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40815e;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x408366;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4083aa;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4083b6;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40842d;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x408415;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x408471;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40847d;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4084e8;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40852c;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x408538;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4086a9;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4086c0;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40876f;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x408786;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408925;
  local_20 = local_28;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40893f;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40894b;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004089ce) */

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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408a02;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408a1c;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408a28;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408ad3;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408aed;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408af9;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408bb6;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408bd0;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408bdc;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408c7f;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408c99;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x408ca5;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408d16;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408d6a;
  strcpy(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408d76;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408dd7;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408e2b;
  strcpy(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x408e37;
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


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x408f65;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x408f7c;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x408fd8;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x408fef;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54b_goodG2BSink(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_54_good(void)

{
  goodG2B();
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40915d;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40919a;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4091b4;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4091c0;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409244;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    *local_30 = 0;
  }
  else {
    *local_30 = 0;
  }
  local_20 = local_30;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409281;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40929b;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4092a7;
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
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40960c;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&uStack80 + lVar1 * 0x1ffffffffffffffe));
  local_18[99] = 0;
  local_38 = local_18;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40962b;
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
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x409687;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&uStack80 + lVar1 * 0x1ffffffffffffffe));
  local_18[0x31] = 0;
  local_38 = local_18;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x4096a6;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4097c4;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4097f0;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40980a;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x409816;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40989a;
  iVar2 = globalReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4098a8;
    printLine("Benign, fixed string");
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4098d2;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4098ec;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4098f8;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40997c;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4099a8;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4099c2;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x4099ce;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409a8a;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409aa4;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409ab0;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409b52;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409b6c;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409b78;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409c1a;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409c34;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409c40;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409dac;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409dc6;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409dd2;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409e60;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409e8a;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409ea4;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x409eb0;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409f5c;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409f76;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x409f82;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a1c6;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a1e0;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a1ec;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a28e;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a2a8;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40a2b4;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a56f;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40a5fc;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a6a2;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a6ce;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a6e8;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a6f4;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a778;
  iVar2 = staticReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a786;
    printLine("Benign, fixed string");
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a7b0;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a7ca;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a7d6;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a85a;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a886;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a8a0;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40a8ac;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40a927;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40a97b;
  strcpy(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40a987;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40a9e8;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40aa3c;
  strcpy(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40aa48;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40abdf;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40ac6c;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40af3e;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_badData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40af5e;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40afba;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_goodG2BData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40afda;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b256;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b26d;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b2c9;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b2e0;
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
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b593;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b5ad;
  strcat(local_28,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b5b9;
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
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b66e;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b688;
  strcat(local_28,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40b694;
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


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b8e6;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_badData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b906;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b962;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_goodG2BData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40b982;
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


/* WARNING: Removing unreachable block (ram,0x0040baff) */

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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40c116;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40c12d;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40c189;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40c1a0;
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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c55a;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40c637;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40c8c5;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40c90a;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40c916;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40c977;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40c9bc;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40c9c8;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ca29;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ca6e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ca7a;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40cdc8;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ce05;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ce11;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ce9b;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ced8;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40cee4;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cfa1;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cfbb;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40cfc7;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d056;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d080;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d09a;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d0a6;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d153;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d16d;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d179;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_13_good(void)

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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d1f3;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d20a;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d266;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d27d;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d327;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d364;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d370;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d41a;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d457;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d463;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d501;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d53e;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40d54a;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d7a2;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d7bc;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d7c8;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d857;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d881;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d89b;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x40d8a7;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d954;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d96e;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40d97a;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40d9ff;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40da43;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40da4f;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40dac6;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40daae;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40db0a;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40db16;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40db81;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40dbc5;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40dbd1;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40dc9e;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40dcb5;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40dd64;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40dd7b;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40de29;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40de43;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40de4f;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40def1;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40df0b;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40df17;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dfb9;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dfd3;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40dfdf;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e059;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e070;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e0cc;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e0e3;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e192;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e1ac;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e1b8;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e25b;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e275;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40e281;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e2f2;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e346;
  strcat(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e352;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e3b3;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e407;
  strcat(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x40e413;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e85e;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_badData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e87e;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e934;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_45_goodG2BData = local_18;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e954;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40e9e4;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ea21;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ea3b;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40ea47;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40eacb;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    *local_30 = 0;
  }
  else {
    *local_30 = 0;
  }
  local_20 = local_30;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40eb08;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40eb22;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40eb2e;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ec33;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ec70;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ec7c;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ecd3;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ed10;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40ed1c;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ed97;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40eddb;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ede7;
  printLine(local_28);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ee3c) */

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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ee5e;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40eea2;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40eeae;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ef19;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ef5d;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40ef69;
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


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_51_bad(void)

{
  long lVar1;
  long lStack32;
  long *local_18;
  long *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) / ZEXT816(0x10),0);
  local_18 = &lStack32 + lVar1 * 0x1ffffffffffffffe + 2;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f017;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f02e;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f08a;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f0a1;
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
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40f1b3;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&uStack80 + lVar1 * 0x1ffffffffffffffe));
  local_18[99] = 0;
  local_38 = local_18;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40f1d2;
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
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40f22e;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&uStack80 + lVar1 * 0x1ffffffffffffffe));
  local_18[0x31] = 0;
  local_38 = local_18;
  (&uStack80)[lVar1 * 0x1ffffffffffffffe] = 0x40f24d;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f2dd;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f309;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f323;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f32f;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f3b3;
  iVar2 = globalReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f3c1;
    printLine("Benign, fixed string");
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f3eb;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f405;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f411;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f495;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f4c1;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f4db;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x40f4e7;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f5a3;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f5bd;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f5c9;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f66b;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f685;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f691;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f733;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f74d;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40f759;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f8d0;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f914;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40f920;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f998;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f980;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f9dc;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x40f9e8;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40fa54;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40fa98;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x40faa4;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fcb2;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fccc;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fcd8;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fd7a;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fd94;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x40fda0;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40fe9e;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40feb5;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40ff11;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40ff28;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4103f5;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41040f;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41041b;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4104a9;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4104d3;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4104ed;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4104f9;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4105a5;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4105bf;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4105cb;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410969;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410983;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41098f;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410a32;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410a4c;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410a58;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410afb;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410b15;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x410b21;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410c8b;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_28;
    *local_28 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410cb7;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410cd1;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410cdd;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410d61;
  iVar2 = staticReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  else {
    (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410d6f;
    printLine("Benign, fixed string");
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410d99;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410db3;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410dbf;
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
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410e43;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    local_20 = local_30;
    *local_30 = 0;
  }
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410e6f;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410e89;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe));
  (&uStack160)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x410e95;
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


/* WARNING: Removing unreachable block (ram,0x00410f92) */

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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x411286;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4112d4;
  strcat(auStack112 + 1,local_30,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4112e0;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41134a;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x411398;
  strcat(auStack112 + 1,local_30,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4113a4;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4114fe;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411518;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411524;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4115b2;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4115dc;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4115f6;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411602;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4116ae;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4116c8;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4116d4;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411900;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4119d4;
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
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411c54;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411c6e;
  strcpy(local_38,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411c7a;
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
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d2c;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d46;
  strcpy(local_38,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x411d52;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411e99;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x411f26;
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
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x4122d0;
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
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x41232a;
  strcat(auStack144 + 1,local_40,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x412336;
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
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x4123b2;
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
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x41240c;
  strcat(auStack144 + 1,local_40,*(undefined *)(auStack144 + lVar1 * 0x1ffffffffffffffe));
  auStack144[lVar1 * 0x1ffffffffffffffe] = 0x412418;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41247d;
  local_20 = local_28;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4124ba;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412497;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4124fe;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41250a;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41255f;
  local_20 = local_28;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41259c;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x412579;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4125e0;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4125ec;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x412695;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41272a;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412926;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412940;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41294c;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4129ef;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412a09;
  strcpy(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412a15;
  printLine(local_30);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_16_good(void)

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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412d19;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412d33;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412d3f;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412dcd;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412df7;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412e11;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x412e1d;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412ec9;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412ee3;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x412eef;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x412ff7;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41300e;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41306a;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x413081;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4130f7;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41313b;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x413147;
  printLine(local_28);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041319b) */

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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4131bd;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x413201;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41320d;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x413277;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4132bb;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4132c7;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413342;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413396;
  strcat(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x4133a2;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413403;
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
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413457;
  strcat(auStack128 + 1,local_28,*(undefined *)(auStack128 + lVar1 * 0x1ffffffffffffffe));
  auStack128[lVar1 * 0x1ffffffffffffffe] = 0x413463;
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
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4136c5;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe));
  local_18[99] = 0;
  apuStack48[1] = local_18;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4136e4;
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
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x413740;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(apuStack48 + lVar1 * 0x1ffffffffffffffe));
  local_18[0x31] = 0;
  apuStack48[1] = local_18;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41375f;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41380a;
  local_20 = local_28;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x413824;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x413868;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x413874;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4138c9;
  local_20 = local_28;
  iVar2 = staticReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4138ef;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4138d7;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x413933;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41393f;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x413994;
  local_20 = local_28;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4139ae;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4139f2;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4139fe;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_08_good(void)

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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4146be;
  local_20 = local_28;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4146d8;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41471c;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414728;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41477d;
  local_20 = local_28;
  iVar2 = globalReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4147a3;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41478b;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4147e7;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4147f3;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414848;
  local_20 = local_28;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x414862;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4148a6;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x4148b2;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41492d;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41496a;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414976;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4149d7;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414a14;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414a20;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414a81;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414abe;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x414aca;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414b7e;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x414c14;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4151f0;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415235;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415241;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4152a2;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4152e7;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4152f3;
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


/* WARNING: Removing unreachable block (ram,0x00415497) */

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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4156be;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415702;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41570e;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x415786;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41576e;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4157ca;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x4157d6;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415842;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415886;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415892;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41590d;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415951;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41595d;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4159be;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415a02;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415a0e;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415a6f;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415ab3;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415abf;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415b86;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415ba0;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415bac;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415c3b;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415c65;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415c7f;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x415c8b;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415d38;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415d52;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415d5e;
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
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e4b;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e65;
  strcpy(local_48,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415e71;
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
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415f44;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415f5e;
  strcpy(local_48,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x415f6a;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x415fdc;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x416020;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41602c;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41608e;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4160d2;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4160de;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4166b1;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4166cb;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4166d7;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41677a;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416794;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4167a0;
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
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416862;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41687c;
  strcpy(local_40,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416888;
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
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41693a;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416954;
  strcpy(local_40,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416960;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416b64;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x416bf1;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416d0c;
  local_20 = local_28;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416d26;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416d32;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416db6) */

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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416dea;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416e04;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416e10;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416ebc;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416ed6;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x416ee2;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x416f68;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x416fac;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x416fb8;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417030;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417018;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417074;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417080;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4170ec;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x417130;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41713c;
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
  (&ppuStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417296;
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
  (&puStack48)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41732c;
  local_20[0] = local_28;
  CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65b_goodG2BSink(local_28,0x10,local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_65_good(void)

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


/* WARNING: Removing unreachable block (ram,0x004173bb) */

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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4175cd;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4175e4;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x417640;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x417657;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417979;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417993;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41799f;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417a2d;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417a57;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417a71;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x417a7d;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b29;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b43;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x417b4f;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417c07;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417c44;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417c50;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417cfa;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417d37;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417d43;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417de1;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417e1e;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x417e2a;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41812e;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418148;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418154;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4181f7;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418211;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41821d;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4182c0;
  local_28 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4182da;
  strcat(local_30,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4182e6;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418362;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4183a6;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4183b2;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418414;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418458;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418464;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418733;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418777;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418783;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4187e4;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418828;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418834;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418895;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4188d9;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4188e5;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418d05;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418d53;
  strcpy(auStack112 + 1,local_30,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418d5f;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418dc9;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418e17;
  strcpy(auStack112 + 1,local_30,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x418e23;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418edf;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418ef9;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x418f05;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x418f93;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x418fbd;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x418fd7;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x418fe3;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41908f;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4190a9;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4190b5;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x4191a7;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41927b;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41937b;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419408;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419475;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4194b9;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4194c5;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419526;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41956a;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419576;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x4195d7;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41961b;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x419627;
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
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4196f3;
  local_38 = local_48;
  local_30 = local_48;
  local_20 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41970d;
  strcat(local_38,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419719;
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
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4197cb;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4197e5;
  strcat(local_38,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x4197f1;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419c03;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x419ce7;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419d9f;
  local_20 = local_28;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419db9;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419dc5;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419e49) */

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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419e7d;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419e97;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419ea3;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419f4f;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419f69;
  strcpy(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x419f75;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
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
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a143;
  local_18 = local_20;
  memset(local_20,0x41,99,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 99) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a15b;
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
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a1bf;
  local_18 = local_20;
  memset(local_20,0x41,0x31,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 0x31) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a1d7;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a2f4;
  local_20 = local_28;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a331;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a30e;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a375;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a381;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a3d6;
  local_20 = local_28;
  iVar2 = globalReturnsTrueOrFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a413;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a3f0;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a457;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41a463;
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
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a622;
  local_18 = local_20;
  memset(local_20,0x41,99,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 99) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a63a;
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
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a6f1;
  local_18 = local_20;
  memset(local_20,0x41,0x31,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 0x31) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a709;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a780;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a7c4;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a7d0;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41a847;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41a82f;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41a88b;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41a897;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a902;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a946;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41a952;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41aae8;
  local_20 = local_28;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41ab02;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41ab46;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41ab52;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41aba7;
  local_20 = local_28;
  iVar2 = staticReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41abcd;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41abb5;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41ac11;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41ac1d;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41ac72;
  local_20 = local_28;
  iVar2 = staticReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41ac8c;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41acd0;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41acdc;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41ad56;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41ad6d;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41adc9;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41ade0;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b127;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b1b4;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b458;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41b4e5;
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
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b986;
  local_18 = local_20;
  memset(local_20,0x41,99,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 99) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b99e;
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
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41ba55;
  local_18 = local_20;
  memset(local_20,0x41,0x31,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 0x31) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41ba6d;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41bb12;
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
  (&uStack80)[lVar3 * 0x1ffffffffffffffe + lVar4 * 0x1ffffffffffffffe] = 0x41bba7;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bc08;
  local_20 = local_28;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bc22;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bc66;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bc72;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bcc7;
  local_20 = local_28;
  iVar2 = globalReturnsFalse(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 == 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bced;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bcd5;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bd31;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bd3d;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bd92;
  local_20 = local_28;
  iVar2 = globalReturnsTrue(uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  if (iVar2 != 0) {
    auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bdac;
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
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bdf0;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar3 * 0x1ffffffffffffffe));
  auStack112[lVar3 * 0x1ffffffffffffffe] = 0x41bdfc;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41be76;
  local_10 = local_18;
  memset(local_18,0x41,99,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 99) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41be8d;
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
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41bee9;
  local_10 = local_18;
  memset(local_18,0x41,0x31,*(undefined *)(&lStack32 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_18 + 0x31) = 0;
  (&lStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41bf00;
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


/* WARNING: Removing unreachable block (ram,0x0041bff0) */

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
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c1dc;
  local_18 = local_20;
  memset(local_20,0x41,99,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 99) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c1f4;
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
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c258;
  local_18 = local_20;
  memset(local_20,0x41,0x31,*(undefined *)(alStack48 + lVar1 * 0x1ffffffffffffffe));
  *(undefined *)((long)local_20 + 0x31) = 0;
  alStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c270;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c467;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c4ab;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c4b7;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c52f;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c517;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c573;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c57f;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c5eb;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c62f;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c63b;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c6e0;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c71d;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c729;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c780;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c7bd;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c7c9;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c844;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c888;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c894;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c90b;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c8f3;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c94f;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41c95b;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41c9c6;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ca0a;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ca16;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41ce7e;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cec2;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cece;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cf2f;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cf73;
  strcpy(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cf7f;
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_01_good(void)

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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41cffb;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d03f;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d04b;
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
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41d0c3;
    local_20 = local_28;
    memset(local_28,0x41,0x31,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
    *(undefined *)((long)local_28 + 0x31) = 0;
  }
  else {
    auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41d0ab;
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
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41d107;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar2 * 0x1ffffffffffffffe));
  auStack112[lVar2 * 0x1ffffffffffffffe] = 0x41d113;
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
    auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d17f;
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
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d1c3;
  strcat(auStack112 + 1,local_28,*(undefined *)(auStack112 + lVar1 * 0x1ffffffffffffffe));
  auStack112[lVar1 * 0x1ffffffffffffffe] = 0x41d1cf;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d296;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d2b0;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d2bc;
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
    (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41d34b;
    printLine("Benign, fixed string",uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41d375;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41d38f;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe));
  (&uStack160)[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41d39b;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d448;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d462;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d46e;
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
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d55b;
  local_40 = local_48;
  local_30 = local_48;
  local_50 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d575;
  strcat(local_48,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d581;
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
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d654;
  local_40 = local_48;
  local_38 = local_48;
  local_50 = local_48;
  memset(local_b8,0x43,99,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_55 = 0;
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d66e;
  strcat(local_48,local_b8,
         *(undefined *)(&uStack192 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack192)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41d67a;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41da4a;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41dad7;
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
  appuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41de37;
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
  apuStack48[lVar2 * 0x1ffffffffffffffe + lVar3 * 0x1ffffffffffffffe] = 0x41dec4;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41df7b;
  local_20 = local_28;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41df95;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41dfa1;
  printLine(local_20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e024) */

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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e058;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e072;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e07e;
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
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e129;
  local_20 = local_30;
  memset(local_98,0x43,99,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_35 = 0;
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e143;
  strcat(local_20,local_98,
         *(undefined *)(&uStack160 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack160)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e14f;
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_04_good(void)

{
  goodG2B1();
  goodG2B2();
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
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e21b;
  local_38 = local_40;
  local_30 = local_40;
  local_20 = local_40;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e235;
  strcat(local_40,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e241;
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
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e2f3;
  local_38 = local_40;
  local_30 = local_40;
  local_28 = local_40;
  memset(local_a8,0x43,99,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  local_45 = 0;
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e30d;
  strcat(local_40,local_a8,
         *(undefined *)(&uStack176 + lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe));
  (&uStack176)[lVar1 * 0x1ffffffffffffffe + lVar2 * 0x1ffffffffffffffe] = 0x41e319;
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
  printf((char *)(double)fParm1,&DAT_00428df5);
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
  printf(pcParm1,&DAT_00428e12);
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
    __isoc99_sscanf(lVar1,&DAT_00428e20,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00428e28,&local_14);
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

