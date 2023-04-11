import React from 'react';

const PhonePrediction = () => {
  const predictedPrice = 149.99; // replace with your actual price prediction logic

  return (
    <div className="price-prediction">
      <h2>Price Prediction</h2>
      <p className="predicted-price">${predictedPrice}</p>
      <p className="prediction-details">Based on market trends and historical data</p>
    </div>
  );
};

export default PhonePrediction;
