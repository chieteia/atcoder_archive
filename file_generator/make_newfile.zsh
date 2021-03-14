#!/usr/bin/zsh

mkdir $1 && cd $1

gcc ~/file_generator/newfile.c
./a.out $2
rm a.out

cat ~/file_generator/prototype.txt > *.cpp