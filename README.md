# ReactiveVaccination
README

This repository contains file for the individual based model used in the companion paper listed below :
Reactive vaccination in Schools and Workplaces for COVID-19
by Faucher, B et al.

############################
#INSTALLATION
############################

The code has been compiled with g++ on linux and Windows. Tested with g++ 5.2.0
The code uses standard c++ libraries.

Directories : 
source code (.cpp,.h,Makefile) in src folder
filenames_test.txt in src folder
tests.tgz in src/input/test folder

###########################
# BUILD
##########################
make all # takes <60 secs

executable file is vaccination.exe

############################
#DEMO
############################

# get help
./vaccination.exe -h 

-h : print this help

-n N runs scenario N

-s SEED sets random seed to SEED (0 for time)

-f FILENAME for input (default filenames.txt)

-i 0 for computing (natural) initial immunity/ -i 1 constrained to max incidence

-j 0 (random seed) / 1 (seed only exposed) / 2 (seed exposed and others) / 3 (seed all exposed file) / 4 (same as 2 but random)

# parameter file - list of all parameters
input/params_test.csv

# run demo

## first unpack test.tgz in input/test

>gunzip input/test.tgz

## prepare output directory

>mkdir src/output

## run scenario on line 2 in params_test.txt

>./vaccination.exe -n2 -f filenames_test.txt

# output

files in output/SCENARIO
where SCENARIO 1st column in params_test.txt
run time depend on repetitions

##############################
# CITY
##############################

data used in the paper are in input/city

> bunzip2 input/city/city.tgz
 
run scenario on line 2 in params_city.txt

>./vaccination.exe -n2 -f filenames_city.txt
 
 
