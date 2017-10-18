#include <iostream>
#include <stdio.h>
using namespace std;

void printDir(char *d)
{
   FILE *fp;
   char buffer[512];
   char cmd[512];
   char dirName[128];
   char t1[128];
   char targetDir[1024];

   cout << "DIR : " << d << endl;
   sprintf(cmd, "ls -l %s", d);

   if ((fp = popen(cmd, "r")) != NULL)
   {
      while (!feof(fp))
      {
         if (fgets(buffer, sizeof(buffer) - 1, fp) != NULL)
         {
            cout << buffer;
         }
      }

      cout << endl;

      pclose(fp);
   }

   if ((fp = popen(cmd, "r")) != NULL)
   {
      while (!feof(fp))
      {
         if (fgets(buffer, sizeof(buffer) - 1, fp) != NULL)
         {
            if (buffer[0] == 'd')
            {
               sscanf(buffer,"%s %s %s %s %s %s %s %s %s", t1, t1, t1, t1, t1, t1, t1, t1, dirName);
               sprintf(targetDir, "%s/%s", d, dirName);

               printDir(targetDir);
            }
         }
      }

      pclose(fp);
   }
}

int main()
{
   char startDir[128];

   sprintf(startDir, ".");
   printDir(startDir);

   return 0;
}
