Code for project 3 - fantasy combat game

Description:
Game contains different fantasy characters created using polymorphism. Each character is given different Attack, Defense, Armor, and Strength (health) values. 

Certain characters have special abilities:
*Charm: Vampires can charm an opponent into not attacking. For a given attack there is a 50% chance that their opponent does not actually attack them.

*Glare: If a Medusa rolls a 12 in attack, then the target has looked her in the eyes and is turned to stone. The Medusa wins! If Medusa uses Glare on Harry Potter on his first life, then Harry Potter get back to life. If the Vampire's Charm ability activates versus Medusa's Glare, the Vampire's Charm trump the Glare.

*Mob: The Blue Men are actually a swarm of small individuals. For every 4 points of damage (round down), they lose one defense die. For example, when they reach strength of 8 they only have 2d6 for defense.

*Hogwarts: If Harry dies (i.e. strength <=0), he immediately recovers and his total strength becomes 20. If he were to die again, then he’s dead.

NOTE: The sample creatures are unbalanced intentionally to help with debugging! Some will win a lot, and others will lose a lot.

Overview of runtime:
A menu with descriptions of each character is displayed. The user is then prompted to choose two fighters to battle each other.
The fight will continue until one side has won, and the results of each round is printed on to the screen. The victor is then announced. After the fight has ended, the user is asked if they would like to play again.






