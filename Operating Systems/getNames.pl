#!/usr/bin/perl -w
use strict;

# Caleb Herring

my ($line, @namesArray, %wordCount, $username, $password, $UID, $GID, $actualName, @everythingElse);

while ($line = <STDIN>)
{
	chomp $line;

	# my @words = split(":", $line);
	($username, $password, $UID, $GID, $actualName, @everythingElse) = split(":", $line);


	if($GID >= 1000)
	{
		@namesArray = split(" ", $actualName);
		if($namesArray[0] !~ /^(Dr|Mr|Ms|Mrs|Coach)$/)
		{
			$actualName = $namesArray[0];
		}
		else
		{
			$actualName = $namesArray[1];
		}
		# $wordCount{$word} = defined($wordCount{$word}) ? $wordCount{$word} + 1 : 1;
		$wordCount{$actualName} = defined($wordCount{$actualName}) ? $wordCount{$actualName} + 1 : 1;
	}
}

foreach $actualName (sort(keys(%wordCount)) )
{
	if($wordCount{$actualName} > 1)
	{
			#print "Test statement2";
			print "$actualName occurs $wordCount{$actualName} times\n";
	}
}
