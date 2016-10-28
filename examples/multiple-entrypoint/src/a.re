/* open Js */

/*
        g.begin();
        g.clear(Color.Black);
        g.setPipeline(pipeline);
        g.setVertexBuffer(vertices);
        g.setIndexBuffer(indices);
        g.drawIndexedVertices();
        g.end();
*/

/*

            SystemImpl.gl = canvas.getContext("experimental-webgl", { alpha: false, antialias: options.samplesPerPixel > 1, stencil: true, preserveDrawingBuffer: true } );
            if (SystemImpl.gl != null) {
                SystemImpl.gl.pixelStorei(GL.UNPACK_PREMULTIPLY_ALPHA_WEBGL, 1);
                SystemImpl.gl.getExtension("OES_texture_float");
                SystemImpl.gl.getExtension("OES_texture_float_linear");
                halfFloat = SystemImpl.gl.getExtension("OES_texture_half_float");
                SystemImpl.gl.getExtension("OES_texture_half_float_linear");
                depthTexture = SystemImpl.gl.getExtension("WEBGL_depth_texture");
                SystemImpl.gl.getExtension("EXT_shader_texture_lod");
                SystemImpl.gl.getExtension("OES_standard_derivatives");
                anisotropicFilter = SystemImpl.gl.getExtension("EXT_texture_filter_anisotropic");
                if (anisotropicFilter == null) anisotropicFilter = SystemImpl.gl.getExtension("WEBKIT_EXT_texture_filter_anisotropic");
                drawBuffers = SystemImpl.gl.getExtension('WEBGL_draw_buffers');
                elementIndexUint = SystemImpl.gl.getExtension("OES_element_index_uint");
                gl = true;
                Shaders.init();
}

*/

let module Graphics = {

type color = {
    r: float,
    g: float,
    b: float,
    a: float
};

let begin_ = fun () => {

};

let clear = fun (gl, color) => { /*depth,stencil*/

Js.Unsafe.meth_call gl "clearColor" [|Js.Unsafe.inject color.r, Js.Unsafe.inject color.g, Js.Unsafe.inject color.b, Js.Unsafe.inject color.a|];
Js.Unsafe.meth_call gl "clear" [|Js.Unsafe.inject 16384 |];

};

let setPipeline = fun (pipe) => {

};

let setVertexBuffer = fun (vertexBuffer) => {

};

let setIndexBuffer = fun (indexBuffer) => {

};

let drawIndexedVertices = fun (start, count) => {

};

let end_ = fun () => {

};

};

/*
let clear = fun (context: WebGL.renderingContext, c: Graphics.color) => {
    context.clearColor(c.r, c.g, c.b, r.a);
}
*/

print_endline "foobar!";
/* Js.Unsafe.fun_call (Js.Unsafe.js_expr "alert") [|Js.Unsafe.inject "test"|] */

let canvas = Dom_html.getElementById("test-canvas");
let gl = WebGL.getContext(Js.coerce canvas Dom_html.CoerceTo.canvas (fun _ => assert false));

Graphics.clear(gl, {r: 1.0, g: 0.7, b: 1.0, a: 1.0});

/*
Js.Unsafe.meth_call context "clearColor" [|Js.Unsafe.inject 1.0, Js.Unsafe.inject 0.0, Js.Unsafe.inject 0.0, Js.Unsafe.inject 1.0|];
Js.Unsafe.meth_call context "clear" [|Js.Unsafe.inject 16384 |];
*/

/* Js.Unsafe.fun_call (Js.Unsafe.js_expr "alert") [|Js.Unsafe.inject context|]; */

/* clear(context, {r: 100.0, g: 100.0, b: 100.0, a: 255.0}); */