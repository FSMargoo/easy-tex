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
	Renderer.Rendering(TEXT(R"(�۲�һ�����ޣ�$lim_{x\rightarrow0}\frac{sinx}{x}=1$
�������� $lim_{x\rightarrow\infity}\frac{sin\Delta}{\Delta}$ �� $lim\Delta\eq0$ ����ʽ���伫�޶�Ϊ 1$
$F:X\rightarrow Y (X\in R)$
For every integer $n \geq 1$, let $H$ be an arbitrary ($2^{n-1}+1$) vertex induced
subgraph of $Q^{n}$, then $\Delta(H) \geq \sqrt{n}$
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