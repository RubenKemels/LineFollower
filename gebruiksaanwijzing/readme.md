# Gebruiksaanwijzing

### opladen / vervangen batterijen
Ik gebruik 2 x 18650 Li-ion en een geschikte oplader. 

### draadloze communicatie: Ik gebruik de HC05 communicatie deze is zeer gebruiksvriendelijk, maak zeker eerst je proof of concept om te leren hoe deze werkt. Gebruik putty of een terminal die je op je gsm kan dowloaden. zelf heb ik putty gebruikt omdat dit eenvoudiger is. controleer ook zeker dat je niet meer verbonden bent met je computer poorten en uit gemaktzucht kan je ook best je HC05 een andere naam geven aangezien je ander 10 keer HC05 gaat zien.


#### commando's
debug : Met commanda debug kan je de waardes aflezen op wat je alles hebt ingesteld  
run : Met commando run kan je de robot starten  
stop  : met commando stop, stopt de robot
set cycle [µs]  : Zet de tijd wanneer de robot iets gaat uitlezen, deze stond in begin veel te hoog waardoor mijn robot veel te laat reageerde, rond de 2000ms is voldoende.
set power [0..255] : met dit commando zet je de power hoger of lager, mijn power was goed rond de 60 
set diff [0..1]  
set kp [0..]  : Om de lijn beter te volgen verhoog je kp om de lijn minder nauwkeurig te volgen verlaag je kp, wanneer je kp te hoog staat gaat hij beginnen bibberen.
set ki [0..]  : om sneller te corrigeren.
set kd [0..]  : /
calibrate black  : Zet de sensor over een zwart blad en laat hierop de cailbratie gebeuren
calibrate white  : zet je robot op een wit blad en laat hierop je calibratie gebeuren

### kalibratie
uitleg kalibratie om de robot de zwarte lijn goed te laten volgen moet je eerst de kleuren wit en zwart goed calibreren zodat het programma een onderscheid kan maken tussen deze kleuren, en hierop kan inspelen.

### settings
De robot rijdt stabiel met volgende parameters: Power = 60 , Kp = 6,3, Diff = 0,15 , Cycle time = 2000ms  

### start/stop button
Om de auto automatisch te stoppen had ik voorzien wanneer deze veel te ver over de zwarte lijn gaat springt hij af. Alsook een Stop Commando om deze op afstand snel te doen stoppen.
