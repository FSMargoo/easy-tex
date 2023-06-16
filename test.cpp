#include "easytex.h"

int main()
{
	initgraph(1920, 1080);
	setbkcolor(WHITE);
	cleardevice();

	BeginBatchDraw();

	TexRender Renderer;
	Renderer.TextHeight = 24;

	Renderer.Rendering(
		TEXT(
			R"(�� $\int_{a}^{b}f(x)d(x).x = \frac{-b \pm \sqrt {b^2-4ac}}{2a}$�����ڶ�άŷ����ÿռ� $\R^{2}$ �����һ������� $f(x)$.
���䱳����$c\in\R��a\in\R��b\in\R$����Ȼ��ֻ�е� $b^{2}-4ac\lt0$ ʱ���û����� $\R^{2}$ �д���.
���ȿ��ǿ��ǵ� $\int_{a}^{b}f(x)d(x).x = \frac{-b + \sqrt {b^2-4ac}}{2a}$ ʱ���ǵ� $[a, b]$ Ϊһ�������䣬���� $Riemann$ $integral$ �Ķ��壬���� $f$ Ϊ�ڱ����� $[a, b]$ �ж����ʵֵ���� $f$�����ʱ��������Ϊ $\Alpha$ ����
$\Alpha=\sum^{n-1}_{i=1}f(t_{i})(x_{i+1}-x_{i})=\lim{\N\to\inf}\int^{a}_{b}f_{\N}dx$�����ǲ�����ԭʽ���Σ�$\int_{a}^{b}f(x)dx = \frac{-b + \sqrt {b^2-4ac}}{2a}=-\frac{b}{2a} + \frac{\sqrt {b^2-4ac}}{2a}$���� $a=1, b=0, c=-1$�����ִ�ʱ $b^{2}-4ac=0+4=4$����ʱ $\Alpha$ ��ʵ����Χ�ڴ��� $\Alpha=\frac{4}{2}=2$�����Ǵ�ʱ
����ת��Ϊ��Ѱ��һ��$[0, 1]$ �е�ʵֵ���� $f$��ʹ�� $\sum^{n-1}_{i=1}f(t_{i})(x_{i+1}-x_{i})=1$����ͷǳ����ˣ�

)"),
		/*
		*
		�۲�һ�����ޣ�$\lim{x\to0}\frac{sinx}{x}=1$
		�������� $\lim{x\to\infity}\frac{sin\Delta}{\Delta}$ �� $\lim{}\Delta\eq0$ ����ʽ���伫�޶�Ϊ 1$
		$F:X\rightarrow Y (X\in R)$
		For every integer $n \geq 1$, let $H$ be an arbitrary ($2^{n-1}+1$) vertex induced subgraph of $Q^{n}$, then
		$\Delta(H) \geq \sqrt{n}$ ŷ����ʽ��$e^{i\pi}+1=0$
		$\int kdx=kx+C$
		$\int \frac{1}{\sqrt{x}}dx=2\sqrt{x}+C$
		$g(xy)=g(x)\cdot f(xy)+g(x)^{2}$ ($x\in \R$)
		${Z_{i}\in\C}_{i\in\N} Z\in\C$
		$\lim{i\to\infity}Z_{i}=Z$
		$z=re^{i\phi}, -\pi\ge\phi\geq\pi$
		*/
		20, 20);

	saveimage(TEXT("./demo.png"));

	while (true)
	{
		FlushBatchDraw();

		Sleep(8);
	}

	EndBatchDraw();

	return 0;
}