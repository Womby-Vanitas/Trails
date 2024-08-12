## Deep Neural Network
> 일반적인 머신 러닝에서 발생하는 두 가지 근본적 문제는, ***Non-Linear Data handling***, ***Overfitting*** 이다.
> > ***Non-Linear Data handling***
> > 비선형성을 선형성으로 표현할 수 있는 방법은, 수 많은 선형성의 무엇이 모여 전체적으로 봤을 때 그것이 비선형성의 무언가가 되도록 하는 것이다.
> 
> > ***Overfitting***
> > 준비된 데이터가 충분히 많다면 이 문제를 해결할 수 있다. 다만, 준비된 데이터는 `iid condition : 학습용 데이터와 검증용 데이터의 상태 분포가 서로 동일해야 한다.` 을 만족해야 한다.

## Convolution Neural Netwrok
> **Deep Neural Network** 의 가장 기본적인 형태를 하고 있고, 일반적으로 이미지 데이터 분류에 사용된다.
>
> **Convolution Neural Network** 의 기본 흐름은 : `이미지 데이터 입력 - Convolution Layer - Fully Connected Layer - result` 이다.
>
> `Convolution Layer` 내부엔 `Pooling Layer` 라는 것이 또 존재하는데, 이것은 각 `Layer` 의 결과를 다음 `Layer` 로 원활히 보내주기 위해 사용된다.
>
> 또한 각 `Layer` 끝에는 `Activation Function` 이 위치해 있고 이는 비선형성을 표현하기 위해, 또는 다음 `Layer` 로 어떤 정보를 보낼 때 알맞게 변환하기 위해 사용된다.
>
> ![image](https://github.com/user-attachments/assets/184b6934-0d3a-4e47-9523-d85cfd6a639b)
>
> ### 요약
> - `Pooling Layer` : 입력받은 데이터의 복잡도를 줄여준다.
> - `Convolution Layer` : 여러 **Convolution filter** 를 사용해 입력받은 데이터의 변환을 수행한다.
> - `Fully Connect Layer` : `Convolution Layer` 에서 얻은 여러 결과를 바탕으로 새로운 결과를 출력한다.
> - `Activation Function` : 입력받은 데이터들의 비선형성을 선형성을 가지도록 변환해 주는 역할을 한다. *Network* 의 제일 마지막 `Layer` 에 위치한다.

## Gradient Vanishing
> **Deep Neural Network** 의 `Layer` 층이 많아질수록, 즉 **Deep Neural Network** 의 깊이가 깊어질수록 잘 발생하는 문제이다. 
>
> 각 `Layer` 의 출력은 안정화된 값과 분포를 따르도록 설정되는데, 이 안정적 출력은 *Gaussian Distribution* 을 따른다. 이 때문에 각 출력이 $0$ 근처 값을 가질 것이고, 이 때문에 각 파라미터 또한 $0$ 에 근접한 값을 가진다. 이러한 파라미터의 연쇄로 말미암아 연산되는 전체 **Gradient** 는 0에 가까워져 **Deep Neural Network** 의 학습을 원활히 진행할 수 없게 된다.
