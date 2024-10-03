/*
This file is part of still-alive.

still-alive is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License

still-alive is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.
*/

#ifndef _ASCII_H
#define _ASCII_H

/*this file contains all ascii-art used in program*/

#include <string>

enum class ASCII_IMAGES
{
    APERTURE,
    RADIATION,
    ATOM,
    HEART,
    EXPLOSION,
    FIRE,
    CHECK,
    BLACKMESA,
    CAKE,
    GLADOS,
};

constexpr int bordersWidth = 102;
constexpr int bordersHeight = 38;
constexpr int asciiX = 57;
constexpr int asciiY = 16;
constexpr int asciiWidth = 42;
constexpr int asciiHeight = 20;
constexpr int lyricsBoxX = 0;
constexpr int lyricsBoxY = 0;
constexpr int lyricsWidth = 51;
constexpr int lyricsHeight = 36;
constexpr int creatorsBoxX = 51;
constexpr int creatorsBoxY = 0;
constexpr int creatorsWidth = 51;
constexpr int creatorsHeight = 16;

const std::string aperture[]
{
"              .,-:;//;:=,               \n",
"          . :H@@@MM@M#H/.,+%;,          \n",
"       ,/X+ +M@@M@MM%=,-%HMMM@X/,       \n",
"     -+@MM; $M@@MH+-,;XMMMM@MMMM@+-     \n",
"    ;@M@@M- XM@X;. -+XXXXXHHH@M@M#@/.   \n",
"  ,%MM@@MH ,@%=            .---=-=:=,.  \n",
"  =@#@@@MX .,              -%HX$$%%%+;  \n",
" =-./@M@M$                  .;@MMMM@MM: \n",
" X@/ -$MM/                    .+MM@@@M$ \n",
",@M@H: :@:                    . =X#@@@@-\n",
",@@@MMX, .                    /H- ;@M@M=\n",
".H@@@@M@+,                    %MM+..%#$.\n",
" /MMMM@MMH/.                  XM@MH; =; \n",
"  /%+%$XHH@$=              , .H@@@@MX,  \n",
"   .=--------.           -%H.,@@@@@MX,  \n",
"   .%MM@@@HHHXX$$$%+- .:$MMX =M@@MM%.   \n",
"     =XMMM@MM@MM#H;,-+HMM@M+ /MMMX=     \n",
"       =%@M@M#@$-.=$@MM@@@M; %M%=       \n",
"         ,:+$+-,/H#MMMMMMM@= =,         \n",
"               =++%%%%+/:=              \n"
};

const std::string radiation[]
{
"             =+$HM####@H%;,             \n",
"          /H###############M$,          \n",
"          ,@################+           \n",
"           .H##############+            \n",
"             X############/             \n",
"              $##########/              \n",
"               %########/               \n",
"                /X/;;+X/                \n",
"                                        \n",
"                 -XHHX-                 \n",
"                ,######,                \n",
"#############X  .M####M.  X#############\n",
"##############-   -//-   -##############\n",
"X##############%,      ,+##############X\n",
"-##############X        X##############-\n",
" %############%          %############% \n",
"  %##########;            ;##########%  \n",
"   ;#######M=              =M#######;   \n",
"    .+M###@,                ,@###M+     \n",
"       ;XH                    HX;       \n"
};

const std::string atom[]
{
"                 =/;;/-                 \n",
"                +:    //                \n",
"               /;      /;               \n",
"              -X        H.              \n",
".//;;;:;;-,   X=        :+   .-;:=;:;%;.\n",
"M-       ,=;;;#:,      ,:#;;:=,       ,@\n",
":%           :%.=/++++/=.$=           %=\n",
" ,%;         %/:+/;,,/++:+/         ;+. \n",
"   ,+/.    ,;@+,        ,%H;,    ,/+,   \n",
"      ;+;;/= @.  .H##X   -X :///+;      \n",
"      ;+=;;;.@,  .XM@$.  =X.//;=%/.     \n",
"   ,;:      :@%=        =$H:     .+%-   \n",
" ,%=         %;-///==///-//         =%, \n",
";+           :%-;;;:;;;;-X-           +:\n",
"@-      .-;;;;M-        =M/;;;-.      -X\n",
" :;;::;;-.    %-        :+    ,-;;-;:== \n",
"              ,X        H.              \n",
"               ;/      %=               \n",
"                //    +;                \n",
"                  ////                  \n"
};

