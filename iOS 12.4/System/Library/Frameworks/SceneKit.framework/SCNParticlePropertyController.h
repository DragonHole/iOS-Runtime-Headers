/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CAAnimation, SCNNode, NSString;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying> {

	CAAnimation* _animation;
	long long _inputMode;
	double _inputScale;
	double _inputBias;
	SCNNode* _inputOrigin;
	NSString* _inputProperty;
	id _c3dAnimation;

}

@property (nonatomic,retain) CAAnimation * animation; 
@property (assign,nonatomic) long long inputMode; 
@property (assign,nonatomic) double inputScale; 
@property (assign,nonatomic) double inputBias; 
@property (assign,nonatomic,__weak) SCNNode * inputOrigin; 
@property (nonatomic,copy) NSString * inputProperty; 
+(id)particlePropertyControllerWithAnimation:(id)arg1 ;
+(id)controllerWithAnimation:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(SCNNode *)inputOrigin;
-(void)setInputOrigin:(SCNNode *)arg1 ;
-(void)setC3dAnimation:(id)arg1 ;
-(double)inputScale;
-(double)inputBias;
-(NSString *)inputProperty;
-(id)c3dAnimation;
-(void)setInputScale:(double)arg1 ;
-(void)setInputBias:(double)arg1 ;
-(void)setInputProperty:(NSString *)arg1 ;
-(void)_customEncodingOfSCNParticlePropertyController:(id)arg1 ;
-(void)_customDecodingOfSCNParticlePropertyController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CAAnimation *)animation;
-(void)setInputMode:(long long)arg1 ;
-(long long)inputMode;
-(void)setAnimation:(CAAnimation *)arg1 ;
@end

