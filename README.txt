Mătușa Sebastian-Nicolae 331AA

baggage_drop

Problema a fost divizată în 3 module specifice cu diferite funcționalități cerute.
Instanțierea a fost facută prin sintaxa de tipul .sensor1(sensor1)  
t_act a trebuit să fie prelucrat înainte, pentru a respecta formula „t = sqrt(height) / 2”
Pentru interconectarea modulelor s-au folosit wires.

sensors_input

În acest modul am creat un always. În acesta am 3 scenarii diferite după care calculez media înălțimii cu datele de la cei 4 senzori.
Cazurile sunt: sensor1 == 0 || sensor3 ==0 , sensor2 == 0 || sensor4 ==0 sau toți senzorii sunt diferiți de 0.
Calculul sumei și aproximarea rezultatului se face într-o singură expresie.
Se face AND logic între suma senzorilor și 1, respectiv 2. Se adună la sumă, după care se shiftează rezultatul cu 1, respectiv 2.

display_and_drop

Am creat niște variabile de tip registru pentru a face atriburile necesare în blocul always.
În always, există 3 scenarii diferite, în funcție de mesajul ce trebuie afișat.
1. Dacă elicopterul nu se află în aria de aruncare, adică semnalul de validare (drop_en) nu este activ se va afișa mesajul COLD.
2. Dacă elicopterul se află în aria de aruncare (drop_en=1), dar timpul limită este prea mare (t_act>t_lim) se va afișa mesajul _HOT.
3. Dacă elicopterul poate arunca pachetul, drop_en=1, t_act<=t_lim, se va afișa mesajul DROP.
În ultimul caz, drop_activated (semnalul de alarmă) se va activa datorită îndeplinirii condiției de lansare a pachetului.
Afișarea mesajelor se face cu ajutorul modulelor 7Seg.

square_root

Pentru implementarea acestui modul am decis să folosesc Algoritmul CORDIC.
Se incepe de la o valoarea inițială y=0;
La fiecare iterație în y este adaugată valoarea din base (inițial acesta este 2^15).
După care se verifică dacă y^2 este mai mare decât valoarea primită din input (in - 8 biți) shiftată cu 16 biți la stânga.
Dacă această condiție este îndeplinită se scade din y valoarea din base ce tocmai a fost adăugată, iar dacă nu, respectiva valoarea este păstrată.
După care se shiftează la dreapta base-ul și se reia o nouă iterație (în total 16).
Astfel rezultatul este calculat după o compunere a puterilor lui 2. (.......2^3, 2^2, 2^1, 2^0, 2^(-1), 2^(-2),......)
Rezultatul va fi reprezentat în format virgulă fixă pe 16 biți.
Avantajul acestui algoritm este rapiditatea provenită din maniera exponențială cu care lucrează și operațiile de shiftare care sunt, de asemenea, rapide.