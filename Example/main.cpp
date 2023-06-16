#include "../easytex.h"

int main()
{
	initgraph(640, 480);
	setbkcolor(WHITE);
	cleardevice();

	BeginBatchDraw();

	TexRender Renderer;
	Renderer.TextHeight	 = 24;
	Renderer.LineSpacing = 2;

	Renderer.Rendering(TEXT(
						   R"(
\begin{align}
Base Line ���ǹ���һ�����ؿ�����֣�Monte\quad Carlo\quad Integration���� \\
F_{N}=\frac{b-a}{N}\sum^{N}_{i=1}f(X_{i}) \\
���е�ÿһ�� X_{i}(i=1,2,3,...,N) Ϊ [a,b] ֮��ľ����������������\\
��ʵ F_{N} ����ѧ������Ϊ���ֽ�� \Alpha E[F_{N}]=E[\frac{b-a}{N}\sum^{N}_{i=1}f(X_{i})] \\
�������� \int_{D}f(x)dx=\lim_{N\to\inf}\frac{1}{N}\sum^{N}_{i=1}\frac{f(X_{i})}{p(X_{i})}
\end{align}
)"),
					   40, 40);

	FlushBatchDraw();

	getmessage(EM_CHAR);

	return 0;
}