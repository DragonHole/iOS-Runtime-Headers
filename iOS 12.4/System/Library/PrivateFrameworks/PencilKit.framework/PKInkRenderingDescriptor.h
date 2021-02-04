/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject {

	NSString* _identifier;
	unsigned long long _version;
	unsigned long long _type;
	unsigned long long _blendMode;
	PKInkParticleDescriptor* _particleDescriptor;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long blendMode;                              //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) PKInkParticleDescriptor * particleDescriptor;              //@synthesize particleDescriptor=_particleDescriptor - In the implementation block
-(PKInkParticleDescriptor *)particleDescriptor;
-(void)setParticleDescriptor:(PKInkParticleDescriptor *)arg1 ;
-(NSString *)identifier;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(unsigned long long)blendMode;
-(void)setBlendMode:(unsigned long long)arg1 ;
@end
