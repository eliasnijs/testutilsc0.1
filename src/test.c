
#define TU_ENABLE_ASSERT_MSG 1

#include "testutils/testutils.h"
#include "testutils/testutils.c"

int
sample_test(void)
{
  Tu_Assert(0 == 0);
  return 0;
}

int
sample_test_2(void)
{
  Tu_Assert(0 == 1);
  return 0;
}

static Tu_Test basic_tests[] = { 
  Tu_TestInit( sample_test ),
  Tu_TestInit( sample_test_2 ),
}; 

