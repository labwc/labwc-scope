# TODO list

This documents aims to help discussions on scope and sequencing of coding
efforts.

1. menu
   1. [ ] Support `<separator>`
   2. [ ] Handle some basic key events
   3. [x] Keep within output geometry
   4. [x] Implement client-menu
   5. [ ] Support hover-delay (i.e. delay before showing sub-menu when hovering over sub-menu item)

2. action (issue #192)
   1. [ ] Re-write action() to take a context struct rather than C-strings
   2. [x] Add `struct wl_list actions` to the keybind and mousebind structs

3. [ ] Add `desktop_arrange_views()` to respect `output->usable` area

4. output.c
   1. [x] Move buttons calcs from output.c to ssd.c
   2. [ ] Make 'mouseover' box to be bigger than icon itself
   4. [ ] Only use one `**texture` pointer in ssd.c
   3. [ ] Move to `wlr_scene`

5. theme
   1. [ ] button background colors from themerc (currently hard-coded hover color)
   2. [ ] Add padding.width

6. [ ] Adjust view if bigger than screen (e.g. when running under sway, or if an application has been run on a big screen previously)

7. [ ] Re-consider how `xbm_icons` are called from theme.c

8. [ ] Consider where view co-ordinates are made output local. Consider introducing `output->lx` and `output->ly`. Might be overtaken-by-events with scene-graph API.

9. [ ] Create `view_update_size()` and `view_update_position()` and include damage() functions in these

10. [ ] seat: unfocus popups when changing focus - for example, when clicking on title bar, active menus should close

11. `<mousebind>`
    1. [x] Implementing `Drag` action
    2. [ ] Implement `<mousebind><default />`

12. [ ] Support output power management (possibly using [wlr-output-power-management-unstable-v1] and [wlopm])

13. [ ] Split `include/labwc.h` into multiple header-files to go with each translation unit; and only include type declrations and prototypes.

[wlr-output-power-management-unstable-v1]: https://gitlab.freedesktop.org/wlroots/wlr-protocols/-/blob/master/unstable/wlr-output-power-management-unstable-v1.xml
[wlopm]: https://git.sr.ht/~leon_plickat/wlopm


