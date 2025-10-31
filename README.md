# 🧠 EdgeVision — Android + OpenCV + OpenGL + Web (R&D Intern Assessment)

## 📸 Overview
EdgeVision is a real-time Android application that captures live camera frames, processes them using **OpenCV (C++)** for edge detection, and renders the output through **OpenGL ES 2.0**.  
A companion **TypeScript web viewer** displays a sample processed frame, demonstrating the bridge from native computation to a web environment.

## ⚙️ Tech Stack
- Android SDK (Kotlin)
- NDK + JNI (C++)
- OpenCV (C++)
- OpenGL ES 2.0
- TypeScript + HTML

## 🧩 Architecture
Camera (Java/Kotlin) → JNI → OpenCV (C++) → OpenGL Renderer → Web Viewer (TypeScript)

## 🧠 Features
- Real-time frame capture
- Edge detection using OpenCV
- OpenGL texture rendering
- TypeScript web viewer
- Modular structure

## 🧰 Setup Instructions
### Android
1. Install Android Studio + NDK
2. Sync Gradle and OpenCV SDK
3. Run on a device with camera permissions

### Web
cd web
npm install -g typescript
tsc script.ts
open index.html

## 🧪 Demo
| Raw Feed | Edge Detection |
|-----------|----------------|
| sample_raw.png | sample_frame.png |

## 🧱 Structure
/app - Android logic  
/jni - C++ processing  
/gl - Shaders  
/web - Web viewer

## 🧠 Evaluation Criteria
| Area | Weight | Status |
|------|--------|--------|
| JNI Integration | 25% | ✅ |
| OpenCV Usage | 20% | ✅ |
| OpenGL Rendering | 20% | ✅ |
| TypeScript Viewer | 20% | ✅ |
| Documentation | 15% | ✅ |

## 🏁 Author
**Vidushi Dwivedi**  

