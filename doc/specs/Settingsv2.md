# PowerToys Settings v2

<img align="right" width="200" src="../images/Logo.jpg" />

- **What is it:** Improving the end user experience for setting inside PowerToys.
- **Authors:** Clint Rutkas
- **Spec Status:** Draft

# TODO's

# 1. Overview

## 1.1. Elevator Pitch / Narrative

Settings screen is a place where a user should quickly get access to tweak and adjust their applications. If something isn't clear, we've failed as a group. The Github issue which encompasses many of the asks, [#889](https://github.com/microsoft/PowerToys/issues/889) to update to a more updated look/feel but also [#891](https://github.com/microsoft/PowerToys/issues/891) which has a larger list of items that need to be corrected for settings.

[#243](https://github.com/microsoft/PowerToys/issues/243) is an example of one of the primary pain points where the settings screen cannot be viewed due to the webview control.  This is also part of the v1.0 strategy under "Raise product quality".

## 1.2. Customers

PowerToys exist for two reasons. Users want to squeeze more efficiency out of the Windows 10 shell and customize it to their individual workflows. We can be more targeted for scenarios to help do rapid iterations. Think about the countless small utilities that Microsoft engineers have written to make themselves more productive.

## 1.3. Problem Statement and Supporting Customer Insights

See issue [#889](https://github.com/microsoft/PowerToys/issues/889) and [#243](https://github.com/microsoft/PowerToys/issues/243) to grok some of the issues.

## 1.4. Existing Solutions or Expectations

See Section 2.

Also our community has created fantastic UX mocks, both in functional XAML and image form.  [@zeealeid](https://github.com/zeealeid) created this [mock for FancyZones](https://github.com/microsoft/PowerToys/issues/891#issuecomment-562882994) but it also has Settings.  It clearly shows some really great fundamentals to help onboarding.

[@niels9001](https://github.com/niels9001) has also created a [wonderful functional XAML application with WinUI3](https://github.com/niels9001/PowerToysUXWinUI3Alpha)

![alt text][fzMockSettings]

![alt text][niels9001MockSetting]

## 1.5. Goals/Non-Goals

### Goals

- Allow us to create reusable componets
- Solve Issue [#243](https://github.com/microsoft/PowerToys/issues/243)
- Accessibility
- Support theming (system default, High contrast, light, dark)
- Localized ready UX

### Non-goals

- Improve OOBE for first-time user (will be addressed in [#1285](https://github.com/microsoft/PowerToys/issues/1285))
  - This doesn't mean the experience won't be more straight forward
- Add in search like Windows Setting Search experience for this iteration.

We will discuss what currently is there for a knowledge base.

# 2. Existing Experience

## 2.1. Main screen

![alt text][generalv1]
![alt text][fzv1]

## 2.2. Other screens

We need to port ImageResizer and others.  Here is the ImageResizer existing screens that are currently blocked.

![alt text][ir1]
![alt text][ir2]
![alt text][ir3]

# 3. Definition of Success

## 3.1. Expected Impact: Business, Customer, and Technology Outcomes, Experiments + Measures

| No. | Outcome | Measure | Priority |
|-----|---------|---------|----------|
| 1 | TBD | TBD | 0 |

# 4. Requirements

TODO: CLINT ADD STATEMENT
TODO: CLINT ADD IN MOCKS

## 4.1. Functional Requirements

For terminology, lets get some lock for v2

- **General screen:** these are global settings

### 4.1.1. General screen

| No. | Requirement | Priority |
| --- | ----------- | -------- |
| 1 | Top will be a header labeled "General Settings" | 0 |
| 2 | Theme settings (System Default, Light, Dark) | 0 |
| 3 | Attribution at the bottom will be provided [#862](https://github.com/microsoft/PowerToys/issues/862) (see 4.1.x for more) | 0 |
| 4 | "About section" - See 4.1.3 for bottom of this | 0 |
| 5 | Disable telemetry [#964](https://github.com/microsoft/PowerToys/issues/964)- Toggle Switch<br/>This will be wired up but disabled with a note of "PowerToys currently respects the Windows data & feedback setting"<br/>This will be enabled when v1.0 is fully released. | 0 |
| 6 | Run at startup - Toggle switch | 0 |
| 7 | Default Terminal / Shell settings for PowerToys - see [launcher spec](https://github.com/microsoft/PowerToys/wiki/Launcher) | 0 |

### 4.1.2. Individual PowerToys line item setting

| No. | Requirement | Priority |
| --- | ----------- | -------- |
| 1 | Top will be a header for the PowerToy| 0 |
| 2 | Below header will be a **short** blurb of what the utility is | 0 |
| 3 | Link to documentation for deep dives into features | 0 |
| 4 | First option will be to Enable the PowerToy - ToggleSwitch | 0 |
| 5 | Attribution at the bottom will be provided [#862](https://github.com/microsoft/PowerToys/issues/862) (see 4.1.x for more) | 0 |
| 6 | Settings will be logically grouped together | 0 |
| x | x | 0 |
| x | x | 0 |

### 4.1.3. About section

| No. | Requirement | Priority |
| --- | ----------- | -------- |
| 1 | Version Number pulled from application | 0 |
| 2 | Report bug link | 0 |
| 3 | Request feature link | 0 |
| 4 | Privacy Statement link | 0 |
| 5 | OSS Notice link - link to future NOTICE.MD file | 0 |

### 4.1.4. Documentation / OOBE help

| No. | Requirement | Priority |
| --- | ----------- | -------- |
| 1 | Each PowerToy will have a readme that quickly outlines each feature | 0 |
| 2 | Each feature will have a short animated gif outlining functionality without speaking | 0 |
| 3 | Below each gif, a text blob describing how to use it. | 0 |

### 4.1.5. Settings control / layout

| No. | Requirement | Priority |
| --- | ----------- | -------- |
| 1 | Actual control will be powered by a NavView control | 0 |
| 2 | Each logical feature will its own area | 0 |
| 3 | File Explorer group technically is multiple PowerToys but be grouped as one item for end user ease of discoverability | 0 |
| 4 | From [@zeealeid](https://github.com/zeealeid)'s mock, on the left side, we'll have the PT icon - PowerToys<br/>![alt text][fzMockSettings] | 2 |

### 4.1.x. Attribution for the community

Based on the roots of the original PowerToys, we are a suite of applications. Some utilities were not developed in house, others forks of the community's great work and we should acknowledge their authors.  From [#862](https://github.com/microsoft/PowerToys/issues/862), 4.1.1.2 and 4.1.2.2 requirement, we want provide attribution for their work.

This is primarily to highlight community contributions, not the PowerToy core team.

This will be a hybrid of the following

- An item inside the Setting screen at the bottom for each section.
  - This will be for the primary author(s) and drivers.
  - It will consist of:
    - Author(s) names
    - Link to where we forked the code base
    - Statement of why you should try out their variant
- Documentation from inside the PowerToy repository
  - This will be a deeper dive in others that have helped out each utility
  - PowerToy dev team will be acknowledged for their work here.

## 4.2. Measure Requirements

| No. | Outcome | Measure | Priority |
|-----|---------|---------|----------|
| 1 | TBD | TBD | TBD |

# 5. Mocks

# 6. Roadmap to the end state

To start work ASAP, we'll do the following

## Now

1. Add a toggle on the React Setting app that shows up if end user is on 19H1 or higher
1. Use a XAML Island WinUI 2.2 for new setting area
1. Start entire UI be transitioned over

## Soon

1. Transition to WinUI 3 XAML Island when first available
1. All new Settings UI goes in the WinUI version (Launcher, ImageResizer, Keyboard remapper, ...)

## Future

1. Transition to WinUI 3 Desktop application when first available
1. Remove ReactJS WebView settings

[fzv1]: images/specs/settingsv2/fancyZones.png "x"
[generalv1]: images/specs/settingsv2/generalv1.png "x"
[ir1]: images/specs/settingsv2/imageResizer1.png "Image Resizer 1"
[ir2]: images/specs/settingsv2/imageResizer2.png "Image Resizer 2"
[ir3]: images/specs/settingsv2/imageResizer3.png "Image Resizer 3"
[fzMockSettings]: https://user-images.githubusercontent.com/54409865/70380170-dd5e9080-1958-11ea-840d-9d87b8056e9c.jpeg "zeealeid's possible setting screen"
[niels9001MockSetting]: images/specs/settingsv2/niels9001settingScreen.gif "Niels9001 possible setting screens"

<!-- [x]: images/specs/settingsv2/x.png "x" -->
