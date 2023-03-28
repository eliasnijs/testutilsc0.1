static int 
tu_run_multiple(char *name, Tu_Test tests[], int testc)
{
  int i, s, succount;
  printf("%s (%s, %s): \n", name, __DATE__, __TIME__);
  for (i = 0, succount = 0; i < testc; ++i) {
    printf("%2d. ", i + 1);
    s = tests[i].run();
    if (s == 0)
      ++succount;
#if TU_ENABLE_ASSERT_MSG
    if (s == -1)
      printf("    ");
#endif
    printf("%s | %s\n", 
        (s == 0) ? ESC_GREEN"success"ESC_RESET : ESC_RED"failed "ESC_RESET, 
        tests[i].name);
  }
  printf("%d tests finished: %d test(s) succeeded, %d test(s) failed\n", testc, succount, testc - succount);
  return (succount == testc);
}
