#!/usr/bin/perl -w
use strict;
use File::copy

#work on this pseudo code to complete the project

my($sourceFile);
my ($inputFile);
my($outputFile);

mkdir("./scratch");

$sourceFile = ARGV[0];
$inputFile = ARGV[1];
$outputFile = ARGV[2];

copy($sourceFile, "./scratch/hello.cpp");
copy($inputFile, "./scratch/.");
copy($outputFile, "./scratch/expectedHello.out");

chdir("./scratch");
unlink("*");
