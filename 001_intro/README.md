### Installation      
      
- Install GTK3 on mac with `brew install gtk+3`     
- Type following enries into bash i.e. `.zshrc` etc    
```bash
export PKG_CONFIG_PATH=/usr/local/Cellar/cairo/1.12.16/lib/pkgconfig/
export PKG_CONFIG_PATH=/usr/X11/lib/pkgconfig
```    
### Build/run GTK program      
```bash
$ gcc `pkg-config --cflags gtk+-3.0` -o gtktest gtktest.c `pkg-config --libs gtk+-3.0`
$ ./gtktest.c
```     

