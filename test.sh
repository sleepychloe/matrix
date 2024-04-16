#!/bin/bash

RED='\033[0;31m'
RESET='\033[0m'

if [ "$1" == "make" ]; then
	if [ "$2" == "all" ]; then
		for arg in $(seq -w 0 9); do
			make -C ./ex/ex0"$arg"
		done
		for arg in $(seq -w 10 15); do
			make -C ./ex/ex"$arg"
		done
	elif [ "$2" = "00" ] || [ "$2" = "01" ] || [ "$2" = "02" ] || [ "$2" = "03" ] || \
		[ "$2" = "04" ] || [ "$2" = "05" ] || [ "$2" = "06" ] || [ "$2" = "07" ] || \
		[ "$2" = "08" ] || [ "$2" = "09" ] || [ "$2" = "10" ] || [ "$2" = "11" ] || \
		[ "$2" = "12" ] || [ "$2" = "13" ] || [ "$2" = "14" ] || [ "$2" = "15" ]; then
		make -C ./ex/ex"$2"
	else
		echo -e "${RED}invalid second argument${RESET}"
		echo -e ""
		echo -e "${RED}command: bash ./test.sh make [arg2]${RESET}"
		echo -e "${RED}	[arg2] all or 00 to 15${RESET}"
	fi
elif [ "$1" == "fclean" ] || [ "$1" == "re" ]; then
	if [ "$2" == "all" ]; then
		for arg in $(seq -w 0 9); do
			make $1 -C ./ex/ex0"$arg"
		done
		for arg in $(seq -w 10 15); do
			make $1 -C ./ex/ex"$arg"
		done
	elif [ "$2" = "00" ] || [ "$2" = "01" ] || [ "$2" = "02" ] || [ "$2" = "03" ] || \
		[ "$2" = "04" ] || [ "$2" = "05" ] || [ "$2" = "06" ] || [ "$2" = "07" ] || \
		[ "$2" = "08" ] || [ "$2" = "09" ] || [ "$2" = "10" ] || [ "$2" = "11" ] || \
		[ "$2" = "12" ] || [ "$2" = "13" ] || [ "$2" = "14" ] || [ "$2" = "15" ]; then
		make $1 -C ./ex/ex"$2"
	else
		echo -e "${RED}invalid second argument${RESET}"
		echo -e ""
		echo -e "${RED}command: bash ./test.sh $1 [arg2]${RESET}"
		echo -e "${RED}	[arg2] all or 00 to 15${RESET}"
	fi
elif [ "$1" == "run" ]; then
	if [ "$2" = "00" ] || [ "$2" = "01" ] || [ "$2" = "02" ] || [ "$2" = "03" ] || \
		[ "$2" = "04" ] || [ "$2" = "05" ] || [ "$2" = "06" ] || [ "$2" = "07" ] || \
		[ "$2" = "08" ] || [ "$2" = "09" ] || [ "$2" = "10" ] || [ "$2" = "11" ] || \
		[ "$2" = "12" ] || [ "$2" = "13" ] || [ "$2" = "14" ] || [ "$2" = "15" ]; then
		if [ -f "./ex/ex$2/./ex$2" ]; then
			valgrind ./ex/ex$2/./ex$2
			if [ "$2" = "14" ]; then
				if [ -f "./ex/ex$2/proj" ]; then
					make run -C ./ex/ex"$2"
				else
					echo -e "${RED}there's no file named proj${RESET}"
				fi
			fi
		else
			echo -e "${RED}there's no executable named ./ex$2${RESET}"
		fi
	else
		echo -e "${RED}invalid second argument${RESET}"
		echo -e "${RED}command: bash ./test.sh $1 [arg2]${RESET}"
		echo -e "${RED}	[arg2] 00 to 15${RESET}"
	fi
else
	echo -e "${RED}invalid argument{RESET}"
	echo -e ""
	echo -e "${RED}command: bash ./test.sh [arg1] [arg2]${RESET}"
	echo -e "${RED}	[arg1] make, fclean, re, or run${RESET}"
	echo -e "${RED}	[arg2] all or 00 to 15 for make, fclean, re${RESET}"
	echo -e "${RED}		00 to 15 for run${RESET}"
fi
