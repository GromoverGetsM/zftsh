git checkout -b 4 # Новая ветка
git revert HEAD # Откат коммита
git add file # Добавка файла
git commit -m "Откат предыдущего коммита" # Новый коммит
git push -u origin 4 # Отправка на удалённый репо
