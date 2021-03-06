/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/DKDGLShaderQualifier.h>

@interface DKDGLShaderQualifierPoint3D : DKDGLShaderQualifier {

	SCD_Struct_DK8 _GLPoint3DValue;
	SCD_Struct_DK8 _proposedGLPoint3DValue;

}

@property (getter=LPoint3DValue,nonatomic,readonly) SCD_Struct_DK8 GLPoint3DValue;              //@synthesize GLPoint3DValue=_GLPoint3DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_DK8 proposedGLPoint3DValue;                             //@synthesize proposedGLPoint3DValue=_proposedGLPoint3DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_DK8)GLPoint3DValue;
-(void)setProposedGLPoint3DValue:(SCD_Struct_DK8)arg1 ;
-(SCD_Struct_DK8)proposedGLPoint3DValue;
-(id)description;
@end

