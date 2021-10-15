set nu
set ai
set cindent
filetype indent on
set tabstop=4
set shiftwidth=4
set expandtab
set bg=dark
syntax enable
set termguicolors 
color molokai
map <F8> :w<CR>:python % <CR>
map <f9> :w<cr>:!g++ -O2 -std=gnu++14 -static -lm -o %< % && ./%< <cr> 
