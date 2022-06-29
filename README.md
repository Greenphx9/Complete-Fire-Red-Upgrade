# Complete Fire Red Upgrade

## Duplicate Ability System

# What is this branch for?
This adds an array of duplicate abilities, and changes the name of the ability for specific Pokemon. This creates the illusion of multiple abilities, even though only 1 is actually defined. This saves ability space (you can only have 255, all 255 are being used currently).

# How can I add a new one to the array?
For this tutorial, we will be using Chilling Neigh over Moxie as an example. This tutorial assumes you've already given the Pokemon the duplicate ability / ability to be replaced.

1. Add the ability name to `strings/ability_name_table.string`, following the format below. Replace any spaces with underscores.

#org @NAME_<ABILITY_NAME>.

Ability Name

To add Chilling Neigh, add this:

#org @NAME_CHILLING_NEIGH.

Chilling Neigh

2. Open `src/tables/duplicate_abilities.h`. You'll see a bunch of `extern const u8`s at the top. Add a new one, using the name of the ability in step 1. To add Chilling Neigh, add this:

extern const u8 NAME_CHILLING_NEIGH[];

3. Add the Pokemon, it's current, duplicate ability, and the replacement ability name to the array, following the format below.


    `{
    
        .species = SPECIES_MEDITITE, //Mon
        
        .currAbility = ABILITY_HUGEPOWER, //The original abilitiy
        
        .replaceAbilityString = NAME_PURE_POWER, //The new ability name
        
    },`
    
 
 To add Chilling Neigh, add this to the bottom of the array (you can add `SPECIES_CALYREX_ICE_RIDER` as well):
 
     
    {
    
        .species = SPECIES_GLASTRIER,
        
        .currAbility = ABILITY_MOXIE,
        
        .replaceAbilityString = NAME_CHILLING_NEIGH,
        
    },
 
 4. Go to `src/build_pokemon.c` and hit Control + S. This will save the file, making the compiler recompile it, meaning the Duplicate Ability file will actually change.
 5. It should be working!
 

## What is this?
A complete upgrade for FireRed, including an upgraded Battle Engine. By using this or any assets from this repository, you consent to never making money off your game (unless you have my explicit permission). That includes both pay-walls **as well as optional donations** (which includes ko-fi, Patreon, etc.). If you have a problem with this, feel free to send me a Discord message (Skeli#3917) and I will give you my PayPal so you can pay me $100000 for the hundreds if not thousands of hours I poured into this for **free** (I don't actually want your money - I'm trying to make a point). Not to mention it's illegal to profit off of an IP you don't own.

**Before doing anything it is HIGHLY recommended the documentation be read thoroughly.**

## Features
* Expanded PC Boxes (up to 25!)
* Battle Engine Upgraded to Gen 8
  * All Moves, Abilities, Items, Item Effects through Gen 8
  * A complete set of move animations
  * Vastly improved AI system with decision-making skills for all new battle effects
  * Z Moves
  * Mega Evolution / Primal Reversion / Ultra Burst
  * Ability pop-ups
  * Hidden Abilities
  * Dissapearing HP-bars during Attack Animations
  * Trainer Sliding / In-battle messages
  * Expanded Poké Balls
  * Battle Terrain
  * Totem Pokémon
  * Trainers with EVs
  * Class-based Music
  * Class-based Poké Balls
  * Dynamic Trainer Backsprites
  * Pre-battle mugshots
  * Wild double battles
  * Multi Battles (with a partner)
  * New Evolution Methods
  * Expanded Learnsets
  * Badge-based obedience
  * Shiny Charm + Oval Charm
  * Level Scaling
  * Updated Exp. Share
  * Inverse Battles, Sky Battles
  * Overworld trainer facing
  * Move types light up on move menu based on effectiveness
* Battle Frontier/Facilities
* Expanded Move Reminder (up to 50 moves)
* Improved Tm/Hm Expansion, Reusable TMs
* Updated Pickup mechanics
* Swarms
* Day/Night/Seasons
* Roaming Pokémon
* JPANs engine features ported and redesigned/improved in many ways
  * Character Customization
  * Lots of new scripting specials
  * Whiteout hack / text updates
  * And more!
* Save-block expansion
* DexNav and secondary PokéTools Start Menu
* Dynamic overworld palettes
* Updated Daycare system
* Expanded Text Names (Abilities, etc)
* Select Pokemon from PC directly
* Scrolling summary screen
* Base stats on pokedex summary screen
* Updated repel system
* Configurable Start Menu
* Follow Me
* Expanded Pokemon in the Hall of Fame
* Triple Layer Blocks
* Expanded Text Buffers
* Footstep noise in grass & on sand
* Omnidirectional Jumping
* Item Image on obtain
* Move Items on Party Screen
* New Field Moves like Rock Climb & Defog
* Expanded Coins, Safari Balls/Steps
* Fairy Type
* Oval Charm
* And More!

**NOTE** Personalized options are available in *src/config.h*. The options can be customized by commenting and uncommenting lines.

**Note** Pokemon Expansion can be found [here](https://github.com/Skeli789/Dynamic-Pokemon-Expansion)

## Installation Instructions
### Windows
See [the wiki](https://github.com/Skeli789/Complete-Fire-Red-Upgrade/wiki/Windows-Installation-Instructions).

### UNIX-like OS (Linux, MacOS, ...)
1. Install devkitPro with instructions [here](https://devkitpro.org/wiki/Getting_Started).

2. Export `${DEVKITARM}/bin/` to your `PATH` variable.

3. Make sure you've installed python 3.6+ and it can be called directly via either `python` or `python3`.

4. Clone the repo and go inside:   
```bash
git clone https://github.com/Skeli789/Complete-Fire-Red-Upgrade
cd Complete-Fire-Red-Upgrade
```

5. Get your ROM into the current directory and rename it to **BPRE0.gba**.

6. Configure the offset you want to insert the code:
In *scripts/make.py* change `OFFSET_TO_PUT=YYY` to the location you want to insert the data.

7. Run `python scripts/make.py` (or `python3 scripts/make.py` if you’ve installed multiple python versions).

A new gba file will appear named as **test.gba** and an **offsets.ini** file.
Those are your resultant files.

## Notes

Anytime you make changes, the compiler will only compile the files you have changed.

### Specific to Windows
Any changes made to header files will require you to type ``python scripts//clean.py build``
in cmd and then rerun the build scripts. For more command line options, see "Engine
Scripts" in the documentation.

### Specific to UNIX-like OS (linux, macOS, ...):
Any changes made to header files will require you to clean everything in *build/* and then rerun the build scripts.
