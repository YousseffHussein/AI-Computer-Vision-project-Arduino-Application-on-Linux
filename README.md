# AI Computer Vision project Arduino Application on Linux



# 🍎🍌 Fruit Classification Using AI Models

## 📌 Project Description

This project focuses on the **classification of apples and bananas** using three machine learning approaches: **Artificial Neural Networks (ANN)**, **Convolutional Neural Networks (CNN)**, and **Transfer Learning**. It was developed as an individual project for the "AI in Mechatronics and Robotics" course.

The objective was to evaluate and compare the performance of these models in identifying fruits from images and real-time camera input.

## ⚙️ Methodology

- **Data Collection**: A custom dataset of apple and banana images was created from both online sources and real-life photos.
- **Preprocessing**: All images were resized and normalized to standardize input for the models.
- **Testing**: A real-time classification feature was added using OpenCV (`cv2`) to capture live images from a laptop camera and classify the fruit shown.

## 🧠 Models Used

### 1. Artificial Neural Network (ANN)
- Built from scratch with input, hidden, and output layers.
- Trained using backpropagation and gradient descent.
- **Result**: 11/20 correct predictions.

### 2. Convolutional Neural Network (CNN)
- Included convolutional, pooling, and fully connected layers.
- Trained with stochastic gradient descent.
- **Result**: High accuracy but encountered kernel crashes during training.

### 3. Transfer Learning
- Used a pre-trained model (e.g., VGG16 or ResNet).
- Fine-tuned on the custom fruit dataset.
- **Result**: 20/20 perfect classification accuracy.

## 🧪 Conclusion

- **Transfer Learning** provided the best results with minimal training data and time.
- **CNN** showed strong potential despite technical issues.
- **ANN** was less effective due to its limitations in spatial feature extraction.

---




The project Demo :

https://github.com/user-attachments/assets/5d390bf5-37ef-490f-ae25-cf8d6a21073e





