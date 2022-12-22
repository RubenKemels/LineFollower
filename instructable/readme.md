# Instructable

Een instructable is een stappenplan - zonder verdere uitleg - hoe je vertrekkend van de bill of materials en gebruik makend van de technische tekeningen de robot kan nabouwen. Ook de nodige stappen om de microcontroller te compileren en te uploaden staan beschreven.  

### stap 1
bestel alle componenten uit de bill of materials, doe dit in groep om de verzondkosten te delen. 

### stap 2
Dowload het elektrisch schema en druk dit af. 

### stap 3
Dowload de alle proof of concepts Code + Aansluiting  en voer de proof of concepts elk apart uit.

### stap 4
Zet je robot in elkaar, maak gebruik van het elektrish schema.

### stap 5
Download de finale code, compileer deze code eerst en upload deze via een compoort die in verbinding staat met je arduino

### stap 6
Open het programma putty, zet je Bluetooth op en zoek je HC05 communiceer module. Vul je wachtwoord in van je HC05 dit is 1234 indien je dat nog niet hebt aangepast. 

### stap 7
Vul in putty het commando debug uit.

### stap 8
zet je sensor op een wit blad en voer het commando "calibrate white"uit

### stap 9
Zet je sensor op een zwart blad en voer het commando "calibrate black" uit

### stap 10
Voer het commando "debug" nog eens uit en controleer of de waardes gewijzigd zijn.

### stap 11
voer het commando "set cycle 2000" Hiermee zet je de cycletime op 2000ms

### stap 12
Voer het commando "set kp 6,3" Hiermee zet je je kp waarde op 6,3

### stap 13 
voer het commando "set diff 0,14" Hiermee zet je je diff waarde op 0,14

### stap 14
voer het commando "set power 60" Hiermee zet je de power op 60

### stap 15
Voer het commando debug uit en controleer of de waardes goed zijn doorgekomen

### stap 16
Zet je auto op de zwarte lijn en coer het commando "run" uit

### stap 17
rijdt de robot te traag / valt de robot stil => verhoog de parameter power
stuurt de robot niet snel genoeg bij => verhoog Kp
waggelt de robot over de zwarte lijn => verlaag Kp
versnelt de robot in de bochten => verlaag diff
vertraagt de robot in de bochten / valt de robot stil in de bochten => verhoog diff

### stap 18
Je robot rijdt nu goed!
