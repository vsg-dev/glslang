//
// Copyright (C) 2016 Google, Inc.
// Copyright (C) 2016 LunarG, Inc.
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//    Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
//    Redistributions in binary form must reproduce the above
//    copyright notice, this list of conditions and the following
//    disclaimer in the documentation and/or other materials provided
//    with the distribution.
//
//    Neither the name of Google, Inc., nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//

#ifndef EHLSLTOKENS_H_
#define EHLSLTOKENS_H_

namespace glslang {

enum EHlslTokenClass {
    EHTokNone = 0,

    // qualifiers
    EHTokStatic,
    EHTokConst,
    EHTokSNorm,
    EHTokUnorm,
    EHTokExtern,
    EHTokUniform,
    EHTokVolatile,
    EHTokPrecise,
    EHTokShared,
    EHTokGroupShared,
    EHTokLinear,
    EHTokCentroid,
    EHTokNointerpolation,
    EHTokNoperspective,
    EHTokSample,
    EHTokRowMajor,
    EHTokColumnMajor,
    EHTokPackOffset,
    EHTokIn,
    EHTokOut,
    EHTokInOut,
    EHTokLayout,
    EHTokGloballyCoherent,

    // primitive types
    EHTokPoint,
    EHTokLine,
    EHTokTriangle,
    EHTokLineAdj,
    EHTokTriangleAdj,

    // stream out types
    EHTokPointStream,
    EHTokLineStream,
    EHTokTriangleStream,

    // Tessellation patches
    EHTokInputPatch,
    EHTokOutputPatch,

    // template types
    EHTokBuffer,
    EHTokVector,
    EHTokMatrix,

    // scalar types
    EHTokVoid,
    EHTokString,
    EHTokBool,
    EHTokInt,
    EHTokUint,
    EHTokDword,
    EHTokHalf,
    EHTokFloat,
    EHTokDouble,
    EHTokMin16float,
    EHTokMin10float,
    EHTokMin16int,
    EHTokMin12int,
    EHTokMin16uint,

    // vector types
    EHTokBool1,
    EHTokBool2,
    EHTokBool3,
    EHTokBool4,
    EHTokFloat1,
    EHTokFloat2,
    EHTokFloat3,
    EHTokFloat4,
    EHTokInt1,
    EHTokInt2,
    EHTokInt3,
    EHTokInt4,
    EHTokDouble1,
    EHTokDouble2,
    EHTokDouble3,
    EHTokDouble4,
    EHTokUint1,
    EHTokUint2,
    EHTokUint3,
    EHTokUint4,
    EHTokHalf1,
    EHTokHalf2,
    EHTokHalf3,
    EHTokHalf4,
    EHTokMin16float1,
    EHTokMin16float2,
    EHTokMin16float3,
    EHTokMin16float4,
    EHTokMin10float1,
    EHTokMin10float2,
    EHTokMin10float3,
    EHTokMin10float4,
    EHTokMin16int1,
    EHTokMin16int2,
    EHTokMin16int3,
    EHTokMin16int4,
    EHTokMin12int1,
    EHTokMin12int2,
    EHTokMin12int3,
    EHTokMin12int4,
    EHTokMin16uint1,
    EHTokMin16uint2,
    EHTokMin16uint3,
    EHTokMin16uint4,

