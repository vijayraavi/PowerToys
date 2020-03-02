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

## 1.5. Goals/Non-Goals

### Goals

- Allow us to create reusable componets
- Solve Issue [#243](https://github.com/microsoft/PowerToys/issues/243)
- Accessibility
- Support theming
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

We need to port ImageResizer

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

- X: X

### 4.1.1. FZ Editor Dialog window

| No. | Requirement | Priority |
| --- | ----------- | -------- |
| x | x | 0 |


## 4.2. Measure Requirements

| No. | Outcome | Measure | Priority |
|-----|---------|---------|----------|
| 1 | TBD | TBD | TBD |

# 5. Mocks

# 6. Edge cases

# 7. Existing reference material

[fzv1]: images/specs/settingsv2/fancyZones.png "x"
[generalv1]: images/specs/settingsv2/generalv1.png "x"
[ir1]: images/specs/settingsv2/imageResizer1.png "Image Resizer 1"
[ir2]: images/specs/settingsv2/imageResizer2.png "Image Resizer 2"
[ir3]: images/specs/settingsv2/imageResizer3.png "Image Resizer 3"

<!-- [x]: images/specs/settingsv2/x.png "x" -->
