git checkout feature # Смена ветки
git reset --soft HEAD~2 # Откат 2 коммитов
git reset --hard # Снос изменений

# (Создание новых коммитов через git commit)

git checkout master # Смена ветки

git revert 3712647 # Откат коммита 3712647
git merge feature # Объединение веток

git push origin master # Отправка изменений в репо
