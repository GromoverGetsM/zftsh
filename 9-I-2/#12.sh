#!/bin/bash

contacts_file="contacts"

if [[ ! -f "$contacts_file" ]]; then
    echo "Файл не найден!"
    exit 1
fi

grep -E " (work|private) \+" "$contacts_file" | awk '{print $NF}'
