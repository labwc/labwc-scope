# Introduction

In order to reduce commit noise in the main `labwc` repo, priorities
and intentions are mangaged here.

A set of [Acceptance Criteria], AC, have been developed defining a minimum
set of requirements which must be met in order to declare the project
feature complete. For this type of project, the AC are mostly inteded
to help developers set expectations, design suitable solutions and structure
coding efforts. The also AC help users understand what the project is about
and if it's the sort of compositor they wish to use.

A [TODO list] exists as a live document to help define and sequence coding
efforts.

- [1. Priorities](#priorities)
- [2. Intentions](#intentions)
  - [IPC](#IPC)
  - [Configuration Syntax](#configuration-syntax)

# Priorities

1. Stabilize current scope and fix issues and bugs. This is quite important.
   We do not want to spend time on an expanding scope with new features until
   the project is reliable at its current scope.
2. Implement Acceptance Criteria (AC) `Cat A` items.
3. Review and re-evaulate the AC. At this point, the devs many choose to
   implement features such as:
   - workspaces

# Intentions

The AC make clear the intended scope to a point, but they are quite lengthy
to read and are not always that clear on context and details. The sections
below add some information in this regard.

## IPC

IPC stands for inter-process communication and is important in building a
complete desktop environment.

`labwc` only understands the Wayland protocol. It cannot be controlled with
dbus, sway/i3-ipc or other IPC technology.

The `labwc` devs do not intend to implement any custom IPC or Wayland
protocols, even if it's sometimes tempting to solve a short term problems.

So, IPC will only be through [wayland-protocols] and [wlr-protocols];
and SIGHUP if you want to count that.

The reason for this is that we believe that custom IPCs and Wayland
protocols create a fragmentation that hinders general Wayland adoption.

Where current protocols are not sufficient, we would rather work with
upstream and the wider eco-system to plug any gaps.

See issues #128, #190

## Configuration Syntax

Occasionally we receive requests to support other configuration languages
and syntaxes. This is out-of-scope.

If this is high priority for anyone, I suggest helping to achieve prioirty
one and two; then split `labwc` in a wlstem library and a compositor.
At this point new compositors with alternative config files should be easy
to implement.

[Acceptance Criteria]: Acceptance-criteria.md
[TODO list]: TODO.md
[wayland-protocols]: https://gitlab.freedesktop.org/wayland/wayland-protocols
[wlr-protocols]: https://gitlab.freedesktop.org/wlroots/wlr-protocols 