const std::string heart[]
{
"                          .,---.        \n",
"                        ,/XM#MMMX;,     \n",
"                      -%##########M%,   \n",
"                     -@######%  $###@=  \n",
"      .,--,         -H#######$   $###M: \n",
"   ,;$M###MMX;     .;##########$;HM###X=\n",
",/@###########H=      ;################+\n",
"-+#############M/,      %##############+\n",
"%M###############=      /##############:\n",
"H################      .M#############;.\n",
"@###############M      ,@###########M:. \n",
"X################,      -$=X#######@:   \n",
"/@##################%-     +######$-    \n",
".;##################X     .X#####+,     \n",
" .;H################/     -X####+.      \n",
"   ,;X##############,       .MM/        \n",
"      ,:+$H@M#######M#$-    .$$=        \n",
"           .,-=;+$@###X:    ;/=.        \n",
"                  .,/X$;   .::,         \n",
"                      .,    ..          \n"
};

const std::string explosion[]
{
"            .+                          \n",
"             /M;                        \n",
"              H#@:              ;,      \n",
"              -###H-          -@/       \n",
"               %####$.  -;  .%#X        \n",
"                M#####+;#H :M#M.        \n",
"..          .+/;%#############-         \n",
" -/%H%+;-,    +##############/          \n",
"    .:$M###MH$%+############X  ,--=;-   \n",
"        -/H#####################H+=.    \n",
"           .+#################X.        \n",
"         =%M####################H;.     \n",
"            /@###############+;;/%%;,   \n",
"         -%###################$         \n",
"       ;H######################M=       \n",
"    ,%#####MH$%;+#####M###-/@####%      \n",
"  :$H%+;=-      -####X.,H#   -+M##@-    \n",
" .              ,###;    ;      =$##+   \n",
"                .#H,               :XH, \n",
"                 +                   .;-\n"
};

const std::string fire[]
{
"                     -$-                \n",
"                    .H##H,              \n",
"                   +######+             \n",
"                .+#########H.           \n",
"              -$############@.          \n",
"            =H###############@  -X:     \n",
"          .$##################:  @#@-   \n",
"     ,;  .M###################;  H###;  \n",
"   ;@#:  @###################@  ,#####: \n",
" -M###.  M#################@.  ;######H \n",
" M####-  +###############$   =@#######X \n",
" H####$   -M###########+   :#########M, \n",
"  /####X-   =########%   :M########@/.  \n",
"    ,;%H@X;   .$###X   :##MM@%+;:-      \n",
"                 ..                     \n",
"  -/;:-,.              ,,-==+M########H \n",
" -##################@HX%%+%%$%%%+:,,    \n",
"    .-/H%%%+%%$H@###############M@+=:/+:\n",
"/XHX%:#####MH%=    ,---:;;;;/&&XHM,:###$\n",
"$@#MX %+;-                           .  \n"
};

const std::string check[]
{
"                                     :X-\n",
"                                  :X### \n",
"                                ;@####@ \n",
"                              ;M######X \n",
"                            -@########$ \n",
"                          .$##########@ \n",
"                         =M############-\n",
"                        +##############$\n",
"                      .H############$=. \n",
"         ,/:         ,M##########M;.    \n",
"      -+@###;       =##########M;       \n",
"   =%M#######;     :#########M/         \n",
"-$M###########;   :########/            \n",
" ,;X###########; =#######$.             \n",
"     ;H#########+######M=               \n",
"       ,+#############+                 \n",
"          /M########@-                  \n",
"            ;M#####%                    \n",
"              +####:                    \n",
"               ,$M-                     \n"
};

