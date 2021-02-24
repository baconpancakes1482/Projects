#!/usr/bin/env python
import csv
import numpy
import pandas

print("Hello, Welcome to python script")
re = pandas.read_csv("autogeostats.txt", delimiter="^_^", engine="python")
re.to_csv("autogeostats.csv", encoding="utf-8", index=False)
with open("autogeostats.csv", "r") as f:
    csv_reader = csv.reader(f)
    with open('new_geo.csv', 'w') as y:
        csv_writer = csv.writer(y, delimiter='\t')
        for i in enumerate(csv_reader):
            csv_writer.writerow(i)
            
    
#with open('autogeostats.csv', 'r') as csv_file:
 #       csv_reader = csv.reader(csv_file)
  #      with open('new_geo.csv', 'w') as new_file:
   #         csv_writer = csv.writer(new_file, delimiter='\t')
         #   for line in csv_reader:
          #      del line['name']
   #             csv_writer.writerow(line)
            #print(line)

#print(re.head())
#print(re.columns
#filtered_df = pandas.read_csv("autogeostats.csv", usecols=[0])
#filtered_df.to_csv("autogeostats.csv", encoding="utf-8", index=False)

#f = open("autogeostats.txt", "r")
#with open("autogeostats.txt", "r") as f:
    #stripped = (line.strip() for line in f)
    #lines = (line.split(",") for line in stripped if line)
    #with open("log.csv", "w") as out_file:
     #   writer = csv.writer(out_file)
     #   writer.writerows(lines)
        ##writer.writerow(
    #f_contents = f.read()
    #for line in f:
    
    #   print(line, end='')
   # content = []                      # stores all data without touching txt file
   # contents = f.readlines()        # storing everything including whitespace to list
   # for line in contents:
   #     content.append(line.strip())   # removing white space and appending to content
   # content.append(line.strip('-'))
    
    #line.strip()
    #contents.append(line.strip())  # remove white space 
#f.close()   
    #print(content)   # printing content list
#print(contents)
#a_file = open("content.txt", "w")
#for row in content:
#numpy.savetxt(a_file, content, fmt='%s')
#a_file.close()

#list_ = open("content.txt", "r")
#for lines in list_: 
 #   print(lines)

#list_.close()

#print(content)
