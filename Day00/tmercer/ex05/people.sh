ldapsearch "uid=z*" | grep cn | sort -r | grep -wE "(cn:)" | cut -c5-