    // matrix types
    EHTokInt1x1,
    EHTokInt1x2,
    EHTokInt1x3,
    EHTokInt1x4,
    EHTokInt2x1,
    EHTokInt2x2,
    EHTokInt2x3,
    EHTokInt2x4,
    EHTokInt3x1,
    EHTokInt3x2,
    EHTokInt3x3,
    EHTokInt3x4,
    EHTokInt4x1,
    EHTokInt4x2,
    EHTokInt4x3,
    EHTokInt4x4,
    EHTokUint1x1,
    EHTokUint1x2,
    EHTokUint1x3,
    EHTokUint1x4,
    EHTokUint2x1,
    EHTokUint2x2,
    EHTokUint2x3,
    EHTokUint2x4,
    EHTokUint3x1,
    EHTokUint3x2,
    EHTokUint3x3,
    EHTokUint3x4,
    EHTokUint4x1,
    EHTokUint4x2,
    EHTokUint4x3,
    EHTokUint4x4,
    EHTokBool1x1,
    EHTokBool1x2,
    EHTokBool1x3,
    EHTokBool1x4,
    EHTokBool2x1,
    EHTokBool2x2,
    EHTokBool2x3,
    EHTokBool2x4,
    EHTokBool3x1,
    EHTokBool3x2,
    EHTokBool3x3,
    EHTokBool3x4,
    EHTokBool4x1,
    EHTokBool4x2,
    EHTokBool4x3,
    EHTokBool4x4,
    EHTokFloat1x1,
    EHTokFloat1x2,
    EHTokFloat1x3,
    EHTokFloat1x4,
    EHTokFloat2x1,
    EHTokFloat2x2,
    EHTokFloat2x3,
    EHTokFloat2x4,
    EHTokFloat3x1,
    EHTokFloat3x2,
    EHTokFloat3x3,
    EHTokFloat3x4,
    EHTokFloat4x1,
    EHTokFloat4x2,
    EHTokFloat4x3,
    EHTokFloat4x4,
    EHTokDouble1x1,
    EHTokDouble1x2,
    EHTokDouble1x3,
    EHTokDouble1x4,
    EHTokDouble2x1,
    EHTokDouble2x2,
    EHTokDouble2x3,
    EHTokDouble2x4,
    EHTokDouble3x1,
    EHTokDouble3x2,
    EHTokDouble3x3,
    EHTokDouble3x4,
    EHTokDouble4x1,
    EHTokDouble4x2,
    EHTokDouble4x3,
    EHTokDouble4x4,

    // texturing types
    EHTokSampler,
    EHTokSampler1d,
    EHTokSampler2d,
    EHTokSampler3d,
    EHTokSamplerCube,
    EHTokSamplerState,
    EHTokSamplerComparisonState,
    EHTokTexture,
    EHTokTexture1d,
    EHTokTexture1darray,
    EHTokTexture2d,
    EHTokTexture2darray,
    EHTokTexture3d,
    EHTokTextureCube,
    EHTokTextureCubearray,
    EHTokTexture2DMS,
    EHTokTexture2DMSarray,
    EHTokRWTexture1d,
    EHTokRWTexture1darray,
    EHTokRWTexture2d,
    EHTokRWTexture2darray,
    EHTokRWTexture3d,
    EHTokRWBuffer,

    // Structure buffer variants
    EHTokAppendStructuredBuffer,
    EHTokByteAddressBuffer,
    EHTokConsumeStructuredBuffer,
    EHTokRWByteAddressBuffer,
    EHTokRWStructuredBuffer,
    EHTokStructuredBuffer,

    // variable, user type, ...
    EHTokIdentifier,
    EHTokTypeName,
    EHTokClass,
    EHTokStruct,
    EHTokCBuffer,
    EHTokTBuffer,
    EHTokTypedef,

    // constant
    EHTokFloatConstant,
    EHTokDoubleConstant,
    EHTokIntConstant,
    EHTokUintConstant,
    EHTokBoolConstant,
    EHTokStringConstant,

    // control flow
    EHTokFor,
    EHTokDo,
    EHTokWhile,
    EHTokBreak,
    EHTokContinue,
    EHTokIf,
    EHTokElse,
    EHTokDiscard,
    EHTokReturn,
    EHTokSwitch,
    EHTokCase,
    EHTokDefault,

    // expressions
    EHTokLeftOp,
    EHTokRightOp,
    EHTokIncOp,
    EHTokDecOp,
    EHTokLeOp,
    EHTokGeOp,
    EHTokEqOp,
    EHTokNeOp,
    EHTokAndOp,
    EHTokOrOp,
    EHTokXorOp,
    EHTokAssign,
    EHTokMulAssign,
    EHTokDivAssign,
    EHTokAddAssign,
    EHTokModAssign,
    EHTokLeftAssign,
    EHTokRightAssign,
    EHTokAndAssign,
    EHTokXorAssign,
    EHTokOrAssign,
    EHTokSubAssign,
    EHTokLeftParen,
    EHTokRightParen,
    EHTokLeftBracket,
    EHTokRightBracket,
    EHTokLeftBrace,
    EHTokRightBrace,
    EHTokDot,
    EHTokComma,
    EHTokColon,
    EHTokColonColon,
    EHTokSemicolon,
    EHTokBang,
    EHTokDash,
    EHTokTilde,
    EHTokPlus,
    EHTokStar,
    EHTokSlash,
    EHTokPercent,
    EHTokLeftAngle,
    EHTokRightAngle,
    EHTokVerticalBar,
    EHTokCaret,
    EHTokAmpersand,
    EHTokQuestion,
};

} // end namespace glslang

#endif // EHLSLTOKENS_H_
