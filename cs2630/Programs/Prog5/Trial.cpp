//---------------------------------------------------------------------
// Names:   John W Hunter, Scott Schroeder
// Project: Program 4
// Purpose: Implementation for Trial class
//---------------------------------------------------------------------

#include "stdafx.h"
#include "trial.h"

unsigned int Trial::Run()
{
   int num = strings.size();

   Clear();

   timer.ReStart();

   for ( int r = 0; r < numRuns; r++ )
   {
      for ( int i = 0; i < num; i++ )
         AddElement(i);

      for ( int i = 0; i < num; i++ )
      {
         if( type == SORTED )
            RemoveElement(i);
         else
            RemoveElement();
      }
   }

   return timer.ElaspedTime();
}
