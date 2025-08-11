# MM_2024 – MicroMouse Project

This repository contains the hardware schematics and embedded control software for the **MicroMouse 2024** project.  
The aim is to design, build, and program an autonomous maze-solving robot capable of navigating from a start point to the goal in the shortest possible time.

---

## 📂 Repository Structure
1. MicroMouse Schematics/              # Hardware diagrams and PCB schematics
2. MicromouseCoding/                   # All firmware and simulation models
- MicroMouseProgramming/               # Project source code (MATLAB/Simulink)
- MicroMouseTemplate_ert_rtw/          # Auto-generated C code from Simulink
- slprj/                               # Simulink build artifacts
- *.slx                                # Simulink models for subsystems
- *.m                                  # MATLAB functions/scripts
- *.elf / *.bin / *.hex                # Compiled firmware for flashing
- *.mlx                                # MATLAB Live Scripts
- debug.log                            # Debug output
3. FlashThisInProgrammer.elf           # Starting program to run at startup


## 🛠️ Hardware

- **Processor:** Custom PCB with dedicated microcontroller  
- **Mainboard:** Supports sensors, motors, and control electronics  
- Schematics provided as **PDF** and **PNG** for quick reference

---

## 💻 Software Overview

The software is developed primarily in **MATLAB/Simulink** with auto-generated embedded C code.  
Subsystems include:

- **ADC_Block.slx** – Analog-to-digital conversion for sensors  
- **Motors.slx** – Motor driver and speed control logic  
- **IR_LEDs.slx / IR_LED_Pattern.slx** – Infrared sensor control patterns  
- **IMU.slx** – Inertial Measurement Unit interface  
- **LEDs.slx** – Status indicators  
- **SWs.slx** – Switch input handling  
- **MicroMouseDebug.slx** – Debugging environment  
- **MicroMouseTemplate.slx** – Main control architecture template  

---

## 🚀 Getting Started

### Prerequisites
- MATLAB R2023a or newer (Simulink required)  
- Embedded Coder toolbox (for code generation)  
- Programmer tool compatible with the target microcontroller

### Setup
1. Clone this repository:
   ```bash
   git clone https://github.com/Emanuele-Vichi/MM_2024.git
2. Open MATLAB and set the repository folder as your working directory.
3. Run the setup script:
   ```bash
   runMeFirst

4. Building Firmware
- Open the main Simulink model: MicromouseCoding/MicroMouseTemplate.slx
- Generate code and compile using Embedded Coder.
- Flash the FlashThisInProgrammer.elf (or generated .hex) to the robot using your programmer.

📜 Documentation
MicroMouse Schematics – PCB and wiring diagrams for the robot

Each Simulink file corresponds to a specific hardware subsystem

Auto-generated code is stored in MicroMouseTemplate_ert_rtw
