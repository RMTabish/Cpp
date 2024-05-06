## Step 1: Install OpenCV for Java

**Download OpenCV Library:**
- Visit the [OpenCV website](https://opencv.org/releases/) and download the Java library version that matches your system.
- Extract the downloaded file to a location on your computer.

**Add OpenCV Library to Eclipse:**
- Open Eclipse IDE.
- Right-click on your project in the Project Explorer.
- Navigate to `Build Path` -> `Configure Build Path`.
- In the Libraries tab, click on `Add External JARs`.
- Browse to the `opencv\build\java` directory where you extracted the OpenCV library, and select the JAR file (`opencv-xxx.jar`).
- Click OK to add the JAR to your project's build path.

## Step 2: Configure Native Library Path

Since OpenCV uses native libraries, you need to configure the native library path to allow Java to find them.

**Locate Native Libraries:**
- Inside the extracted OpenCV directory, navigate to `opencv\build\java\x64` (for 64-bit systems) or `opencv\build\java\x86` (for 32-bit systems).
- Copy the `.dll` files (Windows), `.so` files (Linux), or `.dylib` files (macOS) depending on your operating system.

**Set Native Library Path in Eclipse:**
- In Eclipse, right-click on your project.
- Go to `Build Path` -> `Configure Build Path`.
- In the Libraries tab, expand the `opencv-xxx.jar` entry.
- Select `Native library location` and click `Edit`.
- Click on `External Folder` and browse to the directory containing the native libraries you copied earlier.
- Click OK to confirm.

## Step 3: Run the Code

**Copy the Code:**
- Copy the provided Java code into a new class file in your Eclipse project.

**Modify Input and Output Paths:**
- Modify the `inputImagePath` and `outputImagePath` variables in the `main` method to point to your input image and desired output location.

**Run the Code:**
- Right-click on your Java file containing the code.
- Select `Run As` -> `Java Application`.

## Step 4: View the Output

After running the code, check the specified output directory for the processed image. If successful, you should see the segmented result saved as specified.

Following these steps should enable you to set up and run the background removal code in Eclipse. If you encounter any issues, ensure that OpenCV is correctly configured and that the native libraries are accessible to Eclipse.

## DEMO Of Working:

https://github.com/RMTabish/Cpp/assets/91379671/4d61e36f-31e8-4ed5-8d19-f0f9639fb89f


