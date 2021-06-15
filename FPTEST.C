/*
 *
 * fptest.exe
 * Wednesday, 4/20/1994.
 *
 */

#include <os2.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <Gnumath.h>

void TestInt (void)
   {
   time_t tStart, tNow;
   ULONG  ul1, ul2;
   LONG   l1, l2, l3;

	tNow = tStart = time(NULL);

   ul1 = 0;

   l1 = l2 = l3 = 10;
   while (tNow - tStart < 5)
      {
      ul1++;
      for (ul2=0; ul2<20000; ul2++)
         {
         l1 = 32546;
         l1 = l1++ * l2 / l3;
         }
      tNow = time (NULL);
      }
   printf ("Int Counts = %ld\n", ul1);
   }


void TestFP  (void)
   {
   time_t tStart, tNow;
   ULONG  ul1, ul2;
   BIG    bg1, bg2, bg3;

	tNow = tStart = time(NULL);

   ul1 = 0;

   bg1 = bg2 = bg3 = 10.0;
   while (tNow - tStart < 5)
      {
      ul1++;
      for (ul2=0; ul2<8000; ul2++)
         {
         bg1 = 123456;
         bg1 = sin (2);
         bg1 = bg1++ * bg2 / bg3;
         }
      tNow = time (NULL);
      }
   printf ("Fp  Counts = %ld\n", ul1);
   }


int main (int argc, char *argv[])
   {
   TestInt ();
   TestFP  ();
   return 0;
   }

