#!/bin/bash
for username in $(who | awk '{print $1}' | sort -u)
do
  echo "User: $username"
  echo -n "Home Directory: "
  awk -F: -v user="$username" '$1 == user {print $6}' /etc/passwd
  echo "Last Login: "
  lastlog -u $username | grep -o -P "(?:Mon|Tue|Wed|Thu|Fri|Sat|Sun) (?:Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) \d{1,2} \d{2}:\d{2}:\d{2} [+-]\d{4} \d{4}"
  lastlog -u $username | grep -o -P "[A-Z][a-z]{2} [A-Z][a-z]{2} \d{2} (\d{2}:){2}\d{2} [+-]\d{4} \d{4}"
done

