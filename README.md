# Présentation :

L'objectif de ce TP est de récupérer les données de l'accéléromètre (ADXL345) situé sur la De10Lite et de les afficher sur des afficheurs 7 segments.
On pourra switcher d'un axe à l'autre en appuyant sur un bouton poussoir.
Nous interfacerons le Nios II avec l'ADXL345 via le protocole de communication i2c.

# Architecture du système

![image](https://github.com/ESN2024/Podgorski_Lab3/assets/145102054/b8e7f880-a901-4766-a6e3-4ab3d4e39fc9)


Le système est composé de :
•	Un processeur Nios II
•	Une mémoire RAM
•	Une horloge
•	Un JTAG UART
•	6 PIOs 4 bits qui contrôleront les afficheurs 7 segments
•	Un PIO 1 bits pour le bouton poussoir (KEY1).
•	Un Timer avec une période de 1s.
•	Un OpenCores i2c.

# Configuration matérielle :

Afin de configurer le FPGA, nous avons créé le fichier Qsys ci-dessus qui contient toute la description matérielle de notre système.
Nous avons ensuite créé un fichier vhdl « BCD_2_7SEG » qui contient un décodeur, ainsi que notre fichier top-level « gyroscope_data.vhd » qui instanciera 6 décodeurs (1 par afficheur 7 segments) et une fois les composants décrits dans le fichier Qsys.
Après la mise en place des connections entre les signaux d’entrées-sorties et les broches physiques du FPGA dans le pin planner, et une compilation sans erreur, nous pouvons maintenant flasher le bitstream sur la carte.
Le FPGA est maintenant configuré comme on le souhaite, il ne reste plus qu’à créer le software lié au système et le télécharger sur la carte.

# Implémentation logicielle :

Nous allons maintenant créer notre fichier main.c
Nous souhaitons accéder aux données de l’accéléromètre. Pour cela nous avons besoin de lire et écrire sur le bus i2c aux registres de l’accéléromètre qui contiennent les données utiles.
La première étape est donc la création de fonctions de lecture de d’écriture aux registres contenant les données de l’accéléromètre.
Il faut ensuite, lors de l’interruption du timer, lire les valeurs des registres en question, leur appliquer le facteur de sensibilité, et actualiser les valeurs sur les afficheurs 7 segments selon l’axe (x,y ou z) déterminer par l’interruption du bouton poussoir.

La dernière étape est la calibration. L’idée est d’écrire dans les registres d’offset de l’accéléromètre afin d’y appliquer une valeur d’offset déterminée à la main pour chaque axe.

# Vidéo :



https://github.com/ESN2024/Podgorski_Lab3/assets/145102054/04859c87-7fd7-402c-8f5c-9b641bca6239



# Conclusion :



