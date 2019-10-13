#!/bin/bash
#variable que contiene la fecha hora minuto y segundo
date=$( date +"%Y-%m-%d_%H%M%S" )
    #Hacer foto

    raspistill  -vf -hf -o /home/pi/fotos/$date.jpg

    echo "UN INTRUSO EN TU CASA" | mutt -s "Movimiento detectado" kmarsiglia@uniguajira.edu.co -a /home/pi/fotos/$date.jpg
