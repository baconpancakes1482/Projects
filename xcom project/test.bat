#!/bin/bash

cd /mnt/c/Users/baconater1482/Documents/OpenXcom/xcom1 2>/dev/null
cp -vi _autogeo_.asav "/mnt/c/Users/baconater1482/Desktop/xcom project/autogeostats.txt"
cd - > /dev/null
echo "Data grabbed ... Executing python script"

python3 script.py

echo "exiting code: $?"
#C:\Users\baconater1482\Documents\OpenXcom\xcom1\_autogeo_.asav
