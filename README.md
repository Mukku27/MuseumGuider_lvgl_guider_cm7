# Museum Guider Bot

Welcome to the Museum Guider Bot project! This README will guide you through the project, explaining its purpose, functionality, and technical details. Whether you're a developer, contributor, or curious visitor, you'll find all the information you need here.

---

## Table of Contents

- [Introduction](#introduction)
- [Project Objective](#project-objective)
- [Abstract](#abstract)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Concepts and Design](#concepts-and-design)
- [Usage](#usage)
- [Future Scope](#future-scope)
- [Videos](#videos)

---

## Introduction

The **Museum Guider Bot** is a smart assistant designed to enhance visitors' experiences in museums. By leveraging cutting-edge technologies, this bot provides interactive, inclusive, and informative guidance about exhibits, their history, and significance.

---

## Project Objective

To design and develop an innovative museum guide robot that enhances visitor experience by utilizing RFID technology for artifact detection, sign language recognition for inclusivity, and voice recognition for interactive communication.

---

## Abstract

The Museum Guider Bot aims to revolutionize how museums engage with their visitors by combining advanced technologies for an interactive, inclusive, and informative experience. The robot identifies artifacts using RFID tags, providing real-time audio descriptions to visitors. To ensure accessibility, the robot incorporates sign language detection through a camera module, allowing it to communicate effectively with hearing-impaired individuals. Voice recognition and touch functionality offer seamless interaction for all visitors, while external sensors and motors enable smooth navigation. By integrating these technologies into a compact and efficient design, this project addresses the need for accessible and intelligent museum guides, making cultural exploration more engaging and inclusive for diverse audiences.

---

## Features

### Core Functionalities

1. **Interactive Guidance**
   - Provides step-by-step navigation through museum galleries.

2. **RFID-Based Artifact Detection**
   - Utilizes RFID readers and tags for precise artifact identification and corresponding audio descriptions.

3. **Sign Language Detection**
   - A camera module detects and interprets predefined sign language gestures for hearing-impaired visitors.

4. **Voice and Text Input Support**
   - Accepts voice or text queries for ease of use, powered by NXP Edge Ready’s advanced AI processing.

5. **Touch Functionality**
   - A MIPI display enables touch-based interaction, offering details about artifacts and museum navigation.

6. **Smooth Navigation**
   - Motor-controlled navigation with obstacle avoidance using sensors.

---

## Technologies Used

This project integrates various modern technologies, leveraging the expertise gained in previous experiences like the **VLSID Design Conference 2025** and the **IIIT Hackathon**.

### Core Technologies

- **RFID Technology**: For artifact detection.
- **Camera Module**: For sign language detection.
- **Robot Operating System (ROS)**: Framework for robotic systems.
- **Python**: Backend programming language.
- **NLP Libraries**: For voice recognition.
- **NXP i.MX RT117H Microcontroller**: For processing and hardware integration.
- **MCUXpresso IDE**: For firmware development.
- **GUI Guider**: For designing an interactive interface.

---

## Concepts and Design

### Engineering Principles

- **RFID Technology**: RFID readers and tags are utilized for artifact detection. Each artifact is equipped with an RFID tag containing its unique identification. The robot's RFID reader scans these tags, triggering corresponding audio descriptions.

- **Voice Recognition**: Voice commands allow users to interact with the robot, asking questions about artifacts or requesting specific tasks. NXP Edge Ready’s advanced AI processing capabilities ensure fast and accurate voice recognition.

- **Sign Language Detection**: Using a camera module, the robot detects and interprets predefined sign language gestures to cater to hearing-impaired visitors. This is achieved by implementing machine learning models trained on hand gestures.

- **Touch Functionality**: A MIPI display enables touch-based interaction, allowing users to navigate through artifact details, ask questions, or interact with museum maps.

- **Motor Control and Navigation**: Motors controlled via microcontroller drivers ensure smooth navigation throughout the museum, while sensors help avoid obstacles.

### Design Methodology

- **Hardware Components**: NXP i.MX RT117H Microcontroller for processing, RFID reader, camera, speakers, motors, and sensors for navigation and interaction.

- **Software**: GUI Guider to design an interactive interface, MCUXpresso IDE for firmware development and hardware integration.

- **System Integration**: The hardware and software modules are integrated to create a cohesive system. The microcontroller manages inputs from RFID, camera, and touch interface, while coordinating outputs to speakers, display, and motors.

---

## Usage

1. **Starting the Bot**:
   - Power on the hardware components.
   - Run the main script as detailed above.

2. **Navigating the Museum**:
   - Interact with the bot using voice, text, or touch inputs.

3. **Getting Exhibit Details**:
   - Ask questions or scan RFID tags near exhibits for information.

---

## Future Scope

- **AR/VR Integration**:
  - Enhance the experience with augmented and virtual reality.

- **Advanced Analytics**:
  - Track user preferences and recommend tailored museum experiences.

- **Mobile Application**:
  - Extend functionalities to a mobile app for off-site usage.

- **IoT Integration**:
  - Connect with smart museum systems for temperature control and lighting adjustments.

---

## videos
![Museum Guider Bot Demo](https://youtu.be/dNoNeGquE5Q)
![Museum Guider Bot Prototype](https://youtu.be/xJNlu5OCHJI)


---

Enjoy exploring the Museum Guider Bot! If you have any questions or feedback, feel free to contribute or reach out.
