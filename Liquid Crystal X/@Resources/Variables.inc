; Liquid Crystal (kop4), portable rework.
; Put the Digital-7 Mono font in @Resources\Fonts (see the README there); it then loads automatically.

[Variables]

; Text color. Only one color1 line should be active.
; The old file had blue AND green active at once, so the result depended on which line Rainmeter picked.
color1=104,227,255,255
; green:  color1=107,255,105,255
; orange: color1=255,188,105,255

; Background image: @Resources\timebackground<color>.png. Only "blue" ships with the skin.
color=blue

; Hour format: %#H = 24h without leading zero (current look), %#I = 12h
HourFormat=%#H

color2=0,0,0,255
