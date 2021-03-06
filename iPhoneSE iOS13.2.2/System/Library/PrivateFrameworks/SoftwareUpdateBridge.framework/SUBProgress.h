/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUBProgress : NSObject <NSSecureCoding> {

	BOOL _isDone;
	float _portionComplete;
	NSString* _phase;
	double _estimatedTimeRemaining;

}

@property (nonatomic,retain) NSString * phase;                           //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) float portionComplete;                      //@synthesize portionComplete=_portionComplete - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (assign,nonatomic) BOOL isDone;                                //@synthesize isDone=_isDone - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(BOOL)isDone;
-(void)setIsDone:(BOOL)arg1 ;
-(float)portionComplete;
-(void)setPortionComplete:(float)arg1 ;
@end

