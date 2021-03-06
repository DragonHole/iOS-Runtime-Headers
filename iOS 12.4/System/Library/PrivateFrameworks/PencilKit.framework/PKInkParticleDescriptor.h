/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSString;

@interface PKInkParticleDescriptor : NSObject {

	BOOL _adjustEndCapParticleAlpha;
	double _dynamicStep;
	unique_ptr<PKFunction, std::__1::default_delete<PKFunction> >* _particleSpacingFunction;
	NSString* _textureName;
	CGImageRef _textureImage;
	double _particleSpacing;
	long long _particleCount;
	unsigned long long _particleRotation;
	CGSize _particleSize;

}

@property (nonatomic,copy) NSString * textureName;                             //@synthesize textureName=_textureName - In the implementation block
@property (nonatomic,retain) CGImageRef textureImage;                          //@synthesize textureImage=_textureImage - In the implementation block
@property (assign,nonatomic) double particleSpacing;                           //@synthesize particleSpacing=_particleSpacing - In the implementation block
@property (assign,nonatomic) long long particleCount;                          //@synthesize particleCount=_particleCount - In the implementation block
@property (assign,nonatomic) CGSize particleSize;                              //@synthesize particleSize=_particleSize - In the implementation block
@property (assign,nonatomic) unsigned long long particleRotation;              //@synthesize particleRotation=_particleRotation - In the implementation block
+(id)particleDescriptorWithName:(id)arg1 texture:(CGImageRef)arg2 particleSpacing:(double)arg3 particleCount:(long long)arg4 particleSize:(CGSize)arg5 particleRotation:(unsigned long long)arg6 ;
-(void)setParticleSize:(CGSize)arg1 ;
-(BOOL)adjustEndCapParticleAlpha;
-(double)particleSpacing;
-(double)dynamicStep;
-(unsigned long long)particleRotation;
-(void)setTextureImage:(CGImageRef)arg1 ;
-(void)setTextureName:(NSString *)arg1 ;
-(void)setParticleSpacing:(double)arg1 ;
-(void)setParticleCount:(long long)arg1 ;
-(void)setParticleRotation:(unsigned long long)arg1 ;
-(void)setParticleSpacingFunction:(unique_ptr<PKFunction, std::__1::default_delete<PKFunction> >*)arg1 ;
-(unique_ptr<PKFunction, std::__1::default_delete<PKFunction> >*)particleSpacingFunction;
-(void)setAdjustEndCapParticleAlpha:(BOOL)arg1 ;
-(void)setDynamicStep:(double)arg1 ;
-(NSString *)textureName;
-(CGImageRef)textureImage;
-(long long)particleCount;
-(CGSize)particleSize;
@end

