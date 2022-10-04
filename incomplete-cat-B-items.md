This file has been auto-generated based on README.md. Do not edit it manually

| Cat | Status   | Reference | Category                        | Description                                             | Comment
| --- | -------- | --------- | ------------------------------- | ------------------------------------------------------- | -------
|  B+ |          | 2.4.2     | theme                           | `titleLayout`                                           |
|  B  |          | 1.2.6     | wayland-protocol                | input-method-unstable-v1                                |
|  B  |          | 1.2.7     | wayland-protocol                | input-timestamps-unstable-v1                            |
|  B  |          | 1.2.8     | wayland-protocol                | keyboard-shortcuts-inhibit-unstable-v1                  | This is controversial [^3]
|  B  |          | 1.2.9     | wayland-protocol                | linux-dmabuf-unstable-v1                                |
|  B  |          | 1.2.10    | wayland-protocol                | linux-explicit-synchronization-unstable-v1              |
|  B  |          | 1.2.12    | wayland-protocol                | pointer-gestures-unstable-v1                            |
|  B  |          | 1.2.15    | wayland-protocol                | tablet-unstable-v2                                      |
|  B  |          | 1.2.16    | wayland-protocol                | text-input-unstable-v3                                  |
|  B  |          | 1.2.18    | wayland-protocol                | xdg-foreign-unstable-v2                                 |
|  B  |          | 1.2.20    | wayland-protocol                | xwayland-keyboard-grab-unstable-v1                      |
|  B  |          | 1.2.22    | wayland-protocol                | [ext-session-lock-v1]                                   | This is more secure [^1]
|  B  |          | 1.2.23    | wayland-protocol                | xdg-activation-v1                                       |
|  B  |          | 2.1.1     | resistance                      | `strength`                                              | If we implement, consider a better name
|  B  |          | 2.4.4     | theme                           | `keepBorder`                                            |
|  B  |          | 2.4.7     | theme                           | `<font place="InactiveWindow">`                         |
|  B  |          | 2.4.8     | theme                           | `<font place="MenuHeader">`                             |
|  B  |          | 2.7.1     | applications                    | `decor`                                                 |
|  B  |          | 2.7.3     | applications                    | `position`                                              |
|  B  |          | 2.7.4     | applications                    | `size`                                                  |
|  B  |          | 2.7.6     | applications                    | `desktop`                                               |
|  B  |          | 2.7.7     | applications                    | `layer`                                                 | If we implement, consider better name
|  B  |          | 2.7.12    | applications                    | `maximized`                                             |
|  B  |          | 2.11.1    | menu                            | `hideDelay`                                             |
|  B  |          | 2.11.3    | menu                            | `submenuShowDelay`                                      |
|  B  |          | 2.11.6    | menu                            | `file`                                                  | TODO: is this supported already?
|  B  |          | 3.3.14    | mouse context                   | `Icon`                                                  |
|  B  |          | 3.4.1     | mouse button                    | `Middle`                                                |
|  B  |          | 3.4.1     | mouse button                    | `Up` (scroll)                                           |
|  B  |          | 3.4.1     | mouse button                    | `Down` (scroll)                                         |
|  B  |          | 3.5.4     | mouse event                     | `Release`                                               |
|  B  |          | 4.5       | global action                   | `DirectionalCycleWindows`                               |
|  B  |          | 4.6       | global action                   | `DirectionalTargetWindows`                              |
|  B  |          | 4.8       | global action                   | `AddDesktop`                                            |
|  B  |          | 4.9       | global action                   | `RemoveDesktop`                                         |
|  B  |          | 4.10      | global action                   | `ToggleShowDesktop`                                     |
|  B  |          | 4.13      | global action                   | `Restart`                                               |
|  B  |          | 4.15      | global action                   | `SessionLogout`                                         |
|  B  |          | 5.3       | window action                   | `Lower`                                                 |
|  B  |          | 5.4       | window action                   | `RaiseLower`                                            |
|  B  |          | 5.5       | window action                   | `UnFocus`                                               |
|  B  |          | 5.6       | window action                   | `FocusToBottom`                                         |
|  B  |          | 5.9       | window action                   | `ToggleShade`                                           |
|  B  |          | 5.10      | window action                   | `Shade`                                                 |
|  B  |          | 5.11      | window action                   | `Unshade`                                               |
|  B  |          | 5.14      | window action                   | `Maximize`                                              | Needed if we implement 2.7 `<applications>`
|  B  |          | 5.15      | window action                   | `Unmaximize`                                            | Needed if we implement 2.7 `<applications>`
|  B  |          | 5.18      | window action                   | `Decorate`                                              | Needed if we implement 2.7 `<applications>`
|  B  |          | 5.19      | window action                   | `Undecorate`                                            | Needed if we implement 2.7 `<applications>`
|  B  |          | 5.23      | window action                   | `MoveResizeTo`                                          |
|  B  |          | 5.24      | window action                   | `MoveRelative`                                          |
|  B  |          | 5.25      | window action                   | `ResizeRelative`                                        |
|  B  |          | 5.27      | window action                   | `GrowToEdge`                                            |
|  B  |          | 5.28      | window action                   | `GrowToFill`                                            |
|  B  |          | 5.29      | window action                   | `ShrinkToEdge`                                          |
|  B  |          | 6.1.2     | geometry                        | `menu.border.width`                                     |
|  B  |          | 6.1.10    | geometry                        | `padding.width`                                         |
|  B  |          | 6.1.14    | geometry                        | `menu.overlap`                                          |
|  B  |          | 6.2.2     | border colors                   | `window.active.title.separator.color`                   |
|  B  |          | 6.2.4     | border colors                   | `window.inactive.title.separator.color`                 |
|  B  |          | 6.2.6     | border colors                   | `window.active.client.color`                            |
|  B  |          | 6.2.7     | border colors                   | `window.inactive.client.color`                          |
|  B  |          | 6.2.8     | border colors                   | `menu.border.color`                                     |
|  B  |          | 6.3.4     | titlebar colors                 | `window.active.button.pressed.image.color`              |
|  B  |          | 6.3.5     | titlebar colors                 | `window.active.button.disabled.image.color`             |
|  B  |          | 6.3.6     | titlebar colors                 | `window.active.button.hover.image.color`                |
|  B  |          | 6.3.7     | titlebar colors                 | `window.active.button.toggled.unpressed.image.color`    |
|  B  |          | 6.3.8     | titlebar colors                 | `window.active.button.toggled.pressed.image.color`      |
|  B  |          | 6.3.9     | titlebar colors                 | `window.active.button.toggled.hover.image.color`        |
|  B  |          | 6.3.10    | titlebar colors                 | `window.active.button.toggled.image.color`              |
|  B  |          | 6.3.12    | titlebar colors                 | `window.inactive.button.pressed.image.color`            |
|  B  |          | 6.3.13    | titlebar colors                 | `window.inactive.button.disabled.image.color`           |
|  B  |          | 6.3.14    | titlebar colors                 | `window.inactive.button.hover.image.color`              |
|  B  |          | 6.3.15    | titlebar colors                 | `window.inactive.button.toggled.unpressed.image.color`  |
|  B  |          | 6.3.16    | titlebar colors                 | `window.inactive.button.toggled.pressed.image.color`    |
|  B  |          | 6.3.17    | titlebar colors                 | `window.inactive.button.toggled.hover.image.color`      |
|  B  |          | 6.3.18    | titlebar colors                 | `window.inactive.button.toggled.image.color`            |
|  B  |          | 6.4.2     | active window textures          | `window.active.label.bg`                                |
|  B  |          | 6.4.4     | active window textures          | `window.active.grip.bg`                                 |
|  B  |          | 6.5.2     | inactive window textures        | `window.inactive.label.bg`                              |
|  B  |          | 6.5.3     | inactive window textures        | `window.inactive.handle.bg`                             |
|  B  |          | 6.5.4     | inactive window textures        | `window.inactive.grip.bg`                               |
|  B  |          | 6.6.1     | active window button textures   | `window.active.button.unpressed.bg`                     |
|  B  |          | 6.6.2     | active window button textures   | `window.active.button.pressed.bg`                       |
|  B  |          | 6.6.3     | active window button textures   | `window.active.button.hover.bg`                         |
|  B  |          | 6.6.4     | active window button textures   | `window.active.button.disabled.bg`                      |
|  B  |          | 6.6.5     | active window button textures   | `window.active.button.toggled.unpressed.bg`             |
|  B  |          | 6.6.6     | active window button textures   | `window.active.button.toggled.pressed.bg`               |
|  B  |          | 6.6.7     | active window button textures   | `window.active.button.toggled.hover.bg`                 |
|  B  |          | 6.6.8     | active window button textures   | `window.active.button.toggled.bg`                       |
|  B  |          | 6.7.1     | inactive window button textures | `window.inactive.button.unpressed.bg`                   |
|  B  |          | 6.7.2     | inactive window button textures | `window.inactive.button.pressed.bg`                     |
|  B  |          | 6.7.3     | inactive window button textures | `window.inactive.button.hover.bg`                       |
|  B  |          | 6.7.4     | inactive window button textures | `window.inactive.button.disabled.bg`                    |
|  B  |          | 6.7.5     | inactive window button textures | `window.inactive.button.toggled.unpressed.bg`           |
|  B  |          | 6.7.6     | inactive window button textures | `window.inactive.button.toggled.pressed.bg`             |
|  B  |          | 6.7.7     | inactive window button textures | `window.inactive.button.toggled.hover.bg`               |
|  B  |          | 6.7.8     | inactive window button textures | `window.inactive.button.toggled.bg`                     |
|  B  |          | 6.8.1     | menu colors                     | `menu.title.text.color`                                 |
|  B  |          | 6.8.3     | menu colors                     | `menu.items.disabled.text.color`                        |
|  B  |          | 6.8.5     | menu colors                     | `menu.items.active.disabled.text.color`                 |
|  B  |          | 6.9.3     | menu textures                   | `menu.title.bg`                                         |
|  B  |          | 6.10.3    | osd textures                    | `osd.hilight.bg`                                        | for desktop osd only
|  B  |          | 6.10.4    | osd textures                    | `osd.unhilight.bg`                                      | for desktop osd only
|  B  |          | 6.11.2    | osd colors                      | `osd.hilight.bg.color`                                  | for desktop osd only
|  B  |          | 6.11.3    | osd colors                      | `osd.unhilight.bg.color`                                | for desktop osd only
|  B  |          | 6.12.2    | text justification              | `menu.title.text.justify`                               |
|  B  |          | 7.1.2     | menu                            | `label`                                                 |
|  B  |          | 7.1.4     | menu                            | `execute`                                               |
|  B  |          | 7.3.2     | menu separator                  | `<separator label="" />`                                | For separator with text
|  B  |          | 8.1.2     | extra                           | Support png buttons                                     |