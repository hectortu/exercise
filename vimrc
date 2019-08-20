set nonu
set ai
set cindent
set tabstop=2
set shiftwidth=2
set bg=dark
syntax enable
set termguicolors 
color molokai
set expandtab
filetype indent on
map <f9> :w<cr>:!g++ -O2 -std=gnu++11 -static -lm -o %< % && ./%< <cr> 
