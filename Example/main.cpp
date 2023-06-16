#include "../easytex.h"

int main()
{
	// ����һ�� EasyX ����
	initgraph(640, 480);
	// ���ñ���ɫ
	setbkcolor(WHITE);
	cleardevice();

	BeginBatchDraw();

	// ����һ�� EasyTex ��Ⱦ��
	TexRender Renderer;
	// ��������߶�
	Renderer.TextHeight = 24;
	// �����м��
	Renderer.LineSpacing = 4;
	// ��Ⱦ LaTeX ����
	Renderer.Rendering(TEXT(R"(�۲�һ�����ޣ�$\lim{x\to0}\frac{sinx}{x}=1$
�������� $\lim{x\to\infity}\frac{sin\Delta}{\Delta}$ �� $\lim{}\Delta\eq0$ ����ʽ���伫�޶�Ϊ 1$
$F:X\rightarrow Y (X\in R)$
For every integer $n \geq 1$, let $H$ be an arbitrary ($2^{n-1}+1$) vertex induced
subgraph of $Q^{n}$, then $\Delta(H) \geq \sqrt{n}$
ŷ����ʽ��$e^{i\pi}+1=0$
$\int kdx=kx+C$
$\int \frac{1}{\sqrt{x}}dx=2\sqrt{x}+C$
$g(xy)=g(x)\cdot f(xy)+g(x)^{2}$ ($x\in \R$)
${Z_{i}\in\C}_{i\in\N} Z\in\C$
$\lim{i\to\infity}Z_{i}=Z$
)"),
					   40, 40);

	FlushBatchDraw();

	saveimage(TEXT("./demo.png"));

	while (true)
	{
		FlushBatchDraw();

		Sleep(8);
	}

	EndBatchDraw();

	return 0;
}