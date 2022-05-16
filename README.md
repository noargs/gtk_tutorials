## Gtk2 examples on linux

VSCode configuration for `c_cpp_properties.json` file


```
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "/usr/include/linux",
                "/usr/include/glib-2.0",
                "/usr/lib/x86_64-linux-gnu/glib-2.0/include",
                "/usr/include/gtk-2.0",
                "/usr/include/cairo",
                "/usr/include/pango-1.0",
                "/usr/lib/x86_64-linux-gnu/gtk-2.0/include",
                "/usr/include/gdk-pixbuf-2.0",
                "/usr/include/atk-1.0"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "gnu11",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}
```
