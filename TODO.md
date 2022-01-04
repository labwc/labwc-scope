# TODO list

This documents aims to help discussions on scope and sequencing of coding
efforts.

- menu
   - Support `<separator>`
   - Handle some basic key events
   - Keep within output geometry
   - Implement client-menu
   - Support hover-delay (i.e. delay before showing sub-menu when hovering
     over sub-menu item)

- action (issue #192)
   - Re-write action() to take a context struct rather than C-strings
   - Add `struct wl_list actions` to the keybind and mousebind structs

- Add `desktop_arrange_views()` to respect `output->usable` area

- output.c
   1. Move buttons calcs from output.c to ssd.c
   2. Make 'mouseover' box to be bigger than icon itself
   4. Only use one `**texture` pointer in ssd.c
   3. Move to `wlr_scene`

- theme
    - button background colors from themerc (currently hard-coded hover
      color)
    - Add padding.width

- Adjust view if bigger than screen (e.g. when running under sway, or if
  an application has been run on a big screen previously)

- Re-consider how `xbm_icons` are called from theme.c

- Consider where view co-ordinates are made output local (probably not in
  `render_rect()`). Consider introducing `output->lx` and `output->ly`

- Create `view_update_size()` and `view_update_position()` and include
  damage() functions in these

- seat: unfocus popups when changing focus - for example, when clicking on
  title bar, active menus should close

- `<mousebind>`
    - Consider implementing `Drag` action
    - Implement `<mousebind><default />`

- What's the difference between `cursor_rebase()` and
  `cursor_update_focus()` - do we only need the former?

- Support output power management (possibly using
  [wlr-output-power-management-unstable-v1] and [wlopm])

- Split `include/labwc.h` into multiple header-files to go with each
  translation unit; and only include type declrations and prototypes.


[wlr-output-power-management-unstable-v1]: https://gitlab.freedesktop.org/wlroots/wlr-protocols/-/blob/master/unstable/wlr-output-power-management-unstable-v1.xml
[wlopm]: https://git.sr.ht/~leon_plickat/wlopm


