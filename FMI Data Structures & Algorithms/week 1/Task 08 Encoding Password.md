## Task 7.

[Challenges](https://www.hackerrank.com/contests/practice-1-sda/challenges)

Преподавателският състав на курса по СДА има специален админски канал в Slack. Каналът е затворен и за да се присъединиш към него, трябва когато ти бъде подадена парола, да върнеш нейния шифриран вариант. Паролите съдържат само главни букви от английската азбука.

Шифрирането става по следния начин: Всяка последователност от еднакви букви се замества с числото, което указва колко е дълга псоледователността, последвана от самата буква. Правилото важи дори и за последователности от 1 символ. Така, например, **AAAABBBCCDAA** става **4A3B2C1D2A**.

Напишете програма, която по подадена парола извежда нейния шифриран вариант.

#### Входен формат
От единствения ред на стандартния вход се въвежда низ **str**.

#### Ограничения
<img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{N}<10^7">, където <img src="https://latex.codecogs.com/svg.latex?\Large&space;N"> е дължината на стринга.

#### Изходен формат
На единствения ред на стандартния изход се извежда *шифриран вариант* на низа **str**.

Примерен вход|Очакван изход
-|-
AAAABBBCCDAA|4A3B2C1D2A
