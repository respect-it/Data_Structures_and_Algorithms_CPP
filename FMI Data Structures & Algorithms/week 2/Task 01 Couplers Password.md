
## Задача 1.
***За тази задача НЕ може да се използват вградени функции за сортиране и структури от данни.***

На студентите от специалност „Софтуерно инженерство“ във ФМИ на СУ „Климент Охридски“ им предстои много ама много тежко контролно при професор Милен Ч++ и неговите зли асистенти: Атом, БиАтом, ДиАтом и МиАтом. За целта те са инструктирани да си носят лаптопи, за да може по-лесно да се борят с тежките задачи, които ги очакват. Всичко до тук е добре, но преди началото на контролното се оказва че липсват разклонители и не просто липсват, ами са заключени в сейф до килер във Факултета по Математика и Информатика. Пред килера има сейф с код на който пише “Ще се отворя и ще получите разклонители ако въведете правилната парола”.

От вас се иска да помогнете на студентите от СИ като напишете програма която отгатва паролата.

За правилната парола се знае следното:

Имате масив от неотрицателни числа, паролата е максималното число което може да получите нареждайки елементите в масива по произволен начин:

Примерен вход| Oчакван изход 
-|-
2<br>10 2|210
4<br>30 34 5 9|953430

#### Входен формат

Въвежда се броя на естествените числа <img src="https://latex.codecogs.com/svg.latex?\Large&space;N">, след което се въвежда всяко едно от тях, разделено от останалите с интервал.

#### Ограничения
<img src="https://latex.codecogs.com/svg.latex?\Large&space;N>0"><br>
<img src="https://latex.codecogs.com/svg.latex?\Large&space;N\le{100}"><br>
Всяко число от масива ще е по-малко от *1000000*.

#### Изходен формат
Максималното число което може да се сглоби слепвайки естествените числа в масива.