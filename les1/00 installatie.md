
## IDE downloaden
- Ga naar https://www.arduino.cc/en/software
- Scroll naar beneden en download de Legacy versie
> deze dus
> ![](img/legacy.PNG)

- Kies de installatie passend voor jou laptop!

- Klik 2 maal op “just download”.
> Je hoeft hier dus niets in te vullen!
> ![](img/download.PNG)
- Installeer vervolgens de software in het engels! 
    - Klik “yes” op alles, dit zijn benodigde drivers.


## Start

- Start de Arduino IDE, en open:        
    - File -> Preferences
    > ![](img/filepref.PNG)

- Vink deze instellingen aan 
    > ![](img/settings.PNG)
- plak de volgende link in het textfeld.
    - https://arduino.esp8266.com/stable/package_esp8266com_index.json

## Aansluiten

- sluit de NodeMCU met de USB kabel aan je laptop aan

- Ga naar:
    - Tools -> Board -> Boards Manager…
    > ![](img/boardman.PNG)
- zoek naar de esp8266
    - en installeer die
    > ![](img/esp.PNG)

## Juiste board selecteren

- Ga naar:
    - Tools -> Board -> ESP8266 Boards -> NodeMCU 1.0 (ESP-12E Module)
    > ![](img/selboard.PNG)

## Poort

- Ga naar:
    - Tools -> Port
        - Selecteer de correcte port.
        > - De poort kan veranderen elke keer dat je de NodeMCU aansluit!
        > - soms moet je even alle poorten proberen
        
    > ![](img/poort.PNG)

- werkt het niet?
     - werk dan door '00 poort problemen.md'