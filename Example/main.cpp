#include "../easytex.h"

int main()
{
	initgraph(640, 480);
	setbkcolor(WHITE);
	cleardevice();

	BeginBatchDraw();

	TexRender Renderer;
	Renderer.TextHeight	 = 24;
	Renderer.LineSpacing = 4;

	Renderer.Rendering(TEXT(R"($\int_{a}^{b}f(x)d(x).x = \frac{-b \pm \sqrt {b^2-4ac}}{2a}$
�۲�һ�����ޣ�$\lim{x\to0}\frac{sinx}{x}=1$
�������� $\lim{x\to\infity}\frac{sin\Delta}{\Delta}$ �� $\lim{}\Delta\eq0$ ����ʽ���伫�޶�Ϊ 1$
$F:X\rightarrow Y (X\in R)$
For every integer $n \geq 1$, let $H$ be an arbitrary ($2^{n-1}+1$) vertex induced subgraph of $Q^{n}$, then $\Delta(H) \geq \sqrt{n}$
ŷ����ʽ��$e^{i\pi}+1=0$
$\int kdx=kx+C$
$\int \frac{1}{\sqrt{x}}dx=2\sqrt{x}+C$
$g(xy)=g(x)\cdot f(xy)+g(x)^{2}$ ($x\in \R$)
${Z_{i}\in\C}_{i\in\N} Z\in\C$
$\lim{i\to\infity}Z_{i}=Z$
$z=re^{i\phi}, -\pi\ge\phi\geq\pi$
)"),
					   40, 40);

	saveimage(TEXT("./demo.png"));

	while (true)
	{
		FlushBatchDraw();

		Sleep(8);
	}

	EndBatchDraw();

	return 0;
}