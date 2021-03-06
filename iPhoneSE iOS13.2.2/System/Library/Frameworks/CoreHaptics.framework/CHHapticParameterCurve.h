/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CHHapticParameterCurve : NSObject {

	NSString* _param;
	double _time;
	NSArray* _controlPoints;

}

@property (readonly) NSString * parameterID;               //@synthesize param=_param - In the implementation block
@property (assign) double relativeTime;                    //@synthesize time=_time - In the implementation block
@property (readonly) NSArray * controlPoints; 
-(id)init;
-(NSArray *)controlPoints;
-(void)setRelativeTime:(double)arg1 ;
-(double)relativeTime;
-(NSString *)parameterID;
-(id)initWithParameterID:(id)arg1 controlPoints:(id)arg2 relativeTime:(double)arg3 ;
@end

