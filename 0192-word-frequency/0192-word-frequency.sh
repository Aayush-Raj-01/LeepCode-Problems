# Read from the file words.txt and output the word frequency list to stdout.
#!/bin/bash

tr -s '[:space:]' '\n' < words.txt | sort | uniq -c | sort -nr | awk '{print $2, $1}'