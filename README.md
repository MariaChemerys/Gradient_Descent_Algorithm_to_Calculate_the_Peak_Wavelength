<h1 align="center">Gradient Descent Algorithm to Calculate the Peak Wavelength of the Blackbody Radiation Spectrum</h1>

<h2>Description</h2>
This project is an algorithm that I designed to compute the peak wavelength of the blackbody radiation spectrum. It is a part of my high school <a href="https://github.com/MariaChemerys/Calculation_of_the_Peak_Wavelength_of_the_Blackbody_Radiation_Spectrum_Using_Derivative_Analysis/blob/master/Mathematics%20Internal%20Assessment.pdf">research</a> on the topic <strong><em>To what extent do the computational algorithms written in C++ programming language differ in time complexity when computing the peak wavelength of the blackbody radiation spectrum?</strong></em> <br>

<h2>Theory and the Underlying Mathematics</h2>
A <b>blackbody</b> is an idealized object that absorbs all incoming electromagnetic radiation. Blackbodies are used by astronomers to model the radiation emitted by stars and planets. Using the blackbody radiation spectrum, the temperatures and properties of these celestial objects can be estimated. By employing Planck's radiation law, this spectrum can be described mathematically. <br>
<b>Planck's Law</b> relates the spectral radiance of a black body (an idealized object that absorbs all incoming electromagnetic radiation) to its temperature and wavelength:

<p align="center">
<img src="https://github.com/MariaChemerys/Calculation_of_the_Peak_Wavelength_of_the_Blackbody_Radiation_Spectrum_Using_Derivative_Analysis/blob/master/Planck's%20Law.png?raw=true" width="320" height=auto />
</p>

Where:<br>
• B is the spectral radiance in watts per square meter per steradian per meter (W⁻²sr⁻¹m⁻¹)<br>
• λ is the wavelength in metres (m)<br>
• T is the temperature in kelvins (K)<br>
• h is Planck's constant in joule-seconds (6.626 ⋅ 10⁻³⁴ Js)<br>
• c is the speed of light in a vacuum in metres per second (3.0 ⋅ 10⁸ ms⁻¹)<br>
• k is the Boltzmann constant in joules per kelvin (1.381 ⋅ 10⁻²³ JK⁻¹)<br>

The graph that illustrates this relationship at a constant temperature (the blackbody radiation spectrum at a constant temperature) is provided below:
<p align="center">
<img src="https://github.com/MariaChemerys/Calculation_of_the_Peak_Wavelength_of_the_Blackbody_Radiation_Spectrum_Using_Derivative_Analysis/blob/master/Blackbody%20Radiation%20Spectrum.png?raw=true" width="400" height=auto />
</p>

The global maximum of this function occurs at the peak wavelength λ<sub>max</sub>. To develop 

<h2>Technologies Used</h2>
<p align="left">
  <img src="https://img.shields.io/badge/Visual%20Studio-7509b0?style=for-the-badge" alt="Visual Studio" />
  <img src="https://img.shields.io/badge/C++-24b8f2?style=for-the-badge" alt="C++" />
</p>
