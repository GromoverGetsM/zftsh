grep "$(date +%d.%m)" forecast | sed "s/^$(date _%d.%m):/Сегодня /"
