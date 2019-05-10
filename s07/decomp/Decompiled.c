
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00609ff8;
  if (PTR___gmon_start___00609ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400980(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0060a010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0060a018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0060a020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0060a028)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0060a030)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0060a038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0060a040)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0060a048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0060a050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0060a058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0060a060)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0060a068)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0060a070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0060a078)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0060a080)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0060a088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0060a090)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0060a098)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0060a0a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0060a0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0060a0b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0060a0b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0060a0c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0060a0c8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00609ff8)();
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
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_good();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_good();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_bad();
  printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_bad();");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_bad();
  return 0;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65b_badSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65b_goodG2BSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_bad(void)

{
  int iVar1;
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_18);
  snprintf((char *)&local_c8,__maxlen,"%s",local_18);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_18);
  snprintf((char *)&local_c8,__maxlen,"%s",local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_bad(void)

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
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
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


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61b_badSource(void *pvParm1)

{
  memset(pvParm1,0x41,99);
  *(undefined *)((long)pvParm1 + 99) = 0;
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61b_goodG2BSource
                 (void *pvParm1)

{
  memset(pvParm1,0x41,0x31);
  *(undefined *)((long)pvParm1 + 0x31) = 0;
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53d_badSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53d_goodG2BSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_bad(void)

{
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  local_10 = (char *)CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61b_badSource
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  local_10 = (char *)
                     CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61b_goodG2BSource
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  char *__s;
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __s = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_badData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_badData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  __maxlen = strlen(__s);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  char *__s;
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __s = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_goodG2BData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_goodG2BData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  __maxlen = strlen(__s);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
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
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_goodG2BData = local_10;
  goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64b_badSink(char **ppcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_18);
  snprintf((char *)&local_58,__maxlen,"%s",local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64b_goodG2BSink
               (char **ppcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_18);
  snprintf((char *)&local_58,__maxlen,"%s",local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_28);
  snprintf((char *)&local_d8,__maxlen,"%s",local_28);
  printLine(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_28);
  snprintf((char *)&local_d8,__maxlen,"%s",local_28);
  printLine(local_28);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67b_badSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67b_goodG2BSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_bad(void)

{
  undefined local_a8 [112];
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_10 = local_a8;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_28 = local_10;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66b_badSink(local_38);
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
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66b_goodG2BSink(local_38);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402b9a) */

void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_c8,__maxlen,"%s",local_20);
  printLine(local_20);
  return;
}


void goodG2B(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_c8,__maxlen,"%s",local_20);
  printLine(local_20);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_bad(void)

{
  undefined local_88 [112];
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_88;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  local_18 = local_10;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67b_badSink(local_10);
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
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_good(void)

{
  goodG2B();
  return;
}


void * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_badSource(void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_badGlobal != 0) {
    memset(pvParm1,0x41,99);
    *(undefined *)((long)pvParm1 + 99) = 0;
  }
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_goodG2B1Source
                 (void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_goodG2B1Global == 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pvParm1;
}


void * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_goodG2B2Source
                 (void *pvParm1)

{
  if (CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_goodG2B2Global != 0) {
    memset(pvParm1,0x41,0x31);
    *(undefined *)((long)pvParm1 + 0x31) = 0;
  }
  return pvParm1;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51b_badSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51b_goodG2BSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54d_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54e_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54d_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54e_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63b_badSink(char **ppcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63b_goodG2BSink
               (char **ppcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
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


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
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
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
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
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63b_goodG2BSink(&local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_bad(void)

{
  undefined local_88 [112];
  undefined *local_18;
  code *local_10;
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65b_badSink;
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
  
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65b_goodG2BSink;
  local_18 = local_88;
  memset(local_18,0x41,0x31);
  local_18[0x31] = 0;
  (*local_10)(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_good(void)

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


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_bad(void)

{
  int iVar1;
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_good(void)

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


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
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
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53c_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53d_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53c_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53d_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68b_badSink(void)

{
  char *__s;
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __s = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_badData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_badData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  __maxlen = strlen(__s);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68b_goodG2BSink(void)

{
  char *__s;
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40 [6];
  char *local_10;
  
  __s = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_goodG2BData;
  local_10 = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_goodG2BData;
  local_48 = 0;
  lVar1 = 5;
  puVar2 = local_40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  __maxlen = strlen(__s);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_bad(void)

{
  int iVar1;
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_badSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_badSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_goodG2BSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
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
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52c_badSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52c_goodG2BSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_badData = local_10;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_goodG2BData = local_10;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68b_goodG2BSink();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_d8,__maxlen,"%s",local_18);
  printLine(local_18);
  return;
}


void goodG2B(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_d8,__maxlen,"%s",local_18);
  printLine(local_18);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404db3) */

void goodG2B1(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54e_badSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54e_goodG2BSink(char *pcParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(pcParm1);
  snprintf((char *)&local_48,__maxlen,"%s",pcParm1);
  printLine(pcParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_bad(void)

{
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_badGlobal = 1;
  local_10 = (char *)CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_badSource
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B1(void)

{
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_goodG2B1Global = 0;
  local_10 = (char *)
                     CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_goodG2B1Source
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B2(void)

{
  size_t __maxlen;
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  undefined local_78 [104];
  char *local_10;
  
  bVar3 = 0;
  local_10 = local_78;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_goodG2B2Global = 1;
  local_10 = (char *)
                     CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_goodG2B2Source
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53b_badSink(undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53c_badSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53b_goodG2BSink
               (undefined8 uParm1)

{
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53c_goodG2BSink(uParm1);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_bad(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void goodG2B(void)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_b8,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_bad(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,99);
  local_10[99] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [104];
  undefined *local_10;
  
  local_10 = local_78;
  memset(local_10,0x41,0x31);
  local_10[0x31] = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51b_goodG2BSink(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_good(void)

{
  goodG2B();
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66b_badSink(long lParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
  return;
}


void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66b_goodG2BSink(long lParm1)

{
  size_t __maxlen;
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
  __maxlen = strlen(local_10);
  snprintf((char *)&local_48,__maxlen,"%s",local_10);
  printLine(local_10);
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
  printf((char *)(double)fParm1,&DAT_00407855);
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
  printf(pcParm1,&DAT_00407872);
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
    __isoc99_sscanf(lVar1,&DAT_00407880,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00407888,&local_14);
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

