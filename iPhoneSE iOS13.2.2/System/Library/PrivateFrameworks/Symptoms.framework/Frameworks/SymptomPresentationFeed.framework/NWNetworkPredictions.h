/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NWNetworkPredictions : NSObject <NSSecureCoding> {

	NSDate* _changePointAt;
	long long _toQuality;
	double _confidence;
	long long _resolutionSeconds;

}

@property (readonly) NSDate * changePointAt;                   //@synthesize changePointAt=_changePointAt - In the implementation block
@property (readonly) long long toQuality;                      //@synthesize toQuality=_toQuality - In the implementation block
@property (readonly) double confidence;                        //@synthesize confidence=_confidence - In the implementation block
@property (readonly) long long resolutionSeconds;              //@synthesize resolutionSeconds=_resolutionSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(NSDate *)changePointAt;
-(long long)toQuality;
-(long long)resolutionSeconds;
@end

