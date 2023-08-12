#!/bin/bash

Suites="Clubs
Diamonds
Hearts
Spades"

Denominations="2
3
4
5
6
7
8
9
10
Jack
Queen
King
Ace"

suites=($Suites)
denominations=($Denominations)

num_suites=${#suites[*]}
num_denominations=${#denominations[*]}

echo "${suites[$((RANDOM%num_suites))]} ${denominations[$((RANDOM%num_denominations))]}"
