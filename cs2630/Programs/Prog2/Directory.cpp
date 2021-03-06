#include "Directory.h"
#include "LeakWatcher.h"

void Directory::InvalidCmdHandler()
{
   cout << "Invalid command!" << endl;
   cin.ignore( MAX_INPUT_LEN, '\n' );
}

void Directory::Run()
{
   int initialSize;
   cin >> initialSize;
   cout << "There are " << initialSize 
      << " companies initially in the directory." << endl;
   cout << "They will be read in and inserted in the list in order." 
      << endl;
   for ( int i = 0; i < initialSize; i++ )
      InsertCompany();
   cout << endl;
   char cmd;
   cin >> cmd;
   while ( cmd != 'S' )
   {
      switch ( cmd )
      {
      case 'I': InsertCompany();
         break;
      case 'D': DeleteCompany();
         break;
      case 'P': PrintList();
         break;
      default: InvalidCmdHandler();
         break;
      }
      cout << endl;
      cin >> cmd;
   }
   cout << "Normal Termination of program 2!" << endl;
}

void Directory::InsertCompany()
{
   Company * in = new Company();
   cin >> *in;
   cout << setiosflags( ios::left ) << setw( DISPLAY_ALIN );
   if ( companyList.Insert( in ) )
      cout << "Added to directory: " << *in << endl;
   else
   {
      cout << "Already in directory: " << *in << endl;
      delete in;
   }
}

void Directory::DeleteCompany()
{
   Company in;
   cin >> in;
   cout << setiosflags( ios::left ) << setw( DISPLAY_ALIN );
   if ( companyList.Delete( in ) )
      cout << "Deleted from directory: " << in << endl;
   else
      cout << "Wasn't in directory: " << in << endl;
}

void Directory::PrintList()
{
   cout << "Below are the companies currently in the directory:" 
      << endl;
   companyList.Display( cout );
}
