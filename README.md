# Doom

Fork from the original Doom source code ([here](https://github.com/id-Software/DOOM)) with some changes to allow a valid compilation
and execution in "modern" machines.

This is for some kind of "personal project" I'm working on, so if you're looking for something stable or more usable, try the
following ports/versions (I used some of them to check for bugs/issues when adapting my own version too!):

- [doomgeneric](https://github.com/ozkl/doomgeneric)
- [chocolate doom](https://github.com/chocolate-doom/chocolate-doom)

## Checklist

- no sound :)
- network game disabled (I_InitNetwork repurposed for enabling single player mode only)
- uses X11 libs for image displaying (Pixmap + XDrawPoint + XCopyArea <-- same as __doomgeneric__)
- lot of "cleaning" pending (unused stuff, version-related content, etc.)
- several important warnings fixed (mostly pointer-related)

## TODO

[Here](https://github.com/theisolinearchip/doom/blob/main/TODO.txt)