Aufgabe 3.1 Schlafmodus zur Verlängerung der Batterielebensdauer (40 %):
Sie wollen Ihren Arduino als kontinuierlichen Außentemperatursensor verwenden und nach ersten Tests stellt sich heraus, dass die Lebensdauer des Akkus auf maximal ein paar Wochen beschränkt ist. Da Sie den Akku aber nicht ständig aufladen wollen, überlegen Sie sich, einen Schlafmodus zu entwickeln, um die Akkudauer auf ca. 1 Jahr erhöhen zu können. Implementieren Sie daher folgende Funktionalität:
Schreiben Sie dazu eine Funktion void sleep_delay(uint32_t seconds) (in den Dateien sleep_delay.h und sleep_delay.cpp), welche den Arduino für die angegebene Anzahl an Sekunden in den Power-down-Modus (siehe Datasheet, Kapitel 7 und avr-libc Referenz) versetzt. Diese Funktion soll erst dann beendet werden, wenn die angegebene Zeit abgelaufen ist.
Um den Arduino aus dem Schlafzustand wieder zu wecken, benötigen Sie eine Quelle für den "Weckruf". Verwenden Sie hierzu den Watchdog-Interrupt.
Die Zeit bis zur Auslösung des Watchdogs kann nicht beliebig eingestellt werden sondern nur auf einer Reihe von gegebenen Werten ausgewählt werden und die maximale Zeit ist auf 8 Sekunden beschränkt. Wenn der Mikrocontroller länger schlafen soll als diese 8 Sekunden, dann müssen Sie den Mikrocontroller in der Zwischenzeit immer wieder kurz aufwecken um ihn sofort wieder schlafen zu legen. Dabei zählen Sie mit, wie oft der Mikrocontroller schon aufgeweckt wurde. Wenn der Mikrocontroller z.B. 80 Sekunden lang schlafen soll, dann stellen Sie den Watchdog Timer auf 8 Sekunden und nach 10-mal Aufwecken wissen Sie, dass die gewünschte Schlafzeit erreicht wurde.
Ihre sleep_delay() Funktion soll für jede beliebige Zeitspanne funktionieren (also nicht nur für vielfache von 8 Sekunden) und den Mikrocontroller sekundengenau zur richtigen Zeit aufwecken.
	• Der Schlafmodus harmoniert leider nicht ganz mit der seriellen Schnittstelle, daher kann es sein, dass nach dem Aufwecken Debugausgaben nicht richtig dargestellt bzw. verschluckt werden.
Schreiben Sie ausserdem ein kleines Programm (in der Datei main.cpp), das die Verwendung ihrer sleep_delay() Funktion demonstriert.
Laden Sie Ihr Programm auf JupyterHub in einen Unterordner namens Aufgabe_1 im Ordner dieses Übungszettel hoch.
![image](https://github.com/claner2804/Embedded-Systems-hw03-01/assets/131294860/464306d1-8f0c-471a-82b7-861c8e7feeb2)
