# UE5 Front-End Architecture Framework

<p align="center">
  <img src="./images/options1.png" width="900">
</p>

<p align="center">
  <img src="./images/options2.png" width="900">
</p>

---

## Overview

A modular, C++-driven front-end UI architecture built for **Unreal Engine 5**.

This project demonstrates a structured and scalable approach to building maintainable game front-end systems using:

- UMG
- Subsystems
- Gameplay Tags
- Data-driven configuration patterns

The focus is architectural design and separation of concerns — not asset delivery.

---

## Design Philosophy

Modern game UI should be:

- Modular
- Reusable
- Data-driven
- Decoupled from gameplay systems
- Scalable across multiple projects

This framework was designed to support those principles.

---

## Architectural Layers

### 1. Subsystem Layer

**FrontEndUISubsystem**

- Centralized UI state coordination
- Screen lifecycle management
- Persistent front-end control layer
- Decouples UI orchestration from gameplay logic

---

### 2. Controller Layer

**FrontEndPlayerController**

- Input routing
- Screen transitions
- User interaction flow control
- Communication bridge between systems and widgets

---

### 3. Widget Abstraction Layer

Core layout and activatable widgets:

- `Widget_PrimaryLayout`
- `Widget_ConfirmScreen`
- `Widget_ActivatableBase`
- Component-based common widgets

These serve as structured UI building blocks rather than one-off Blueprints.

---

### 4. Data-Driven Options System

A scalable configuration architecture built around:

- `ListDataObject_*` abstractions
- Registry-based option handling
- Entry widget mapping
- Structured type definitions

This allows UI configuration to scale without hardcoding behavior into widgets.

---

### 5. Common UI Components

Reusable UI components including:

- `FrontEndCommonButtonBase`
- `FrontEndCommonListView`
- `FrontEndCommonRotator`
- Tab and list widget bases

These provide consistent interaction patterns across screens.

---

## Architectural Principles

- Separation of concerns between logic and presentation
- Composition over inheritance where appropriate
- Strong typing via structured data types
- Explicit ownership via subsystems
- Minimal coupling between UI and game systems
- Reusability across multiple projects

---

## Repository Structure
