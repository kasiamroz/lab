#!/bin/bash
for FILE in *.o
do
   if [ ! -f $FILE ]
   then
      echo "$FILE nie jest plikiem!"
      break
   fi
   rm -v $FILE
done
