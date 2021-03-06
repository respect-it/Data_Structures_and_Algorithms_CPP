## Задача 3.
Зимата идва и студентите от *Снежно Инженерство* (*СИ*) решили всички заедно по случай *Контролно номер 2* да си направят снежен човек. Студентите от *СИ* са създали специално клониращо устройство което клонира избран от тях снежен човек (*тъй като мързела е източник на идеи*).

В началото те имат нулев снежен човек с 0 топки на него !

#### Входен формат
На вход получавате <img src="https://latex.codecogs.com/svg.latex?\Large&space;N"> заявки:<br>
<img src="https://latex.codecogs.com/svg.latex?\Large&space;p{\;}{\;}m"> - клониране на <img src="https://latex.codecogs.com/svg.latex?\Large&space;p">-ия снежен човек <img src="https://latex.codecogs.com/svg.latex?\Large&space;(0\le{p}<i)">, където това е <img src="https://latex.codecogs.com/svg.latex?\Large&space;i">-тата заявка. След клониране добавяте топка с маса <img src="https://latex.codecogs.com/svg.latex?\Large&space;m"> върху новият клонинг. *ГАРАНТИРАНО Е ЧЕ ЩЕ КЛОНИРАТЕ САМО СЪЩЕСТВУВАЩИ СНЕЖНИ ЧОВЕЦИ*.

<img src="https://latex.codecogs.com/svg.latex?\Large&space;p{\;}{\;}0"> - клониране на <img src="https://latex.codecogs.com/svg.latex?\Large&space;p">-ия снежен човек и премахване на най-горната топка на новият клонинг. *ГАРАНТИРАНО Е ЧЕ НЯМА ДА КЛОНИРАТЕ И ДА ПРЕМАХВАТЕ ТОПКА ОТ НУЛЕВ СНЕЖЕН ЧОВЕК.*

След <img src="https://latex.codecogs.com/svg.latex?\Large&space;N">-те заявки, изведете сумата на всичките създадени снежни човеци.

#### Ограничения
<img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{N}\le{1000000}"> масата <img src="https://latex.codecogs.com/svg.latex?\Large&space;m">, на всяка нова топка която трябва да се добави <img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{m}\le{1000}">

#### Изходен формат

След <img src="https://latex.codecogs.com/svg.latex?\Large&space;N">-те заявки, изведете сумата на всичките създадени снежни човеци.

Примерен вход|Очакван изход
-|-
8<br>0 1<br>1 5<br>2 4<br>3 2<br>4 3<br>5 0<br>6 6<br>1 0|74

*Пояснение за примера:*

Заявките започват с номерация <img src="https://latex.codecogs.com/svg.latex?\Large&space;1"> ! При <img src="https://latex.codecogs.com/svg.latex?\Large&space;N=8"> номерацията на заявките ще започне от <img src="https://latex.codecogs.com/svg.latex?\Large&space;1"> до ... <img src="https://latex.codecogs.com/svg.latex?\Large&space;8">. <img src="https://latex.codecogs.com/svg.latex?\Large&space;i">-я снежен човек се получава след <img src="https://latex.codecogs.com/svg.latex?\Large&space;i">-тата заявка !

В началото имате снежен човек с <img src="https://latex.codecogs.com/svg.latex?\Large&space;0"> топки, който е създаден при заявка <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=0"> по подразбиране

**0 1**, това е заявка номер <img src="https://latex.codecogs.com/svg.latex?\Large&space;1">, след нея е създаден снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=1">, който клонира снежен човек <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=0"> и му добавя топка с тежест <img src="https://latex.codecogs.com/svg.latex?\Large&space;1\Rightarrow{0+1}\Rightarrow{[1]}">

**1 5**, това е заявка номер <img src="https://latex.codecogs.com/svg.latex?\Large&space;2">, след нея е създаден снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=2">, който клонира снежен човек <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=1"> и му добавя топка с тежест <img src="https://latex.codecogs.com/svg.latex?\Large&space;5\Rightarrow{1+5}\Rightarrow{[6]}">

**2 4**, това e заявка номер <img src="https://latex.codecogs.com/svg.latex?\Large&space;3">, след нея е създаден снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=3">, който клонира снежен човек <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=2"> и му добавя топка с тежест <img src="https://latex.codecogs.com/svg.latex?\Large&space;4\Rightarrow{6+4}\Rightarrow{[10]}">

**3 2**, това е заявка номер <img src="https://latex.codecogs.com/svg.latex?\Large&space;4">, след нея е създаден снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=4">, който клонира снежен човек <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=3"> и му добавя топка с тежест <img src="https://latex.codecogs.com/svg.latex?\Large&space;2\Rightarrow{10+2}\Rightarrow{[12]}">

**4 3**, това е заявка номер <img src="https://latex.codecogs.com/svg.latex?\Large&space;5">, след нея е създаден снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=5">, който клонира снежен човек <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=4"> и му добавя топка с тежест <img src="https://latex.codecogs.com/svg.latex?\Large&space;3\Rightarrow{12+3}\Rightarrow{[15]}">

**5 0**, това е заявка номер <img src="https://latex.codecogs.com/svg.latex?\Large&space;6">, след нея е създаден снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=6">, който клонира снежен човек <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=5"> и премахва най-горната му топка <img src="https://latex.codecogs.com/svg.latex?\Large&space;\Rightarrow{15-3}\Rightarrow{[12]}">

**6 6**, това е заявка номер <img src="https://latex.codecogs.com/svg.latex?\Large&space;7">, след нея е създаден снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=7">, който клонира снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=6"> и добавя топка с тежест <img src="https://latex.codecogs.com/svg.latex?\Large&space;6\Rightarrow{12+6}\Rightarrow{[18]}">

**1 0**, това е заявка номер <img src="https://latex.codecogs.com/svg.latex?\Large&space;8">, след нея е създаден снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=8">, който клонира снежен човек за <img src="https://latex.codecogs.com/svg.latex?\Large&space;i=1"> и премахва топка с тежест <img src="https://latex.codecogs.com/svg.latex?\Large&space;1\Rightarrow{1-1}\Rightarrow{[0]}">

Общата сума на всички снежни човеци е: <img src="https://latex.codecogs.com/svg.latex?\Large&space;1+6+10+12+15+12+18+0=74">
