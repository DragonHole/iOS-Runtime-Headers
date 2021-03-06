/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, UIColor;

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	NSNumber* _timerToken;
	BOOL _finalized;
	BOOL _paused;
	UIColor* _tintColor;
	double _backgroundRingAlpha;

}

@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (assign) double backgroundRingAlpha;                 //@synthesize backgroundRingAlpha=_backgroundRingAlpha - In the implementation block
@property (assign,nonatomic) BOOL paused;                      //@synthesize paused=_paused - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_maybeStartOrStopUpdates;
-(double)_progressFractionForNow:(id)arg1 ;
-(BOOL)_needsUpdates;
-(void)stopUpdatesForToken:(NSNumber*)arg1 ;
-(long long)timeTravelUpdateFrequency;
-(NSNumber*)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(double)progressFractionForNow:(id)arg1 ;
-(double)backgroundRingAlpha;
-(void)setBackgroundRingAlpha:(double)arg1 ;
-(void)finalize;
-(id)JSONObjectRepresentation;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)_commonInit;
-(void)setPaused:(BOOL)arg1 ;
-(void)_update;
-(void)_validate;
-(void)validate;
-(BOOL)paused;
@end

