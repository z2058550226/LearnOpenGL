#version 330 core
in vec3 ourColor;
in vec2 TexCoord;

vec2 myTexCoord = vec2(1-TexCoord.x, TexCoord.y);

out vec4 color;

uniform sampler2D ourTexture1;
uniform sampler2D ourTexture2;

uniform float lerp;

void main()
{
	color = mix(texture(ourTexture1,TexCoord), texture(ourTexture2, myTexCoord), lerp);
}