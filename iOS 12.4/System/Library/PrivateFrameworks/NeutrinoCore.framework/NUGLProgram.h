/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSDictionary, NUGLShader;

@interface NUGLProgram : NUGLObject {

	long long _buildStatus;
	NSError* _buildError;
	NSDictionary* _uniforms;
	NSDictionary* _attributes;
	NUGLShader* _shader;

}

@property (readonly) NUGLShader * shader;                    //@synthesize shader=_shader - In the implementation block
@property (readonly) NSDictionary * uniforms;                //@synthesize uniforms=_uniforms - In the implementation block
@property (readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(void)delete;
-(id)initWithShader:(id)arg1 ;
-(void)generate:(id)arg1 ;
-(void)_build:(id)arg1 ;
-(BOOL)build:(id)arg1 error:(out id*)arg2 ;
-(NSDictionary *)uniforms;
-(NUGLShader *)shader;
-(id)init;
-(NSDictionary *)attributes;
@end
