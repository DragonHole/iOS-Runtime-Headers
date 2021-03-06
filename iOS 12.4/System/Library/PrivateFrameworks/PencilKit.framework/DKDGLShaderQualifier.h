/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DKDGLShaderQualifier : NSObject {

	int _uniformLocation;
	BOOL _needsUpdate;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL needsUpdate;               //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) int uniformLocation;              //@synthesize uniformLocation=_uniformLocation - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(void)setGLUniformCheckWithShader:(id)arg1 ;
-(void)updateUniformLocationWithShaderProgramObject:(int)arg1 ;
-(int)uniformLocation;
-(void)setUniformLocation:(int)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)needsUpdate;
@end

