/* 
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /        __________   _________   ___________   __________    _________                             /
   /       /___   ___/  /   _____/  /  _____   /  /  _____   \  /  ______/       \\            //      /
   /          /  /     /  /        /  /    /  /  /  /    /  /  /  /_____        \\             //      /
   /         /  /     /  /        /  /____/  /  /  /___/  /   /  ______/   \\\   \\    []    //   ///  /
   /     ___/  /__   /  /_____   /   ____   /  /   ___   \   /  /_____        \\\\--]]]/\[[[--////     /
   /    /________/  /________/  /__/    /__/  /__/    \__/  /________/         /////--][][--\\\\\      /
   /                                                                         //   //--][][--\\   \\    /
   /   ______________________________________________________________           //    ][][    \\       /
   /                                                                                                   /
   /                                                                                                   /
   /  This program is free software for arduino; you can redistribute it and/or modify.                /
   /  Ce programme pour Arduino est libre et gratuit; vous pouvez le distribuez et/ou le modifier.     /
   /                                                                                                   /
   / Another codes / Autres codes:                                                                     /
   / https://www.icaremaker.com                                                                        /
   / Mail: ionocraft@hotmail.fr                                                                        /
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
*/

#include <Keyboard.h>

// Cablage entrée pullup = entrée INPUT_PULLUP << poussoir << masse

const int boutonActionA = 2;     // Touche HAUT
const int boutonActionB = 3;     // Touche BAS
const int boutonActionC = 4;     // Touche GAUCHE
const int boutonActionD = 5;     // Touche DROITE
const int boutonActionE = 6;     // Touche ACTION E
const int boutonActionF = 7;     // Touche ACTION F


void setup ()
  {
  pinMode(boutonActionA, INPUT_PULLUP); 
  pinMode(boutonActionB, INPUT_PULLUP);  
  pinMode(boutonActionC, INPUT_PULLUP); 
  pinMode(boutonActionD, INPUT_PULLUP); 
  pinMode(boutonActionE, INPUT_PULLUP); 
  pinMode(boutonActionF, INPUT_PULLUP); 
  
  Keyboard.begin();
 }

void loop()
{
    if(digitalRead(boutonActionA)==LOW)
    {
      Keyboard.press(0xDA); // FLECHE HAUT
      delay(100);
      Keyboard.releaseAll();
      delay(100);
    }
    
    if(digitalRead(boutonActionB)==LOW)
    {
      Keyboard.press(0xD9);   // FLECHE BAS
      delay(100);
      Keyboard.releaseAll();
      delay(100);
    }
	
	if(digitalRead(boutonActionC)==LOW)
    {
      Keyboard.press(0xD8);   // FLECHE GAUCHE
      delay(100);
      Keyboard.releaseAll();
      delay(100);
    }
	
	if(digitalRead(boutonActionD)==LOW)
    {
      Keyboard.press(0xD7);   // FLECHE DROIT
      delay(100);
      Keyboard.releaseAll();
      delay(100);
    }
	if(digitalRead(boutonActionE)==LOW)
    {
      Keyboard.press(0xE1);   // TOUCHE 1
      delay(100);
      Keyboard.releaseAll();
      delay(100);
    }
	if(digitalRead(boutonActionF)==LOW)
    {
      Keyboard.press(0xE2);   // TOUCHE 2
      delay(100);
      Keyboard.releaseAll();
      delay(100);
    }
	
}
