#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "reverse_number.h"

TestSuite(suite1);

Test(suite1, test1)
{
    int rev = reverse(26);
    cr_expect_eq(rev,62);
}
Test(suite1, test2)
{
    int rev2 = reverse(9824138);
    cr_expect_eq(rev2,8314289);
}
Test(suite1, test3)
{
    int rev3 = reverse(-123);
    cr_expect_eq(rev3,-321);
}
Test(suite1, test4)
{
    int rev4 = reverse(0);
    cr_expect_eq(rev4,0);
}
Test(suite1, test5)
{
    int rev5 = reverse(-243897);
    cr_expect_eq(rev5,-798342);
}
