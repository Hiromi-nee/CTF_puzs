#!/usr/bin/perl -w

open FILE, "500-worst-passwords.txt" or die $!;
while(<FILE>){
system("./auto.elf32 $_");
} 
