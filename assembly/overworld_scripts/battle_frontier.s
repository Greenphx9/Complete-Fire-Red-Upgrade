.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"


.global EventScript_FrontierTest
EventScript_FrontierTest:
    lock
    setvar 0x5015 0x3
    setvar 0x5016 0x64
    setvar 0x5017 0x0
    setvar 0x5018 0x0
    special 0x27
    special 0xF5
    waitstate
    setvar 0x8000 0x0
    setvar 0x8001 0x0
    special2 0x5028 0x52
    setvar 0x8000 0x0
    setvar 0x8001 0x0
    special 0x53
    callstd 0x6
    special 0x73
    trainerbattle9 0x9 0x399 0x0 0x0 0x0
    release
    end