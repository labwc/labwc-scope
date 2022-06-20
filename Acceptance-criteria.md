# Scope

## Introduction

Acceptance criteria for each requirement is in accordance with openbox
specification unless other wise stated.

## Categories

Acceptance criteria items are categorised as follows:

- `A`: in-scope - mandatory for core product
- `B`: discretionary
- `C`: out-of-scope - not intended to be implemented

## Sections

- Acceptance criteria are organised into the sections listed below.
- The first digit in the reference number refers to the section.
- Sections 2-7 refer to the the openbox 3.4 specification. For further details
  of what each of these items refers to, read the respective openbox wiki page.

1. General and Protocols
2. Configuration [http://openbox.org/wiki/Help:Configuration](http://openbox.org/wiki/Help:Configuration)
3. Bindings [http://openbox.org/wiki/Help:Bindings](http://openbox.org/wiki/Help:Bindings)
4. Global Actions [http://openbox.org/wiki/Help:Actions](http://openbox.org/wiki/Help:Actions)
5. Window Actions [http://openbox.org/wiki/Help:Actions](http://openbox.org/wiki/Help:Actions)
6. Theme [http://openbox.org/wiki/Help:Themes](http://openbox.org/wiki/Help:Themes)
7. Menus [http://openbox.org/wiki/Help:Menus](http://openbox.org/wiki/Help:Menus)
8. Extra

## Requirements

### 1.1 General

| Cat | Status   | Reference | Category                        | Description                                             | Comment
| --- | -------- | --------- | ------------------------------- | ------------------------------------------------------- | -------
|  A  | complete | 1.1.1     | general                         | Optionally support Xwayland                             |
|  A  | complete | 1.1.2     | general                         | Parse `<config-dir>/rc.xml`                             |
|  A  | complete | 1.1.3     | general                         | Parse `<config-dir>/environment`                        |
|  A  | complete | 1.1.4     | general                         | Parse `<config-dir>/autostart`                          |
|  A  | complete | 1.1.5     | general                         | Parse `<config-dir>/menu.xml`                           |
|  A  | complete | 1.1.6     | general                         | Parse openbox themes files and associated xbm icons     |
|  A  | complete | 1.1.7     | general                         | Catch SIGHUP to re-load config file and theme           |
|  A  | complete | 1.1.8     | general                         | Support both CSD and SSD                                |
|  A  | complete | 1.1.9     | general                         | Support maximize, iconify, close buttons                |
|  A  | complete | 1.1.10    | general                         | Support damage tracking to reduce CPU usage             |
|  A  | complete | 1.1.11    | general                         | Support HiDPI                                           |
|  A  | complete | 1.1.12    | general                         | Support on-screen display (osd)                         |
|  A  | complete | 1.1.13    | general                         | Support libinput configuration                          |
|  A  | complete | 1.1.14    | general                         | Support drag-n-drop                                     |

### 1.2 Wayland Protocols

|  B  | complete | 1.2.1     | wayland-protocol                | [presentation-time]                                     |
|  B  | complete | 1.2.2     | wayland-protocol                | [viewporter]                                            |
|  A  | complete | 1.2.3     | wayland-protocol                | [xdg-shell]                                             |
|  B  | complete | 1.2.4     | wayland-protocol                | fullscreen-shell-unstable-v1                            |
|  B  | complete | 1.2.5     | wayland-protocol                | idle-inhibit-unstable-v1                                |
|  B  |          | 1.2.6     | wayland-protocol                | input-method-unstable-v1                                |
|  B  |          | 1.2.7     | wayland-protocol                | input-timestamps-unstable-v1                            |
|  B  |          | 1.2.8     | wayland-protocol                | keyboard-shortcuts-inhibit-unstable-v1                  |
|  B  |          | 1.2.9     | wayland-protocol                | linux-dmabuf-unstable-v1                                |
|  B  |          | 1.2.10    | wayland-protocol                | linux-explicit-synchronization-unstable-v1              |
|  B  | complete | 1.2.11    | wayland-protocol                | pointer-constraints-unstable-v1                         |
|  B  |          | 1.2.12    | wayland-protocol                | pointer-gestures-unstable-v1                            |
|  B  | complete | 1.2.13    | wayland-protocol                | primary-selection-unstable-v1                           |
|  B  | complete | 1.2.14    | wayland-protocol                | relative-pointer-unstable-v1                            |
|  B  |          | 1.2.15    | wayland-protocol                | tablet-unstable-v2                                      |
|  B  |          | 1.2.16    | wayland-protocol                | text-input-unstable-v3                                  |
|  B  | complete | 1.2.17    | wayland-protocol                | xdg-decoration-unstable-v1                              |
|  B  |          | 1.2.18    | wayland-protocol                | xdg-foreign-unstable-v2                                 |
|  B  | complete | 1.2.19    | wayland-protocol                | xdg-output-unstable-v1                                  |
|  B  |          | 1.2.20    | wayland-protocol                | xwayland-keyboard-grab-unstable-v1                      |
|  B  |          | 1.2.21    | wayland-protocol                | drm-lease-v1                                            |
|  B  |          | 1.2.22    | wayland-protocol                | ext-session-lock-v1                                     | Supported by swaylock
|  B  |          | 1.2.23    | wayland-protocol                | xdg-activation-v1                                       |

### 1.3 wlroots protocols

|  B  | complete | 1.3.1     | wlr-protocol                    | wlr-data-control-unstable-v1                            |
|  B  | complete | 1.3.2     | wlr-protocol                    | wlr-export-dmabuf-unstable-v1                           |
|  A  | complete | 1.3.3     | wlr-protocol                    | wlr-foreign-toplevel-management-unstable-v1             |
|  B  | complete | 1.3.4     | wlr-protocol                    | wlr-gamma-control-unstable-v1                           |
|  B  | complete | 1.3.5     | wlr-protocol                    | wlr-input-inhibitor-unstable-v1                         |
|  A  | complete | 1.3.6     | wlr-protocol                    | wlr-layer-shell-unstable-v1                             |
|  A  | complete | 1.3.7     | wlr-protocol                    | wlr-output-management-unstable-v1                       |
|  B  | complete | 1.3.8     | wlr-protocol                    | wlr-output-power-management-unstable-v1                 |
|  B  | complete | 1.3.9     | wlr-protocol                    | wlr-screencopy-unstable-v1                              |
|  B  |          | 1.3.10    | wlr-protocol                    | wlr-virtual-pointer-unstable-v1                         |

### 2.1 Configuration - Resistance

|  B  |          | 2.1.1     | resistance                      | `strength`                                              | If we implement, consider a better name
|  A  | complete | 2.1.2     | resistance                      | `screen_edge_strength`                                  |

### 2.2 Configuration - Focus

|  C  |          | 2.2.1     | focus                           | `focusNew`                                              |
|  C  |          | 2.2.2     | focus                           | `focusLast`                                             |
|  B  | complete | 2.2.3     | focus                           | `followMouse`                                           |
|  C  |          | 2.2.4     | focus                           | `focusDelay`                                            |
|  C  |          | 2.2.5     | focus                           | `underMouse`                                            |
|  B  | complete | 2.2.6     | focus                           | `raiseOnFocus`                                          |

### 2.3 Configuration - Placement

|  C  |          | 2.3.1     | placement                       | `policy`                                                |
|  A  | complete | 2.3.2     | placement                       | `center`                                                | No config - just do it

### 2.4 Configuration - Theme

|  A  | complete | 2.4.1     | theme                           | `name`                                                  |
|  B+ |          | 2.4.2     | theme                           | `titleLayout`                                           |
|  B  |          | 2.4.4     | theme                           | `keepBorder`                                            |
|  C  |          | 2.4.5     | theme                           | `animateIconify`                                        |
|  A  | complete | 2.4.6     | theme                           | `<font place="ActiveWindow">`                           |
|  B  |          | 2.4.7     | theme                           | `<font place="InactiveWindow">`                         |
|  B  |          | 2.4.8     | theme                           | `<font place="MenuHeader">`                             |
|  B  | complete | 2.4.9     | theme                           | `<font place="MenuItem">`                               |
|  B  |          | 2.4.10    | theme                           | `<font place="OnScreenDisplay">`                        |

### 2.5 Configuration - Desktop

|  C  |          | 2.5.1     | desktop                         | `number`                                                |
|  C  |          | 2.5.2     | desktop                         | `firstDesk`                                             |
|  B  | complete | 2.5.3     | desktop                         | `popupTime`                                             |
|  B  | complete | 2.5.4     | desktop                         | `names`                                                 |

### 2.6 Configuration - Desktop

|  C  |          | 2.6.1     | resize                          |                                                         |

### 2.7 Configuration - Applications

|  B  |          | 2.7.1     | applications                    | `decor`                                                 |
|  C  |          | 2.7.2     | applications                    | `shade`                                                 |
|  B  |          | 2.7.3     | applications                    | `position`                                              |
|  B  |          | 2.7.4     | applications                    | `size`                                                  |
|  C  |          | 2.7.5     | applications                    | `focus`                                                 |
|  C  |          | 2.7.6     | applications                    | `desktop`                                               |
|  C  |          | 2.7.7     | applications                    | `layer`                                                 |
|  C  |          | 2.7.8     | applications                    | `iconic`                                                |
|  C  |          | 2.7.9     | applications                    | `skip_pager`                                            |
|  C  |          | 2.7.10    | applications                    | `skip_taskbar`                                          |
|  C  |          | 2.7.11    | applications                    | `fullscreen`                                            |
|  C  |          | 2.7.12    | applications                    | `maximized`                                             |

### 2.8 Configuration - Keyboard

|  C  |          | 2.8.1     | keyboard                        | `rebindOnMappingNotify`                                 |
|  C  |          | 2.8.2     | keyboard                        | `chainQuitKey`                                          |
|  A  | complete | 2.8.3     | keyboard                        | `keybind`                                               |

### 2.8 Configuration - Mouse

|  C  |          | 2.9.1     | mouse                           | `dragThreshold`                                         |
|  A  | complete | 2.9.2     | mouse                           | `doubleClickTime`                                       |
|  C  |          | 2.9.3     | mouse                           | `screenEdgeWarpTime`                                    |
|  A  | complete | 2.9.3     | mouse                           | `context`                                               |

### 2.10 Configuration - Margins

|  C  |          | 2.10.1    | margins                         |                                                         |

### 2.11 Configuration - Menu

|  B  |          | 2.11.1    | menu                            | `hideDelay`                                             |
|  C  |          | 2.11.2    | menu                            | `middle`                                                |
|  B  |          | 2.11.3    | menu                            | `submenuShowDelay`                                      |
|  C  |          | 2.11.4    | menu                            | `applicationIcons`                                      |
|  C  |          | 2.11.5    | menu                            | `manageDesktops`                                        |
|  B  |          | 2.11.6    | menu                            | `file`                                                  | TODO: is this supported already?

### 2.12 Configuration - Dock

|  C  |          | 2.12.1    | dock                            |                                                         |

### 3.1 Configuration - Keyboard Keybind

|  A  | complete | 3.1.1     | keyboard keybind                | `key`                                                   |
|  A  | complete | 3.1.2     | keyboard keybind                | `action.name`                                           |
|  A  | complete | 3.1.3     | keyboard keybind                | `action.menu`                                           |
|  A  | complete | 3.1.4     | keyboard keybind                | Support modifier keys                                   |
|  C  |          | 3.1.5     | keyboard keybind                | Support key chains                                      |

### 3.2 Configuration - Mouse Binding

|  A  | complete | 3.2.1     | mouse binding                   | `context.name`                                          |
|  A  | complete | 3.2.2     | mouse binding                   | `mousebind.button`                                      |
|  A  | complete | 3.2.3     | mouse binding                   | `mousebind.action`                                      |

### 3.3 Configuration - Mouse Context

|  B  | complete | 3.3.1     | mouse context                   | `Frame`                                                 |
|  B  | complete | 3.3.2     | mouse context                   | `Client`                                                |
|  B  | complete | 3.3.3     | mouse context                   | `Desktop`                                               |
|  B  | complete | 3.3.4     | mouse context                   | `Root`                                                  |
|  A  | complete | 3.3.5     | mouse context                   | `Titlebar`                                              |
|  B  | complete | 3.3.6     | mouse context                   | `Top`                                                   |
|  B  | complete | 3.3.7     | mouse context                   | `Bottom`                                                |
|  B  | complete | 3.3.8     | mouse context                   | `Left`                                                  |
|  B  | complete | 3.3.9     | mouse context                   | `Right`                                                 |
|  B  | complete | 3.3.10    | mouse context                   | `TLCorner`                                              |
|  B  | complete | 3.3.11    | mouse context                   | `TRCorner`                                              |
|  B  | compete  | 3.3.12    | mouse context                   | `BLCorner`                                              |
|  B  | complete | 3.3.13    | mouse context                   | `BRCorner`                                              |
|  B  |          | 3.3.14    | mouse context                   | `Icon`                                                  |
|  A  | complete | 3.3.15    | mouse context                   | `Iconfiy`                                               |
|  A  | complete | 3.3.16    | mouse context                   | `Maximize`                                              |
|  A  | complete | 3.3.17    | mouse context                   | `Close`                                                 |
|  C  |          | 3.3.18    | mouse context                   | `AllDesktops`                                           |
|  C  |          | 3.3.19    | mouse context                   | `Shade`                                                 |
|  C  |          | 3.3.20    | mouse context                   | `Moveresize`                                            |

### 3.4 Configuration - Mouse Context

|  A  | complete | 3.4.1     | mouse button                    | `Left`                                                  |
|  A  | complete | 3.4.1     | mouse button                    | `Right`                                                 |
|  B  |          | 3.4.1     | mouse button                    | `Middle`                                                |
|  B  |          | 3.4.1     | mouse button                    | `Up` (scroll)                                           |
|  B  |          | 3.4.1     | mouse button                    | `Down` (scroll)                                         |

### 3.5 Configuration - Mouse Event

|  A  | complete | 3.5.1     | mouse event                     | `Press`                                                 |
|  A  | complete | 3.5.2     | mouse event                     | `Click`                                                 |
|  A  | complete | 3.5.3     | mouse event                     | `DoubleClick`                                           |
|  A  |          | 3.5.4     | mouse event                     | `Release`                                               |
|  B  |          | 3.5.5     | mouse event                     | `Drag`                                                  | TODO: Do we not support this?

### 4 Actions - Global

|  A  | complete | 4.1       | global action                   | `Execute`                                               |
|  A  | complete | 4.2       | global action                   | `ShowMenu`                                              |
|  A  | complete | 4.3       | global action                   | `NextWindow`                                            |
|  C  |          | 4.4       | global action                   | `PreviousWindow`                                        |
|  B  |          | 4.5       | global action                   | `DirectionalCycleWindows`                               |
|  B  |          | 4.6       | global action                   | `DirectionalTargetWindows`                              |
|  B  | complete | 4.7       | global action                   | `GoToDesktop`                                           |
|  B  | complete | 4.7.1     | global action                   | `GoToDesktop.to`                                        |
|  B  | complete | 4.7.1.1   | global action                   | `GoToDesktop.to::last`                                  |
|  B  | complete | 4.7.1.2   | global action                   | `GoToDesktop.to::right`                                 |
|  B  | complete | 4.7.1.3   | global action                   | `GoToDesktop.to::left`                                  |
|  C  |          | 4.7.1.4   | global action                   | `GoToDesktop.to::current`                               |
|  C  |          | 4.7.1.5   | global action                   | `GoToDesktop.to::next`                                  |
|  C  |          | 4.7.1.6   | global action                   | `GoToDesktop.to::previous`                              |
|  C  |          | 4.7.1.7   | global action                   | `GoToDesktop.to::up`                                    |
|  C  |          | 4.7.1.8   | global action                   | `GoToDesktop.to::down`                                  |
|  C  |          | 4.7.1.9   | global action                   | `GoToDesktop.to::north`                                 |
|  C  |          | 4.7.1.10  | global action                   | `GoToDesktop.to::south`                                 |
|  C  |          | 4.7.1.11  | global action                   | `GoToDesktop.to::west`                                  |
|  C  |          | 4.7.1.12  | global action                   | `GoToDesktop.to::east`                                  |
|  C  |          | 4.7.2     | global action                   | `GoToDesktop.wrap`                                      |
|  B  |          | 4.8       | global action                   | `AddDesktop`                                            |
|  B  |          | 4.9       | global action                   | `RemoveDesktop`                                         |
|  B  |          | 4.10      | global action                   | `ToggleShowDesktop`                                     |
|  C  |          | 4.11      | global action                   | `ToggleDockAutohide`                                    |
|  A  | complete | 4.12      | global action                   | `Reconfigure`                                           |
|  B  |          | 4.13      | global action                   | `Restart`                                               |
|  A  | complete | 4.14      | global action                   | `Exit`                                                  |
|  B  |          | 4.15      | global action                   | `SessionLogout`                                         |
|  C  |          | 4.16      | global action                   | `Debug`                                                 |

### 5 Actions - Window

|  A  | complete | 5.1       | window action                   | `Focus`                                                 |
|  A  | complete | 5.2       | window action                   | `Raise`                                                 |
|  B  |          | 5.3       | window action                   | `Lower`                                                 |
|  B  |          | 5.4       | window action                   | `RaiseLower`                                            |
|  B  |          | 5.5       | window action                   | `UnFocus`                                               |
|  B  |          | 5.6       | window action                   | `FocusToBottom`                                         |
|  A  | complete | 5.7       | window action                   | `Iconify`                                               |
|  A  | complete | 5.8       | window action                   | `Close`                                                 |
|  B  |          | 5.9       | window action                   | `ToggleShade`                                           |
|  B  |          | 5.10      | window action                   | `Shade`                                                 |
|  B  |          | 5.11      | window action                   | `Unshade`                                               |
|  C  |          | 5.12      | window action                   | `ToggleOmnipresent`                                     |
|  A  | complete | 5.13      | window action                   | `ToggleMaximize`                                        |
|  B  |          | 5.14      | window action                   | `Maximize`                                              |
|  B  |          | 5.15      | window action                   | `Unmaximize`                                            |
|  B  | complete | 5.16      | window action                   | `ToggleFullscreen`                                      |
|  B  | complete | 5.17      | window action                   | `Decorate`                                              |
|  B  | complete | 5.18      | window action                   | `Undecorate`                                            |
|  B  |          | 5.19      | window action                   | `SendToDesktop`                                         |
|  A  | complete | 5.20      | window action                   | `Move`                                                  |
|  A  | complete | 5.21      | window action                   | `Resize`                                                |
|  B  |          | 5.22      | window action                   | `MoveResizeTo`                                          |
|  B  |          | 5.23      | window action                   | `MoveRelative`                                          |
|  B  |          | 5.24      | window action                   | `ResizeRelative`                                        |
|  B  | complete | 5.25      | window action                   | `MoveToEdge`                                            |
|  B  |          | 5.26      | window action                   | `GrowToEdge`                                            |
|  B  |          | 5.27      | window action                   | `GrowToFill`                                            |
|  B  |          | 5.28      | window action                   | `ShrinkToEdge`                                          |
|  C  |          | 5.29      | window action                   | `If`                                                    |
|  C  |          | 5.30      | window action                   | `ForEach`                                               |
|  C  |          | 5.31      | window action                   | `Stop`                                                  |
|  C  |          | 5.32      | window action                   | `ToggleAlwaysOnTop`                                     |
|  C  |          | 5.33      | window action                   | `ToggleAlwaysOnBottom`                                  |
|  C  |          | 5.34      | window action                   | `SendToLayer`                                           |

# 6.1 Theme - Geometry

|  A  | complete | 6.1.1     | geometry                        | `border.width`                                          |
|  A  |          | 6.1.2     | geometry                        | `menu.border.width`                                     |
|  A  |          | 6.1.3     | geometry                        | `menu.separator.width`                                  |
|  B  |          | 6.1.4     | geometry                        | `menu.separator.padding.width`                          |
|  B  |          | 6.1.5     | geometry                        | `menu.separator.padding.height`                         |
|  A  |          | 6.1.6     | geometry                        | `osd.border.width`                                      |
|  C  |          | 6.1.7     | geometry                        | `window.client.padding.width`                           | No need to pad between client surface and title/handle/border
|  C  |          | 6.1.8     | geometry                        | `window.client.padding.height`                          | Ditto
|  A  |          | 6.1.9     | geometry                        | `window.handle.width`                                   |
|  B  |          | 6.1.10    | geometry                        | `padding.width`                                         |
|  B  |          | 6.1.11    | geometry                        | `padding.height`                                        |
|  B  | complete | 6.1.12    | geometry                        | `menu.overlap.x`                                        |
|  B  | complete | 6.1.13    | geometry                        | `menu.overlap.y`                                        |
|  B  |          | 6.1.14    | geometry                        | `menu.overlap`                                          |

### 6.2 Theme - Border Colors

|  A  | complete | 6.2.1     | border colors                   | `window.active.border.color`                            |
|  B  |          | 6.2.2     | border colors                   | `window.active.title.separator.color`                   |
|  A  | complete | 6.2.3     | border colors                   | `window.inactive.border.color`                          |
|  B  |          | 6.2.4     | border colors                   | `window.inactive.title.separator.color`                 |
|  A  | complete | 6.2.5     | border colors                   | `border.color`                                          |
|  B  |          | 6.2.6     | border colors                   | `window.active.client.color`                            |
|  B  |          | 6.2.7     | border colors                   | `window.inactive.client.color`                          |
|  B  |          | 6.2.8     | border colors                   | `menu.border.color`                                     |
|  A  |          | 6.2.9     | border colors                   | `osd.border.color`                                      |

### 6.3 Theme - Titlebar Colors

|  A  | complete | 6.3.1     | titlebar colors                 | `window.active.label.text.color`                        |
|  A  | complete | 6.3.2     | titlebar colors                 | `window.inactive.label.text.color`                      |
|  A  | complete | 6.3.3     | titlebar colors                 | `window.active.button.unpressed.image.color`            |
|  A  |          | 6.3.4     | titlebar colors                 | `window.active.button.pressed.image.color`              |
|  B  |          | 6.3.5     | titlebar colors                 | `window.active.button.disabled.image.color`             |
|  A  |          | 6.3.6     | titlebar colors                 | `window.active.button.hover.image.color`                |
|  B  |          | 6.3.7     | titlebar colors                 | `window.active.button.toggled.unpressed.image.color`    |
|  B  |          | 6.3.8     | titlebar colors                 | `window.active.button.toggled.pressed.image.color`      |
|  B  |          | 6.3.9     | titlebar colors                 | `window.active.button.toggled.hover.image.color`        |
|  B  |          | 6.3.10    | titlebar colors                 | `window.active.button.toggled.image.color`              |
|  A  | complete | 6.3.11    | titlebar colors                 | `window.inactive.button.unpressed.image.color`          |
|  A  |          | 6.3.12    | titlebar colors                 | `window.inactive.button.pressed.image.color`            |
|  B  |          | 6.3.13    | titlebar colors                 | `window.inactive.button.disabled.image.color`           |
|  A  |          | 6.3.14    | titlebar colors                 | `window.inactive.button.hover.image.color`              |
|  B  |          | 6.3.15    | titlebar colors                 | `window.inactive.button.toggled.unpressed.image.color`  |
|  B  |          | 6.3.16    | titlebar colors                 | `window.inactive.button.toggled.pressed.image.color`    |
|  B  |          | 6.3.17    | titlebar colors                 | `window.inactive.button.toggled.hover.image.color`      |
|  B  |          | 6.3.18    | titlebar colors                 | `window.inactive.button.toggled.image.color`            |

### 6.4 Theme - Active Window Colors

|  A  | complete | 6.4.1     | active window textures          | `window.active.title.bg`                                |
|  B  |          | 6.4.2     | active window textures          | `window.active.label.bg`                                |
|  C  |          | 6.4.3     | active window textures          | `window.active.handle.bg`                               | We don't support handle.
|  B  |          | 6.4.4     | active window textures          | `window.active.grip.bg`                                 |

### 6.5 Theme - Inactive Window Colors

|  A  | complete | 6.5.1     | inactive window textures        | `window.inactive.title.bg`                              |
|  B  |          | 6.5.2     | inactive window textures        | `window.inactive.label.bg`                              |
|  A  |          | 6.5.3     | inactive window textures        | `window.inactive.handle.bg`                             |
|  B  |          | 6.5.4     | inactive window textures        | `window.inactive.grip.bg`                               |

### 6.6 Theme - Active Button Colors

|  B  |          | 6.6.1     | active window button textures   | `window.active.button.unpressed.bg`                     |
|  B  |          | 6.6.2     | active window button textures   | `window.active.button.pressed.bg`                       |
|  B  |          | 6.6.3     | active window button textures   | `window.active.button.hover.bg`                         |
|  B  |          | 6.6.4     | active window button textures   | `window.active.button.disabled.bg`                      |
|  B  |          | 6.6.5     | active window button textures   | `window.active.button.toggled.unpressed.bg`             |
|  B  |          | 6.6.6     | active window button textures   | `window.active.button.toggled.pressed.bg`               |
|  B  |          | 6.6.7     | active window button textures   | `window.active.button.toggled.hover.bg`                 |
|  B  |          | 6.6.8     | active window button textures   | `window.active.button.toggled.bg`                       |

### 6.7 Theme - Inactive Button Colors

|  B  |          | 6.7.1     | inactive window button textures | `window.inactive.button.unpressed.bg`                   |
|  B  |          | 6.7.2     | inactive window button textures | `window.inactive.button.pressed.bg`                     |
|  B  |          | 6.7.3     | inactive window button textures | `window.inactive.button.hover.bg`                       |
|  B  |          | 6.7.4     | inactive window button textures | `window.inactive.button.disabled.bg`                    |
|  B  |          | 6.7.5     | inactive window button textures | `window.inactive.button.toggled.unpressed.bg`           |
|  B  |          | 6.7.6     | inactive window button textures | `window.inactive.button.toggled.pressed.bg`             |
|  B  |          | 6.7.7     | inactive window button textures | `window.inactive.button.toggled.hover.bg`               |
|  B  |          | 6.7.8     | inactive window button textures | `window.inactive.button.toggled.bg`                     |

### 6.8 & 6.9 Theme - Menu Colors

|  A  |          | 6.8.1     | menu colors                     | `menu.title.text.color`                                 |
|  A  | complete | 6.8.2     | menu colors                     | `menu.items.text.color`                                 |
|  B  |          | 6.8.3     | menu colors                     | `menu.items.disabled.text.color`                        |
|  A  | complete | 6.8.4     | menu colors                     | `menu.items.active.text.color`                          |
|  B  |          | 6.8.5     | menu colors                     | `menu.items.active.disabled.text.color`                 |
|  A  |          | 6.8.6     | menu colors                     | `menu.separator.color`                                  |
|  A  | complete | 6.9.1     | menu textures                   | `menu.items.bg`                                         |
|  A  | complete | 6.9.2     | menu textures                   | `menu.items.active.bg`                                  |
|  B  |          | 6.9.3     | menu textures                   | `menu.title.bg`                                         |

### 6.10 & 6.11 Theme - OSD Colors

|  A  | complete | 6.10.1    | osd textures                    | `osd.bg`                                                | we only set the color
|  C  |          | 6.10.2    | osd textures                    | `osd.label.bg`                                          |
|  B  |          | 6.10.3    | osd textures                    | `osd.hilight.bg`                                        | for desktop osd only
|  B  |          | 6.10.4    | osd textures                    | `osd.unhilight.bg`                                      | for desktop osd only
|  A  | complete | 6.11.1    | osd colors                      | `osd.label.text.color`                                  |
|  B  |          | 6.11.2    | osd colors                      | `osd.hilight.bg.color`                                  | for desktop osd only
|  B  |          | 6.11.3    | osd colors                      | `osd.unhilight.bg.color`                                | for desktop osd only

### 6.12 Theme - Text Justification

|  B  | complete | 6.12.1    | text justification              | `window.label.text.justify`                             |
|  B  |          | 6.12.2    | text justification              | `menu.title.text.justify`                               |

### 6.13 Theme - Text Shadows

|  C  |          | 6.13.1    | text shadows                    | `window.active.label.text.font`                         |
|  C  |          | 6.13.2    | text shadows                    | `window.inactive.label.text.font`                       |
|  C  |          | 6.13.3    | text shadows                    | `menu.items.font`                                       |
|  C  |          | 6.13.4    | text shadows                    | `menu.title.text.font`                                  |
|  C  |          | 6.13.5    | text shadows                    | `osd.label.text.font`                                   |

### 7 Menu

|  A  | complete | 7.1.1     | menu                            | `id`                                                    |
|  B  |          | 7.1.2     | menu                            | `label`                                                 |
|  C  |          | 7.1.3     | menu                            | `icon`                                                  |
|  B  |          | 7.1.4     | menu                            | `execute`                                               |
|  C  |          | 7.1.5     | menu                            | Support menu shortcuts                                  |
|  A  | complete | 7.2.1     | menu item                       | `label`                                                 |
|  C  |          | 7.2.2     | menu item                       | `icon`                                                  |
|  A  | complete | 7.2.3     | menu item                       | `action`                                                |
|  A  |          | 7.3       | menu separator                  | `label`                                                 |

### 8 Extra

|  A  | complete | 8.1       | extra                           | Support rounded top window corners                      | rc.xml `<theme><cornerRadius>`
|  B  |          | 8.2       | extra                           | Support png buttons                                     |
|  B  | complete | 8.3       | extra                           | `SnapToEdge` action                                     | Similar to 5.12 `GrowToEdge`


[presentation-time]: https://gitlab.freedesktop.org/wayland/wayland-protocols/-/tree/main/stable/presentation-time
[viewporter]: https://gitlab.freedesktop.org/wayland/wayland-protocols/-/tree/main/stable/viewporter
[xdg-shell]: https://gitlab.freedesktop.org/wayland/wayland-protocols/-/tree/main/stable/xdg-shell