const std::string blackMesa[]
{
"           .-;+$XHHHHHHX$+;-.           \n",
"        ,;X@@X%/;=----=:/%X@@X/,        \n",
"      =$@@%=.              .=+H@X:      \n",
"    -XMX:                      =XMX=    \n",
"   /@@:                          =H@+   \n",
"  %@X,                            .$@$  \n",
" +@X.                               $@% \n",
"-@@,                                .@@=\n",
"%@%                                  +@$\n",
"H@:                                  :@H\n",
"H@:         :HHHHHHHHHHHHHHHHHHX,    =@H\n",
"%@%         ;@M@@@@@@@@@@@@@@@@@H-   +@$\n",
"=@@,        :@@@@@@@@@@@@@@@@@@@@@= .@@:\n",
" +@X        :@@@@@@@@@@@@@@@M@@@@@@:%@% \n",
"  $@$,      ;@@@@@@@@@@@@@@@@@M@@@@@@$. \n",
"   +@@HHHHHHH@@@@@@@@@@@@@@@@@@@@@@@+   \n",
"    =X@@@@@@@@@@@@@@@@@@@@@@@@@@@@X=    \n",
"      :$@@@@@@@@@@@@@@@@@@@M@@@@$:      \n",
"        ,;$@@@@@@@@@@@@@@@@@@X/-        \n",
"           .-;+$XXHHHHHX$+;-.           \n"
};

const std::string cake[]
{
"            ,:/+/-                      \n",
"            /M/              .,-=;//;-  \n",
"       .:/= ;MH/,    ,=/+%$XH@MM#@:     \n",
"      -$##@+$###@H@MMM#######H:.    -/H#\n",
" .,H@H@ X######@ -H#####@+-     -+H###@X\n",
"  .,@##H;      +XM##M/,     =%@###@X;-  \n",
"X%-  :M##########$.    .:%M###@%:       \n",
"M##H,   +H@@@$/-.  ,;$M###@%,          -\n",
"M####M=,,---,.-%%H####M$:          ,+@##\n",
"@##################@/.         :%H##@$- \n",
"M###############H,         ;HM##M$=     \n",
"#################.    .=$M##M$=         \n",
"################H..;XM##M$=          .:+\n",
"M###################@%=           =+@MH%\n",
"@#################M/.         =+H#X%=   \n",
"=+M###############M,      ,/X#H+:,      \n",
"  .;XM###########H=   ,/X#H+:;          \n",
"     .=+HM#######M+/+HM@+=.             \n",
"         ,:/%XM####H/.                  \n",
"              ,.:=-.                    \n"
};

const std::string GLaDOS[]
{
"       #+ @      # #              M#@   \n",
" .    .X  X.%##@;# #   +@#######X. @H%  \n",
"   ,==.   ,######M+  -#####%M####M-    #\n",
"  :H##M%:=##+ .M##M,;#####/+#######% ,M#\n",
" .M########=  =@#@.=#####M=M#######=  X#\n",
" :@@MMM##M.  -##M.,#######M#######. =  M\n",
"             @##..###:.    .H####. @@ X,\n",
"   ############: ###,/####;  /##= @#. M \n",
"           ,M## ;##,@#M;/M#M  @# X#% X# \n",
".%=   ######M## ##.M#:   ./#M ,M #M ,#$ \n",
"##/         $## #+;#: #### ;#/ M M- @# :\n",
"#+ #M@MM###M-;M #:$#-##$H# .#X @ + $#. #\n",
"      ######/.: #%=# M#:MM./#.-#  @#: H#\n",
"+,.=   @###: /@ %#,@  ##@X #,-#@.##% .@#\n",
"#####+;/##/ @##  @#,+       /#M    . X, \n",
"   ;###M#@ M###H .#M-     ,##M  ;@@; ###\n",
"   .M#M##H ;####X ,@#######M/ -M###$  -H\n",
"    .M###%  X####H  .@@MM@;  ;@#M@      \n",
"      H#M    /@####/      ,++.  / ==-,  \n",
"               ,=/:, .+X@MMH@#H  #####$=\n"
};

#endif